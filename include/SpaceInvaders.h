#ifndef __SpaceInvaders_H_
#define __SpaceInvaders_H_

#include "Application.h"
#include <glm/glm.hpp>

class Player;

// Derived application class that wraps up all globals neatly
class SpaceInvaders : public UG::Application
{
public:

	SpaceInvaders();
	virtual ~SpaceInvaders();

protected:

	virtual bool onCreate(int a_argc, char* a_argv[]);
	virtual void onUpdate(float a_deltaTime);
	virtual void onDraw();
	virtual void onDestroy();

private:
	int m_iScreenWidth;
	int m_iScreenHeight;

	Player* m_pPlayer;

};

#endif // __SpaceInvaders_H_