#pragma once
#include "meet.h"

class Chicken : public Meet
{
public:
	~Chicken();

	void eat()override;
};

