
#pragma once
#include "Image.h"
#include <vector>
#include "Object.h"
#include "rectangle.h"

class StartObject: public object {
public:
	StartObject();
	~StartObject();
	virtual void update(double dt);
	virtual void draw() const;

private:
	std::vector<Rectangle *> rectangles;
	std::vector<Image *> images;
};
