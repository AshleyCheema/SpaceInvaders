#include "Entity.h"
#include "Application.h"


Entity::Entity(const char* a_textureFileName, float a_width, float a_height)
{
	m_iSpriteID = UG::Application::CreateSprite(a_textureFileName, a_width, a_height, true);
}

Entity::Entity(const char* a_textureFileName, const float* a_v2Size, const float* a_fv4UVCoords)
{

	float origin[2] = { 0.5f, 0.5f };
	m_iSpriteID = UG::Application::CreateSprite(a_textureFileName, a_v2Size, origin, a_fv4UVCoords);
}

Entity::Entity(const Entity& a_Entity)
{
	m_iSpriteID = UG::Application::DuplicateSprite(a_Entity.m_iSpriteID);
	m_fWidth = a_Entity.m_fWidth;
	m_fHeight = a_Entity.m_fHeight;

}

Entity::~Entity()
{
	UG::Application::DestroySprite(m_iSpriteID);
}

void Entity::GetPosition(float x_pos, float y_pos)
{
	UG::Application::GetSpritePosition(m_iSpriteID, x_pos, y_pos);
}

void Entity::SetPosition(float x_pos, float y_pos)
{
	UG::Application::MoveSprite(m_iSpriteID, x_pos, y_pos);
}

void Entity::Update(float a_fDeltaTime)
{
}

void Entity::Draw()
{
	UG::Application::DrawSprite(m_iSpriteID);
}