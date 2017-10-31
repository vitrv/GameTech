#include "Client.h"

Client::Client(NetManager* net, Ogre::String host_ip)
{
	netMgr = net;
	netMgr->joinMultiPlayer(host_ip);
}

void Client::joinLobby(){
	netMgr->close();
}

void Client::update(Ogre::String message){
	const char* cmsg = message.c_str();
	netMgr->messageServer(PROTOCOL_UDP, cmsg, message.size());
}
