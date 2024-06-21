#pragma once
#include "Animal.h"

class Fox : public Animal
{
public:

	Fox();
	~Fox()override;

	void Voice()override;
};

