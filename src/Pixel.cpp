#include "Pixel.h"

void Pixel::putPixel(int x, int y, int r, int g, int b){
	ofColor col;
	col.set(r, g, b);
	pix.setColor(x, y, col);
}

void Pixel::getPixel(){
	tex.loadData(pix);
}

void Pixel::init(){
	pix.allocate(ofGetWidth(), ofGetHeight(), OF_PIXELS_RGB);
	tex.allocate(ofGetWidth(), ofGetHeight(), GL_RGB);
}

void Pixel::draw(){
	tex.draw(0, 0);
}
