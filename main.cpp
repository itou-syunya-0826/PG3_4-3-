#include <stdio.h>
#include "Cat.h"
#include "Doc.h"
#include "Fox.h"

int main() {

	Cat* cat = new Cat;
	Doc* doc = new Doc;
	Fox* fox = new Fox;

	cat->Voice();
	doc->Voice();
	fox->Voice();

	delete cat, doc, fox;

	return 0;
}