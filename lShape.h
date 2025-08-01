#pragma once

class lShape {
public:
	virtual ~lShape() = default; // ���z�f�X�g���N�^�i�K�{�ł͂Ȃ��������j
	virtual void Size() = 0;
	virtual void Draw() = 0;

protected:
	const char* name = nullptr;
	float radius = 4.0f;
	int wide = 2;
	int height = 3;
};
