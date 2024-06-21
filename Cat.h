#pragma once
#include "Animal.h"

class Cat : public Animal
{
public:

	Cat();
	~Cat() override;

	void Voice() override;
};

