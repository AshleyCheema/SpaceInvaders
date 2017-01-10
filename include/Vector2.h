
#ifndef __VECTOR2_H__
#define __VECTOR2_H__

class Vector2
{
public:
	//This is the constructor for a Vector 2 class
	Vector2();
	//This is another constructor and that takes two argument
	Vector2(float a_x, float a_y);
	//And another constructor taking one argument as a float
	Vector2(float* a_fv2);
	//Destructor - called when we call delete on a new'd object
	~Vector2();


	void SetValue(float a_x, float a_y);
	void SetValue(const Vector2& a_v2);
	float x; 
	float y;


};

#endif //__VECTOR2_H__
