#pragma once

class lShape {
public:
	virtual ~lShape() = default; // 仮想デストラクタ（必須ではないが推奨）
	virtual void Size() = 0;
	virtual void Draw() = 0;

protected:
	const char* name = nullptr;
	float radius = 4.0f;
	int wide = 2;
	int height = 3;
};
