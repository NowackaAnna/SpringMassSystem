#include "Dysk.h"
#include "ofApp.h"
#include "ofMain.h"

void Dysk::draw()
{
	ofSetColor(red,green,blue); 
	ofDrawCircle(position, rozmiar);
}
void Dysk::ruch()
{
	ofVec2f temp = position;
	vv = position - oldposition;
	position = (position + vv + sily * (dt*dt));
	oldposition = temp;
}
void Dysk::kolizja()
{
	if (position.y + rozmiar > ofGetWindowHeight())
	{
		position.y = ofGetWindowHeight() - rozmiar - vv.y;
		vv.y = -vv.y;
	}
	if (position.y + rozmiar < 0)
	{
		position.y = 0 - rozmiar - vv.y;
		vv.y = -vv.y;
	}
	if (position.x + rozmiar > ofGetWindowWidth())
	{
		position.x = ofGetWindowWidth() - rozmiar - vv.x;
		vv.x = -vv.x;
	}
	if (position.x + rozmiar < 0)
	{
		position.x = 0 - rozmiar - vv.x;
		vv.x = -vv.x;
	}
}
void Dysk::silagrawitacji()
{
	sily = grawitacja * masa;
}

Dysk::Dysk(int x, int y)
{
	position.set(x, y);
	oldposition = position;
	grawitacja.set(0.5, 9.8);
	vv.set(0, 0);
	red = ofRandom(0,255);
	green = ofRandom(0,255);
	blue = ofRandom(0,255);

}
void Dysk::dist(vector <Dysk>  & discs)
{
	for (std::size_t i = 0; i < discs.size() - 1; i++)
	{
		distance = ofDist(discs[i].position.x, discs[i].position.y, discs[i + 1].position.x, discs[i + 1].position.y);
		dx = distance - distance_pocz;
		FHook = -10 * dx -2 * ofDist(discs[i].vv.x, discs[i].vv.y, discs[i + 1].vv.x, discs[i + 1].vv.y);
		normax = (discs[i].position.x - discs[i + 1].position.x) / distance;
		normay = (discs[i].position.y - discs[i + 1].position.y) / distance;


		hook.x = FHook * normax;
		hook.y = FHook * normay;

		discs[i].sily.x += hook.x;
		discs[i].sily.y += hook.y;
		discs[i + 1].sily.x -= hook.x;
		discs[i + 1].sily.y -= hook.y;
	}
}

void Dysk::dist1a2(vector <Dysk>  & discs,vector<Dysk> &discs2)
{
	for (std::size_t i = 0; i < discs2.size() - 1; i++)
	{
		distance = ofDist(discs[i].position.x, discs[i].position.y, discs2[i].position.x, discs2[i].position.y);
		dx = distance - distance_poczx;
		FHook = -10 * dx -2 * ofDist(discs[i].vv.x, discs[i].vv.y, discs2[i].vv.x, discs2[i].vv.y);
		normax = (discs[i].position.x - discs2[i].position.x) / distance;
		normay = (discs[i].position.y - discs2[i].position.y) / distance;


		hook.x = FHook * normax;
		hook.y = FHook * normay;

		discs[i].sily.x += hook.x;
		discs[i].sily.y += hook.y;
		discs2[i].sily.x -= hook.x;
		discs2[i].sily.y -= hook.y;
	}
}
void Dysk::dist1s2(vector <Dysk>  & discs, vector<Dysk> &discs2)
{
	for (std::size_t i = 0; i < discs2.size()-1; i++)
	{
		distance_poczs = sqrt((distance_pocz)*(distance_pocz)+(distance_poczx)*(distance_poczx));
		distance = ofDist(discs[i].position.x, discs[i].position.y, discs2[i + 1].position.x, discs2[i + 1].position.y);
		dx = distance - distance_pocz;
		FHook = -10 * dx -2 * ofDist(discs[i].vv.x, discs[i].vv.y, discs2[i + 1].vv.x, discs2[i + 1].vv.y);
		normax = (discs[i].position.x - discs2[i + 1].position.x) / distance;
		normay = (discs[i].position.y - discs2[i + 1].position.y) / distance;


		hook.x = FHook * normax;
		hook.y = FHook * normay;

		discs[i].sily.x += hook.x;
		discs[i].sily.y += hook.y;
		discs2[i + 1].sily.x -= hook.x;
		discs2[i + 1].sily.y -= hook.y;
	}
}
