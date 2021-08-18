#include<iostream>
#include<fstream>
#include<list>
#include<string>
#include<algorithm>
using namespace std;
void show(string & str) { cout << "name: " << str << endl; }
int main()
{
	ifstream fin_Mat("mat.txt"), fin_Pat("pat.txt");
	ofstream fout_MatnPat("matnpat.txt");

	list<string> Mat, Pat, MatnPat;
	string temp;
	if (fin_Mat.is_open() && fin_Pat.is_open())
	{
		while (getline(fin_Mat,temp))
			Mat.push_back(temp);
		Mat.sort();
		cout << "Mat's friends are:\n";
		for_each(Mat.begin(), Mat.end(), show);
		cout << endl;

		while (getline(fin_Pat, temp))
			Pat.push_back(temp);
		Pat.sort();
		cout << "Pat's friends are:\n";
		for_each(Pat.begin(), Pat.end(), show);
		cout << endl;
		fin_Mat.close();
		fin_Pat.close();
	}
	else
	{
		cout << "Failed!";
		exit(EXIT_FAILURE);
	}
	
	cout << "-------friends--------" << endl;
	Mat.splice(Mat.end(), Pat);
	Mat.sort();
	Mat.unique();
	MatnPat = Mat;
	cout << "All friends: " << endl;
	for_each(MatnPat.begin(), MatnPat.end(), show);
	list<string>::iterator pd;
	for (pd = MatnPat.begin(); pd != MatnPat.end(); pd++)
		fout_MatnPat << *pd << endl;
	fout_MatnPat.close();

	return 0;
}