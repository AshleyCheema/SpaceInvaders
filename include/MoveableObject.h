

#ifndef __MOVEABLE_OBJECT_H__
#define __MOVEABLE_OBJECT_H__

#include "Vector2.h"

class MoveableObject
{
public:

	//Constructor with arguments
	MoveableObject(char* a_textureFileName, float a_width, float a_height);


	MoveableObject();
	virtual ~MoveableObject();
	
	Vector2 GetPosition() const;
	void SetPosition(const Vector2& a_v2Position);

protected:

	unsigned int m_iSpriteID;

private:

	Vector2 m_Position;


};

#endif //__MOVEABLE_OBJECT_H__