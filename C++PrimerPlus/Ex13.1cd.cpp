#include <iostream>
#include "Ex13.1cd.h"
using namespace std;

Cd::Cd(const char * s1, const char * s2, int n, double x)
{
	performers = new char[strlen(s1) + 1];
	label = new char[strlen(s2) + 1];
	strcpy_s(performers, strlen(s1) + 1, s1);
	strcpy_s(label, strlen(s2) + 1, s2);
	selections = n;
	playtime = x;
}
Cd::Cd(const Cd & d)
{
	performers = new char[strlen(d.performers) + 1];
	label = new char[strlen(d.label) + 1];
	strcpy_s(performers, strlen(d.performers) + 1, d.performers);
	strcpy_s(label, strlen(d.label) + 1, d.label);
	selections = d.selections;
	playtime = d.playtime;
}
Cd::Cd()
{
	performers = new char[1];
	label = new char[1];
	performers[0] = '\0';
	label[0] = '\0';
	selections = 0;
	playtime = 0.0;
}
Cd::~Cd()
{
	delete[]performers;
	delete[]label;
}
void Cd::Report() const
{
	cout << "performers: " << performers << endl;
	cout << "label: " << label << endl;
	cout << "selections: " << selections << endl;
	cout << "playtime: " << playtime << endl;
}
Cd & Cd::operator=(const Cd & d)
{
	performers = new char[strlen(d.performers) + 1];
	label = new char[strlen(d.label) + 1];
	strcpy_s(performers, strlen(d.performers) + 1, d.performers);
	strcpy_s(label, strlen(d.label) + 1, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}
Classic::Classic(const char * s1, const char * s2, const char * s3, int n, double x) :Cd(s1, s2, n, x)
{
	mainCom = new char[strlen(s3) + 1];
	strcpy_s(mainCom, strlen(s3) + 1, s3);
}
Classic::Classic(const Cd & d, char *s3):Cd(d)
{
	mainCom = new char[strlen(s3) + 1];
	strcpy_s(mainCom, strlen(s3) + 1, s3);
}
Classic::Classic(const Classic & d):Cd(d)
{
	mainCom = new char[strlen(d.mainCom) + 1];
	strcpy_s(mainCom, strlen(d.mainCom) + 1, d.mainCom);
}
Classic::Classic():Cd()
{
	mainCom = new char[1];
	mainCom[0] = '/n';
}
void Classic::Report() const
{
	this->Cd::Report();
	cout << "playtime: " << mainCom << endl;
}

Classic & Classic:: operator=(const Classic & d)
{
	Cd::operator=(d);
	mainCom = new char[strlen(d.mainCom) + 1];
	strcpy_s(mainCom, strlen(d.mainCom) + 1, d.mainCom);
	return *this;
}
Classic::~Classic()
{
	delete[]mainCom;
}