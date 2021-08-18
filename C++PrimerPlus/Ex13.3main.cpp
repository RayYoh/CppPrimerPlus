#include <iostream>
#include <string>
#include "Ex13.3dma.h"

const int form = 1;
int main()
{
	using std::cin;
	using std::cout;
	using std::endl;


	abcDMA * p[form];
	char temp[40];
	char tcolor[40];
	char tstyle[40];
	int tempnum;
	int kind;
	for (int i = 0; i < form; ++i)
	{
		cout << "Enter label: " << endl;
		cin.getline(temp, 40);
		cout << "Enter rating: " << endl;
		cin >> tempnum;
		cout << "Enter 1 for baseDMA, 2 for lacksDMA, 3 for hasDMA: ";
		while (cin >> kind && (kind != 1 && kind != 2 && kind != 3))
			cout << "Enter either 1, 2 or 3: " << endl;
		if (kind == 1)
			p[i] = new baseDMA(temp, tempnum);
		else if (kind == 2)
		{
			cout << "Enter color: " << endl;
			cin >> tcolor;
			p[i] = new lacksDMA(tcolor, temp, tempnum);
		}
		else if (kind == 3)
		{

			cout << "Enter the style: " << endl;
			cin >> tstyle;
			p[i] = new hasDMA(tstyle, temp, tempnum);
		}
		while (cin.get() != '\n')
			continue;
	}
	cout << endl;
	for (int i = 0; i < form; i++)
	{
		p[i]->view();
		cout << endl;
	}

	for (int i = 0; i < form; i++)
	{
		delete p[i];
	}
	cout << "Done.\n";
	return 0;
}