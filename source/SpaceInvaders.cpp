#include "Application.h"
#include "SpaceInvaders.h"
#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/ext.hpp>
 
#include "Player.h"
 
//This is an example of a complex #define that obfuscates the entry point of the application
//APPLICATION_ENTRY can be found in Application.h it is a define that hides the main() entry point
//of the application. This is done so that each application can be called and run in the same manner
//it is not something that needs to be fully understood until much later in the CGP course.
 
APPLICATION_ENTRY(SpaceInvaders);
 
//A default constructor for SpaceInvaders() and it's accompanying destructor ~FrameworkTest()
//Any initialisation could be placed in here, these are empty for now. They are here to ensure that
//the correct application creation sequence is called.
SpaceInvaders::SpaceInvaders(){}
SpaceInvaders::~SpaceInvaders(){}
 
//onCreate is a function that is called once on the creation of the application. This is where items 
//that will last for the duration of the application should be created. EG Player sprites
bool SpaceInvaders::onCreate(int a_argc, char* a_argv[])
{
	Application::GetScreenSize(m_iScreenWidth, m_iScreenHeight);
 
	Application::SetBackgroundColor(UG::SColour(0x00, 0x00, 0x00, 0xFF));
	Application::AddFont("./fonts/invaders.fnt");
	//\Now lets create the sprite for our players cannon. That's right in space invaders we control a cannon
	//\So lets create that with an appropriate variable name and move it to a suitable location (say the middle of our screen)
	float x = m_iScreenWidth * 0.5f; float y = m_iScreenHeight * 0.1f;

	m_pPlayer = new Player("./images/cannon.png");
        //\For SetPosition to function you will need to have written a function in the Entity class called SetPosition that allows for two floats to be passed in then calls Move Sprite with this information
	m_pPlayer->SetPosition(x, y);
 
	return true;
}
 
//onUpdate - this function is called each frame of the application, the a_deltaTime variable is a floating point value
//that gives the length of time that has passed since the previous frame was rendered.
void SpaceInvaders::onUpdate(float a_deltaTime)
{
 
	m_pPlayer->Update(a_deltaTime);
	// quit our application when escape is pressed
	if (Application::IsKeyDown(UG::KEY_ESCAPE))
		destroy();
}
 
//onDraw is called each frame after onUpdate has been called
//this is where any rendering should be carried out
void SpaceInvaders::onDraw()
{
	Application::ClearScreen();
 
	m_pPlayer->Draw();
	Application::SetFont("./fonts/invaders.fnt");
	Application::DrawString("HI-SCORE", (int)(m_iScreenWidth * 0.4f), m_iScreenHeight - 2, 1.f);
	Application::DrawString("CREDIT", (int)(m_iScreenWidth * 0.65f), 38);
 
	Application::DrawLine(0, 40, m_iScreenWidth, 40, UG::SColour(0x00, 0xFC, 0x00, 0xFF));
	Application::SetFont(nullptr);
	
 
}
 
//onDestroy - this will be called at the termination of the application. Any items which need to be
//deallocated should be done so in here. E.G things that were created in the onCreate function.
void SpaceInvaders::onDestroy()
{
	delete m_pPlayer;
}