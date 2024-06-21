#include <stdio.h>
#include "Cat.h"
#include "Doc.h"
#include "Fox.h"

int main() {

	Animal* cat[3];
	Animal* doc[3];
	Animal* fox[3];

	for (int i = 0; i < 3; i++) {
		cat[i] = new Cat;
		doc[i] = new Doc;
		fox[i] = new Fox;
	}

	for (int i = 0; i < 3; i++) {
		if (i == 0) {
			printf("”L‚Ì–Â‚«º\n");
		}
		cat[i]->Voice();
		if (i == 2) {
			for (int j = 0; j < 3; j++) {
				if (j == 0) {
					printf("\nŒ¢‚Ì–Â‚«º\n");
				}
				doc[j]->Voice();
				if (j == 2) {
					for (int k = 0; k < 3; k++) {
						if (k == 0) {
							printf("\nŒÏ‚Ì–Â‚«º\n");
						}
						fox[k]->Voice();
					}
				}
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		delete cat[i], doc[i], fox[i];
	}

	return 0;
}