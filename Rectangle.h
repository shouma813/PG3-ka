#pragma once
#include "lShape.h"

class Rectangle : public lShape {
public:
	void Size() override;
	void Draw() override;

private:
	int answer = 0;
};