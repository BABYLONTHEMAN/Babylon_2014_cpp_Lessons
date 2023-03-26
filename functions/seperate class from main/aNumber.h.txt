#pragma once
class aNumber
{
	int a = 10;
public:
	void input();
	void display();
	friend int action(aNumber f);
};

