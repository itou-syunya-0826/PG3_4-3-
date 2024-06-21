#pragma once
#include "Animal.h"

class Doc : public Animal
{
public:
	Doc();
	~Doc()override;

	void Voice() override;
};

