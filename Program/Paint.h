#pragma once
#include <iostream>

using namespace std;

class Paint
{
protected:
	float thickness;
Public:
	virtual Draw() = 0;
	virtual ~paint();
};

