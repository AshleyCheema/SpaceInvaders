#ifndef __ENTITY_H__
#define __ENTITY_H__


class Entity
{
public:
	//Default Constructor 
	Entity(const char* a_textureFileName, float a_width, float a_height);
	Entity(const char* a_textureFileName, const float* a_fv2Dimension, const float* a_fv4UVCoords);
	//Copy Constructor
	Entity(const Entity& a_Entity);

	//Virtual destructor - virtual so that child classes will call it upon their destruction
	virtual ~Entity();

	virtual void Update(float a_fdeltaTime);
	virtual void Draw();

	void GetPosition(float x, float y);
	void SetPosition(float x, float y);


protected:

	unsigned int m_iSpriteID;
	float m_fWidth;
	float m_fHeight;
private:

};

#endif //__ENTITY_H__	