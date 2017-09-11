#pragma once
class Singleton
{
public:
	static Singleton * getSingleton();
	~Singleton();
	int getNum();
	void setNum(const int&);
private:
	static Singleton * p_singleton;
	Singleton();
	int num;
};