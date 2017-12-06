#pragma once

#include <vector>
#include "Object.h"

class Engine {
public:
	static void addObject(object * object);
	static void removeObject(object * object);
	static int  run();
	static int  getWidth()  { return 640; }
	static int  getHeight() { return 480; }

private:
	static std::vector<object *> objects;
};
