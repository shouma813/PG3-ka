#include <stdio.h>
#include "lShape.h"
#include "Circle.h"
#include "Rectangle.h"

int main(void) {
	lShape* shape[2];

	shape[0] = new Circle();
	shape[1] = new Rectangle();

	printf("‰~‚Ì”¼Œa: 4\n’ZŒ`‚Ì’ê•Ó: 2\n’ZŒ`‚Ì‚‚³: 3\n\n");

	for (int i = 0; i < 2; i++) {
		shape[i]->Size();
	}

	printf("\n");

	for (int i = 0; i < 2; i++) {
		shape[i]->Draw();
	}

	// ƒƒ‚ƒŠ‰ğ•úi—Ç‚¢KŠµj
	for (int i = 0; i < 2; i++) {
		delete shape[i];
	}

	return 0;
}