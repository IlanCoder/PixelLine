#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	line.init();
	//circle(x,y,radius,r,g,b)
	createCircle(ofGetWidth()/2,ofGetHeight()/2,100,255,0,0);
}

//--------------------------------------------------------------
void ofApp::update(){
	line.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
	line.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

void ofApp::createCircle(int x, int y, int radius,int red, int green, int blue){
	float angles;
	int x2=0, y2 = 0;
	for (int angle = 0; angle < 360; angle++) {
		angles = radius*cos(angle);
		x2 = round(angles);
		angles = radius*sin(angle);
		y2 = round(angles);
		line.createLine(x, y, x+x2, y+y2, red, green, blue);
	}
}


//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
