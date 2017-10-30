#include "Client.h"

Client::Client(NetManager* net)
{
	netMgr = net;
	netMgr->addNetworkInfo(PROTOCOL_UDP, "player1");
	netMgr->startClient();
}

void Client::joinLobby(){
	netMgr->stopClient();
}

void Client::update(Ogre::String message){
	const char* cmsg = message.c_str();
	netMgr->messageServer(PROTOCOL_UDP, cmsg, message.size());
}
