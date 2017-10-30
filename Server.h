#include <Ogre.h>
#include "NetManager.h"
#include "Simulator.h"

class Server{
protected:
	NetManager* netMgr;
public:
	Server(NetManager* net);
	void startLobby();
	void closeLobby();
	void update(Ogre::String message);
};