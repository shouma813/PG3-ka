#include "Circle.h"
#include <stdio.h>
void Circle::Size() {
	answer = radius * radius * 3.14f;
}

void Circle::Draw() {
	printf("�~�̖ʐρF%.2f\n", answer);
}