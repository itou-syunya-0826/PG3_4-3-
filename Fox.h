#pragma once
#include "Animal.h"

class Fox : public Animal
{
public:

	Fox();
	~Fox();

	void Voice()override;
};

