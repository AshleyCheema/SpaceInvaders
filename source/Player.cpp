#include "Player.h"

Player::Player(const char* a_TextureFileName) : Entity(a_TextureFileName, 64, 32)
{

}

Player::Player(const Player& a_player) : Entity(a_player)
{

}

Player::~Player()
{
}

void Player::SetPosition(float x_pos, float y_pos)
{
	posx = x_pos;
	posy = y_pos;
}

void Player::Update(float a_fTimeStep)
{
	Entity::Update(a_fTimeStep);

	//Use the following to test for player Movement
	if (UG::Application::IsKeyDown(UG::KEY_RIGHT))
	{
		posx += 5.f;
	}
	if (UG::Application::IsKeyDown(UG::KEY_LEFT))
	{
		posx -= 5.f;
	}

	if (UG::Application::IsKeyDown(UG::KEY_UP))
	{
		posy += 5.f;
	}
	if (UG::Application::IsKeyDown(UG::KEY_DOWN))
	{
		posy -= 5.f;
	}
	UG::Application::MoveSprite(m_iSpriteID, posx, posy);


}

void Player::Draw()
{
	Entity::Draw();
}