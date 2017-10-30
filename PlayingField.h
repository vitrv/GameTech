#include <Ogre.h> 
#include "Wall.h"
#include "Obstacle.h"
#include "Simulator.h"

class PlayingField{
	public:
		PlayingField(Ogre::SceneManager* scnMgr, Simulator* sim);
		float getXLength(){return x_length;}
		float getZLength(){return z_length;}
		void addToSimulator();
		void turnOffSound();
		void turnOnSound();
		void rebuildObstacles(Ogre::SceneManager* scnMgr, Simulator* sim);
	protected:
		float x_length;
		float z_length;
		Wall* walls[6];
		Obstacle* obs[32];
		void makeObstacles(Ogre::SceneManager* scnMgr, Simulator* sim);
};