#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofSetVerticalSync(false);
	ofSetFrameRate(90);
	ofSetLogLevel(OF_LOG_VERBOSE);
	ofLogVerbose("HELLLOOOO");

	// We need to pass the method we want ofxOpenVR to call when rending the scene
	openVR.setup(std::bind(&ofApp::render, this, std::placeholders::_1));

	openVR.update();
	tex.loadData(openVR.getTrackedCameraPix());
	ofSetWindowShape(tex.getWidth(), tex.getHeight());
}

//--------------------------------------------------------------
void ofApp::exit() {
	openVR.exit();
}

//--------------------------------------------------------------
void ofApp::update() {
	openVR.update();
	tex.loadData(openVR.getTrackedCameraPix());
	ofSetWindowShape(tex.getWidth(), tex.getHeight());
}

//--------------------------------------------------------------
void ofApp::draw() {
	ofClear(0);
	tex.draw(0, 0);
}

//--------------------------------------------------------------
void  ofApp::render(vr::Hmd_Eye nEye) {
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	switch (key) {
	default:
		break;
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
