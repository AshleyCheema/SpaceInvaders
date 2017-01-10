
#include "Application.h"
#include "MoveableObject.h"
#include "SpaceInvaders.h"
MoveableObject::MoveableObject(char* a_textureFileName, float a_width, float a_height)
{
	m_iSpriteID =  UG::Application::CreateSprite(a_textureFileName, a_width, a_height, true);
}

MoveableObject::~MoveableObject()
{

}


void MoveableObject::SetPosition(const Vector2& a_vPosition)

{
	m_Position.x = a_vPosition.x;
	m_Position.y = a_vPosition.y;
}

Vector2 MoveableObject::GetPosition() const
{
	return m_Position;
}
