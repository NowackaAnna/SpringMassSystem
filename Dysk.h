#pragma once
#include "ofMain.h"

class Dysk
{
public:
	ofVec2f position;
	ofVec2f newposition;
	ofVec2f oldposition;
	ofVec2f vv;
	ofVec2f grawitacja;
	ofVec2f sily;
	ofVec2f hook;

	int red;
	int green;
	int blue;
	float dt = 0.01;
	float rozmiar = 5;
	float masa = 2;
	float distance;
	float distance_pocz = 5;
	float distance_poczx = 10;
	float distance_poczs;
	float dx;
	float FHook;
	float normay;
	float normax;
	float Fx;
	float Fy;

	


	Dysk(int x, int y);
	void draw();
	void ruch();
	void kolizja();
	void dist(vector <Dysk>  & discs);
	void silagrawitacji();

	void dist1a2(vector<Dysk> &discs, vector<Dysk> &discs2);
	void dist1s2(vector<Dysk> &discs, vector<Dysk> &discs2);

};


