#include "ofApp.h"
#include "Dysk.h"
vector<Dysk>dyski;
vector<Dysk>dyski2;
vector<Dysk>dyski3;
vector<Dysk>dyski4;
vector<Dysk>dyski5;
vector<Dysk>dyski6;
vector<Dysk>dyski7;
vector<Dysk>dyski8;
vector<Dysk>dyski9;
vector<Dysk>dyski10;


//--------------------------------------------------------------
void ofApp::setup() {
	int ystart = 200;
	for (std::size_t i = 0; i < 10; i++) {
		Dysk dysk(300, ystart);
		dyski.push_back(dysk);
		ystart += 5;
	};
	for (std::size_t i = 0; i < 10; i++) {
		dyski[i].grawitacja.x = (-1)*dyski[i].grawitacja.x;
	};
	int ystart2 = 200;
	for (std::size_t i = 0; i < 10; i++) {
		Dysk dysk2(330, ystart2);
		dyski2.push_back(dysk2);
		ystart2 += 5;
	};
	int ystart3 = 200;
	for (std::size_t i = 0; i < 10; i++) {
		Dysk dysk3(360, ystart3);
		dyski3.push_back(dysk3);
		ystart3 += 5;
	};
	for (std::size_t i = 0; i < 10; i++) {
		dyski3[i].grawitacja.x = (-1)*dyski3[i].grawitacja.x;
	};
	int ystart4 = 200;
	for (std::size_t i = 0; i < 10; i++) {
		Dysk dysk4(390, ystart4);
		dyski4.push_back(dysk4);
		ystart4 += 5;
	};
	int ystart5 = 200;
	for (std::size_t i = 0; i < 10; i++) {
		Dysk dysk5(420, ystart5);
		dyski5.push_back(dysk5);
		ystart5 += 5;
	};
	for (std::size_t i = 0; i < 10; i++) {
		dyski5[i].grawitacja.x = (-1)*dyski5[i].grawitacja.x;
	};
	int ystart6 = 200;
	for (std::size_t i = 0; i < 10; i++) {
		Dysk dysk6(450, ystart6);
		dyski6.push_back(dysk6);
		ystart6 += 5;
	};
	/*int ystart7 = 200;
	for (std::size_t i = 0; i < 10; i++) {
		Dysk dysk7(480, ystart7);
		dyski7.push_back(dysk7);
		ystart7 += 5;
	};
	for (std::size_t i = 0; i < 10; i++) {
		dyski7[i].grawitacja.x = (-1)*dyski7[i].grawitacja.x;
	};
	int ystart8 = 200;
	for (std::size_t i = 0; i < 10; i++) {
		Dysk dysk8(510, ystart8);
		dyski8.push_back(dysk8);
		ystart8 += 5;
	};
	int ystart9 = 200;
	for (std::size_t i = 0; i < 10; i++) {
		Dysk dysk9(540, ystart9);
		dyski9.push_back(dysk9);
		ystart9 += 5;
	};
	for (std::size_t i = 0; i < 10; i++) {
		dyski9[i].grawitacja.x = (-1)*dyski9[i].grawitacja.x;
	};
	int ystart10 = 200;
	for (std::size_t i = 0; i < 10; i++) {
		Dysk dysk10(570, ystart10);
		dyski10.push_back(dysk10);
		ystart10 += 5;
	};*/
}

//--------------------------------------------------------------
void ofApp::update() {
	for (std::size_t i = 1; i < dyski.size(); i++)
	{
		dyski[i].silagrawitacji();
		dyski[i].kolizja();
		dyski[i].dist(dyski);
		dyski[i].ruch();

	};
	for (std::size_t i = 1; i < dyski2.size(); i++)
	{
		dyski2[i].silagrawitacji();
		dyski2[i].kolizja();
		dyski2[i].dist(dyski2);
		dyski2[i].ruch();

	};
	for (std::size_t i = 1; i < dyski3.size(); i++)
	{
		dyski3[i].silagrawitacji();
		dyski3[i].kolizja();
		dyski3[i].dist(dyski3);
		dyski3[i].ruch();

	};
	for (std::size_t i = 1; i < dyski4.size(); i++)
	{
		dyski4[i].silagrawitacji();
		dyski4[i].kolizja();
		dyski4[i].dist(dyski4);
		dyski4[i].ruch();

	}; 
	for (std::size_t i = 1; i < dyski5.size(); i++)
	{
		dyski5[i].silagrawitacji();
		dyski5[i].kolizja();
		dyski5[i].dist(dyski5);
		dyski5[i].ruch();

	};
	for (std::size_t i = 1; i < dyski6.size(); i++)
	{
		dyski6[i].silagrawitacji();
		dyski6[i].kolizja();
		dyski6[i].dist(dyski6);
		dyski6[i].ruch();

	};
	/*for (std::size_t i = 1; i < dyski7.size(); i++)
	{
		dyski7[i].silagrawitacji();
		dyski7[i].kolizja();
		dyski7[i].dist(dyski7);
		dyski7[i].ruch();

	};
	for (std::size_t i = 1; i < dyski8.size(); i++)
	{
		dyski8[i].silagrawitacji();
		dyski8[i].kolizja();
		dyski8[i].dist(dyski8);
		dyski8[i].ruch();

	};
	for (std::size_t i = 1; i < dyski9.size(); i++)
	{
		dyski9[i].silagrawitacji();
		dyski9[i].kolizja();
		dyski9[i].dist(dyski9);
		dyski9[i].ruch();

	};
	for (std::size_t i = 1; i < dyski10.size(); i++)
	{
		dyski10[i].silagrawitacji();
		dyski10[i].kolizja();
		dyski10[i].dist(dyski10);
		dyski10[i].ruch();

	};*/
	for (std::size_t i = 1; i < dyski2.size(); i++) {
		dyski[i].dist1a2(dyski, dyski2);
		//dyski2[i].dist1a2(dyski2, dyski);
	};
	
	for (std::size_t i = 1; i < dyski3.size(); i++) {
		dyski2[i].dist1a2(dyski2, dyski3);
		//dyski3[i].dist1a2(dyski3, dyski2);
	}; 
	for (std::size_t i = 1; i < dyski4.size(); i++) {
		dyski3[i].dist1a2(dyski3, dyski4);
		//dyski4[i].dist1a2(dyski4, dyski3);
	};
	for (std::size_t i = 1; i < dyski5.size(); i++) {
		dyski4[i].dist1a2(dyski4, dyski5);
		//dyski5[i].dist1a2(dyski5, dyski4);
	};
	for (std::size_t i = 1; i < dyski6.size(); i++) {
		dyski5[i].dist1a2(dyski5, dyski6);
		//dyski6[i].dist1a2(dyski6, dyski5);
	};
	/*for (std::size_t i = 1; i < dyski7.size(); i++) {
		dyski6[i].dist1a2(dyski6, dyski7);
		dyski7[i].dist1a2(dyski7, dyski6);
	};
	for (std::size_t i = 1; i < dyski8.size(); i++) {
		dyski7[i].dist1a2(dyski7, dyski8);
		dyski8[i].dist1a2(dyski8, dyski7);
	};
	for (std::size_t i = 1; i < dyski9.size(); i++) {
		dyski8[i].dist1a2(dyski8, dyski9);
		dyski9[i].dist1a2(dyski9, dyski8);
	};
	for (std::size_t i = 1; i < dyski10.size(); i++) {
		dyski9[i].dist1a2(dyski9, dyski10);
		dyski10[i].dist1a2(dyski10, dyski9);
	};*/
	for (std::size_t i = 1; i < dyski2.size(); i++) {
		dyski[i].dist1s2(dyski, dyski2);
	};
	for (std::size_t i = 1; i < dyski.size(); i++) {
		dyski2[i].dist1s2(dyski2, dyski);
	};
	for (std::size_t i = 1; i < dyski3.size(); i++) {
		dyski2[i].dist1s2(dyski2, dyski3);
	};
	for (std::size_t i = 1; i < dyski2.size(); i++) {
		dyski3[i].dist1s2(dyski3, dyski2);
	};
	for (std::size_t i = 1; i < dyski4.size(); i++) {
		dyski3[i].dist1s2(dyski3, dyski4);
	};
	for (std::size_t i = 1; i < dyski3.size(); i++) {
		dyski4[i].dist1s2(dyski4, dyski3);
	};
	for (std::size_t i = 1; i < dyski5.size(); i++) {
		dyski4[i].dist1s2(dyski4, dyski5);
	};
	for (std::size_t i = 1; i < dyski4.size(); i++) {
		dyski5[i].dist1s2(dyski5, dyski4);
	};
	for (std::size_t i = 1; i < dyski6.size(); i++) {
		dyski5[i].dist1s2(dyski5, dyski6);
	};
	for (std::size_t i = 1; i < dyski5.size(); i++) {
		dyski6[i].dist1s2(dyski6, dyski5);
	};
	/*for (std::size_t i = 1; i < dyski8.size(); i++) {
		dyski7[i].dist1s2(dyski7, dyski8);
	};
	for (std::size_t i = 1; i < dyski7.size(); i++) {
		dyski8[i].dist1s2(dyski8, dyski7);
	};*/
}

//--------------------------------------------------------------
void ofApp::draw() {
	ofBackground(0, 0, 200);
	for (std::size_t i = 0; i < dyski.size(); i++)
	{
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski[i].position.x, dyski[i].position.y, dyski2[i].position.x, dyski2[i].position.y);
	};
	for (std::size_t i = 0; i < dyski2.size(); i++)
	{
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski2[i].position.x, dyski2[i].position.y, dyski3[i].position.x, dyski3[i].position.y);
	};
	for (std::size_t i = 0; i < dyski3.size(); i++)
	{
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski3[i].position.x, dyski3[i].position.y, dyski4[i].position.x, dyski4[i].position.y);
	};
	for (std::size_t i = 0; i < dyski4.size(); i++)
	{
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski4[i].position.x, dyski4[i].position.y, dyski5[i].position.x, dyski5[i].position.y);
	};
	for (std::size_t i = 0; i < dyski5.size(); i++)
	{
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski5[i].position.x, dyski5[i].position.y, dyski6[i].position.x, dyski6[i].position.y);
	};
	/*for (std::size_t i = 0; i < dyski6.size(); i++)
	{
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski6[i].position.x, dyski6[i].position.y, dyski7[i].position.x, dyski7[i].position.y);
	};
	for (std::size_t i = 0; i < dyski7.size(); i++)
	{
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski7[i].position.x, dyski7[i].position.y, dyski8[i].position.x, dyski8[i].position.y);
	};*/
	for (std::size_t i = 0; i < dyski.size()-1; i++)
	{
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski[i].position.x, dyski[i].position.y, dyski2[i+1].position.x, dyski2[i+1].position.y);
	};
	for (std::size_t i = 0; i < dyski2.size()-1; i++)
	{
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski2[i].position.x, dyski2[i].position.y, dyski3[i+1].position.x, dyski3[i+1].position.y);
	};
	for (std::size_t i = 0; i < dyski3.size()-1; i++)
	{
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski3[i].position.x, dyski3[i].position.y, dyski4[i+1].position.x, dyski4[i+1].position.y);
	};
	for (std::size_t i = 0; i < dyski4.size()-1; i++)
	{
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski4[i].position.x, dyski4[i].position.y, dyski5[i+1].position.x, dyski5[i+1].position.y);
	};
	for (std::size_t i = 0; i < dyski5.size()-1; i++)
	{
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski5[i].position.x, dyski5[i].position.y, dyski6[i+1].position.x, dyski6[i+1].position.y);
	};
	/*for (std::size_t i = 0; i < dyski6.size() - 1; i++)
	{
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski6[i].position.x, dyski6[i].position.y, dyski7[i + 1].position.x, dyski7[i + 1].position.y);
	};
	for (std::size_t i = 0; i < dyski7.size() - 1; i++)
	{
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski7[i].position.x, dyski7[i].position.y, dyski8[i + 1].position.x, dyski8[i + 1].position.y);
	};*/
	for (std::size_t i = 0; i < dyski2.size()-1; i++)
	{
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski2[i].position.x, dyski2[i].position.y, dyski[i + 1].position.x, dyski[i + 1].position.y);
	};
	for (std::size_t i = 0; i < dyski3.size()-1; i++)
	{
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski3[i].position.x, dyski3[i].position.y, dyski2[i + 1].position.x, dyski2[i + 1].position.y);
	};
	for (std::size_t i = 0; i < dyski4.size()-1; i++)
	{
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski4[i].position.x, dyski4[i].position.y, dyski3[i + 1].position.x, dyski3[i + 1].position.y);
	};
	for (std::size_t i = 0; i < dyski5.size()-1; i++)
	{
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski5[i].position.x, dyski5[i].position.y, dyski4[i + 1].position.x, dyski4[i + 1].position.y);
	};
	for (std::size_t i = 0; i < dyski6.size()-1; i++)
	{
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski6[i].position.x, dyski6[i].position.y, dyski5[i + 1].position.x, dyski5[i + 1].position.y);
	};
	/*for (std::size_t i = 0; i < dyski7.size() - 1; i++)
	{
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski7[i].position.x, dyski7[i].position.y, dyski6[i + 1].position.x, dyski6[i + 1].position.y);
	};
	for (std::size_t i = 0; i < dyski8.size() - 1; i++)
	{
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski8[i].position.x, dyski8[i].position.y, dyski7[i + 1].position.x, dyski7[i + 1].position.y);
	};
	for (std::size_t i = 0; i < dyski8.size(); i++)
	{
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski8[i].position.x, dyski8[i].position.y, dyski9[i].position.x, dyski9[i].position.y);
	};
	for (std::size_t i = 0; i < dyski9.size(); i++)
	{
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski9[i].position.x, dyski9[i].position.y, dyski10[i].position.x, dyski10[i].position.y);
	};*/
	for (std::size_t i = 0; i < dyski.size() - 1; i++) {
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski[i].position.x, dyski[i].position.y, dyski[i + 1].position.x, dyski[i + 1].position.y);
	};
	for (std::size_t i = 0; i < dyski.size(); i++)
	{
		dyski[i].draw();
	};
	for (std::size_t i = 0; i < dyski2.size() - 1; i++) {
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski2[i].position.x, dyski2[i].position.y, dyski2[i + 1].position.x, dyski2[i + 1].position.y);
	};
	for (std::size_t i = 0; i < dyski2.size(); i++)
	{
		dyski2[i].draw();
	};
	for (std::size_t i = 0; i < dyski3.size() - 1; i++) {
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski3[i].position.x, dyski3[i].position.y, dyski3[i + 1].position.x, dyski3[i + 1].position.y);
	};
	for (std::size_t i = 0; i < dyski3.size(); i++)
	{
		dyski3[i].draw();
	};
	for (std::size_t i = 0; i < dyski4.size() - 1; i++) {
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski4[i].position.x, dyski4[i].position.y, dyski4[i + 1].position.x, dyski4[i + 1].position.y);
	};
	for (std::size_t i = 0; i < dyski4.size(); i++)
	{
		dyski4[i].draw();
	};
	for (std::size_t i = 0; i < dyski5.size() - 1; i++) {
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski5[i].position.x, dyski5[i].position.y, dyski5[i + 1].position.x, dyski5[i + 1].position.y);
	};
	for (std::size_t i = 0; i < dyski5.size(); i++)
	{
		dyski5[i].draw();
	};
	for (std::size_t i = 0; i < dyski6.size() - 1; i++) {
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski6[i].position.x, dyski6[i].position.y, dyski6[i + 1].position.x, dyski6[i + 1].position.y);
	};
	for (std::size_t i = 0; i < dyski6.size(); i++)
	{
		dyski6[i].draw();
	};
	/*for (std::size_t i = 0; i < dyski7.size() - 1; i++) {
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski7[i].position.x, dyski7[i].position.y, dyski7[i + 1].position.x, dyski7[i + 1].position.y);
	};
	for (std::size_t i = 0; i < dyski7.size(); i++)
	{
		dyski7[i].draw();
	};
	for (std::size_t i = 0; i < dyski8.size() - 1; i++) {
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski8[i].position.x, dyski8[i].position.y, dyski8[i + 1].position.x, dyski8[i + 1].position.y);
	};
	for (std::size_t i = 0; i < dyski8.size(); i++)
	{
		dyski8[i].draw();
	};
	for (std::size_t i = 0; i < dyski9.size() - 1; i++) {
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski9[i].position.x, dyski9[i].position.y, dyski9[i + 1].position.x, dyski9[i + 1].position.y);
	};
	for (std::size_t i = 0; i < dyski9.size(); i++)
	{
		dyski9[i].draw();
	};
	for (std::size_t i = 0; i < dyski10.size() - 1; i++) {
		ofSetColor(255, 255, 255);
		ofDrawLine(dyski10[i].position.x, dyski10[i].position.y, dyski10[i + 1].position.x, dyski10[i + 1].position.y);
	};
	for (std::size_t i = 0; i < dyski10.size(); i++)
	{
		dyski10[i].draw();
	};*/

	 

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

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
