#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "Entity.h"
#include "Application.h"

#define MAX_PLAYER_KEYS 3

class Player : public Entity
{
public:
	Player(const char* a_textureFileName);
	Player(const Player& a_Player);

	virtual ~Player();

	virtual void Update(float a_fDeltaTime);
	virtual void Draw();

	void SetPosition(float x_pos, float y_pos); 


protected:
private:

	float posx;
	float posy;
	unsigned int m_fLives;
	unsigned int m_fHealth;

};
#endif //__PLAYER_H__