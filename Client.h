#include <Ogre.h>
#include "NetManager.h"
#include "Simulator.h"

class Client{
protected:
	NetManager* netMgr;
public:
	Client(NetManager* net, Ogre::String host_ip);
	void update(Ogre::String message);
};
