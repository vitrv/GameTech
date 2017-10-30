#include "Server.h"

Server::Server(Ogre::SceneManager* scnMgr, Simulator* sim, NetManager* net)
{
	sceneMgr = scnMgr;
	simulator = sim;
	netMgr = net;
	netMgr->addNetworkInfo(PROTOCOL_UDP, "player1");
	netMgr->startServer();
}

void Server::startLobby(){
	netMgr->multiPlayerInit(1);
}

void Server::closeLobby(){
	netMgr->stopServer();
}

void Server::update(Ogre::String message){
	const char* cmsg = message.c_str();
	netMgr->messageClients(PROTOCOL_UDP, cmsg, message.size());
}
