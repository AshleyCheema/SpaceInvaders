#ifndef __ENEMY_H__
#define __ENEMY_H__

#include "Entity.h"

class Enemy : public Entity
{
public:
	//No Default Enemy() Constructor
	Enemy(const char* a_pTextureFileName, const float* a_v2Dimensions);
	Enemy(const char* a_pTextureFileName, const float* a_v2Dimensions, const float* a_fv4UVCoords);
	Enemy(const Enemy& a_copy);
	virtual ~Enemy();

	virtual void Update(float a_fDeltaTime);
	virtual void Draw();


protected:

private:
	float m_xPos;
	float m_yPos;
	unsigned int m_fHealth;

};

#endif //__ENEMY_H__