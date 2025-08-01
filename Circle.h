#pragma once
#include "lShape.h"


class Circle : public lShape {
public:
	void Size() override;  // OK
	void Draw() override;  // OK

private:
	float answer = 0.0f;
};
