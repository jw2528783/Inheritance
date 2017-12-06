#include "Engine.h"
#include "StartObject.h"
#include "Frame.h"
using namespace std;
Frame frame(720,480);

int main(int argc, char * argv[]) {
	
	StartObject startObject;
	Engine::addObject(&startObject);
	return Engine::run();
}
