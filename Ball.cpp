#include "Ball.h"

Ball::Ball(Ogre::SceneManager* scnMgr, Simulator* sim, bool server) : GameObject("ball",scnMgr,sim)
{
	geom = scnMgr->createEntity("ball", Ogre::SceneManager::PT_SPHERE);
	geom->setMaterialName("blank");
	geom->setCastShadows(true);
	rootNode->attachObject(geom);
	rootNode->setPosition(-300,50,0);
	restitution = 0.6f;
	friction = 0.1f;
	if(server)
	    mass = 1.0f;
	else
	    mass = 0.0f;
	bRadius = 40.0f;
	shape = new btSphereShape(bRadius);
	firstHit = false;
	score = 0;
}

void Ball::update(float elapsedTime) {
	lastTime += elapsedTime;
	simulator->getWorld()->contactTest(body, *cCallBack);
	if (context->hit && (context->velNorm > 2.0 || context->velNorm < -2.0) 
		&& (lastTime > 0.5 || (context->lastBody != context->body && lastTime > 0.1))) {
		firstHit = true;
		if(context->theObject->name.substr(0,2) == "ob")
			score += 10;
		lastTime = 0.0f;
	}
	context->hit = false;
}

