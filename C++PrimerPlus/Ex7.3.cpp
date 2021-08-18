#include<iostream>
using namespace std;
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void show(box);
void set(box *);
int main()
{
	box ap = { "Ray",3,4,5,0 };
	show(ap);
	set(&ap);
	show(ap);
	return 0;
}
void show(box ap)
{
	cout << "Maker: " << ap.maker << endl;
	cout << "Height: " << ap.height << endl;
	cout << "Width: " << ap.width << endl;
	cout << "Length: " << ap.length << endl;
	cout << "Volume: " << ap.volume << endl;
}
void set(box *ap)
{
	ap->volume = ap->height*ap->length*ap->width;
}