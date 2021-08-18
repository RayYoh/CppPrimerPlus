#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
int main(int argc, char * argv[])
{
	using namespace std;
	string line1, line2;

	ifstream fin1, fin2;
	ofstream fout;
	fin1.open(argv[1]);
	fin2.open(argv[2]);
	fout.open(argv[3]);

	if (fin1.is_open() && fin2.is_open() && fout.is_open())
	{
		cout << "Open successfully!";
		while (!fin1.eof() && !fin2.eof() && getline(fin1, line1) && line1.size() > 0 && getline(fin2, line2) && line2.size() > 0)
			fout << line1 << " " << line2 << endl;
		while (!fin1.eof() && getline(fin1, line1) && line1.size() > 0)
			fout << line1 << endl;
		while (!fin2.eof() && getline(fin2, line2) && line2.size() > 0)
			fout << line2 << endl;
	}
	else
	{
		cout << "Can't open the file!";
		exit(EXIT_FAILURE);
	}
	fin1.close();
	fin2.close();
	fout.close();
	return 0;
}