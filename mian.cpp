#include <stdio.h>
#include "lShape.h"
#include "Circle.h"
#include "Rectangle.h"

int main(void) {
	lShape* shape[2];

	shape[0] = new Circle();
	shape[1] = new Rectangle();

	printf("�~�̔��a: 4\n�Z�`�̒��: 2\n�Z�`�̍���: 3\n\n");

	for (int i = 0; i < 2; i++) {
		shape[i]->Size();
	}

	printf("\n");

	for (int i = 0; i < 2; i++) {
		shape[i]->Draw();
	}

	// ����������i�ǂ��K���j
	for (int i = 0; i < 2; i++) {
		delete shape[i];
	}

	return 0;
}