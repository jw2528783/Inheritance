#include <iostream>
#include <sstream>
#include <stdio.h>
#include <cstring>
#include "Image.h"
#include "rectangle.h"
#include "StartObject.h"
#include "Engine.h"
#include "global.h"

StartObject::StartObject() {
		
	Rectangle *rec=new Rectangle(30,30);
	Rectangle *rec2=new Rectangle(60,60);
	Image *image=new Image();
	Image *image2=new Image();
	rec->setx(300);
	rec->sety(400);
	rec2->setx(600);
	rec2->sety(0);
	image->setx(5);
	image->sety(20);
	image2->setx(200);
	image2->sety(200);
	rec->setVelocity(5,0);
	rec2->setVelocity(0,5);
	image->setVelocity(0,2);
	image2->setVelocity(3,1);
	rec->setColor(0x00, 0x00, 0xFF);
	rec2->setColor(0xFF, 0x00, 0x00);
	image->load("ducky.bmp", 150, 150);
	image2->load("tux.bmp",100,100);
	images.push_back(image);
	images.push_back(image2);
	rectangles.push_back(rec);
	rectangles.push_back(rec2);
	for (int i = 0; i < rectangles.size(); ++i) {
		Engine::addObject(rectangles[i]);
	}
	for(int i=0;i<images.size();++i){
		Engine::addObject(images[i]);
	}
}

StartObject::~StartObject() {
	for (int i = 0; i < rectangles.size(); ++i) {
		delete rectangles[i];
	}
	for (int i = 0; i < images.size(); ++i) {
		delete images[i];
	}
}

/*void StartObject::addObject(double dt) {
	for (int i = 0; i < rectangles.size(); ++i) {
		Engine::addObject(rectangles[i]);
	}
	for(int i=0;i<images.size();++i){
		Engine::addObject(images[i]);
	}
}*/

void StartObject::draw() const {
	for (int i = 0; i < images.size(); ++i) {
		images[i]->draw();
	}

	for (int i = 0; i < rectangles.size(); ++i) {
		rectangles[i]->draw();
	}
}

void StartObject::update(double dt) {	
	for (int i = 0; i < images.size(); ++i) {
		images[i]->update(dt); 
	}

	for (int i = 0; i < rectangles.size(); ++i) {
		rectangles[i]->update(dt);
	}
}

