#include <stdio.h>
#include "Cat.h"
#include "Doc.h"
#include "Fox.h"

int main() {

	Animal* animal[3];

	for (int i = 0; i < 3; i++) {
		if (i == 0) {
			animal[i] = new Cat;
		}
		else if (i == 1) {
			animal[i] = new Doc;
		}
		else {
			animal[i] = new Fox;
		}
	}

	for (int i = 0; i < 3; i++) {
		animal[i]->Voice();
	}

	for (int i = 0; i < 3; i++) {
		delete animal[i];
	}

	return 0;
}