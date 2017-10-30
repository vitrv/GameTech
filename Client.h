#include <Ogre.h>
#include "NetManager.h"
#include "Simulator.h"

class Client{
protected:
	NetManager* netMgr;
public:
	Client(NetManager* net);
	void joinLobby();
	void update(Ogre::String message);
};
