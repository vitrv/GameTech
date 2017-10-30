#include <Ogre.h>
#include "NetManager.h"
#include "Simulator.h"

class Server{
protected:
	Ogre::SceneManager* sceneMgr;
	Simulator* simulator;
	NetManager* netMgr;
public:
	Server(Ogre::SceneManager* scnMgr, Simulator* sim, NetManager* net);
	void startLobby();
	void closeLobby();
	void update(Ogre::String message);
};
