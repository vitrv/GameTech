#include "Server.h"

Server::Server(NetManager* net)
{
	netMgr = net;
	netMgr->addNetworkInfo(PROTOCOL_ALL, "player1");
	netMgr->startServer();
}

void Server::startLobby(){
	netMgr->multiPlayerInit();
}

void Server::closeLobby(){
	netMgr->close();
}

void Server::update(Ogre::String message){
	const char* cmsg = message.c_str();
	netMgr->messageClients(PROTOCOL_UDP, cmsg, message.size());
}
