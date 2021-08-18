#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<cstdlib>
#include<algorithm>

using namespace std;
void ShowStr(const string & str);
void GetStrs(istream & fin, vector<string> &vstr);
class Store
{
public:
	ostream & os;
	Store(ostream & o):os(o){}
	void operator()(const string &str);
};
void Store::operator()(const string & str)
{
	size_t len = str.size();
	os.write((char *)&len, sizeof(size_t));
	os.write(str.data(), len);
}
int main()
{
	using namespace std;
	vector<string> vostr;
	string temp;

	cout << "Enter strings (empty line to quit):\n";
	while (getline(cin, temp) && temp[0] != '\0')
		vostr.push_back(temp);
	cout << "Here is your input.\n";
	for_each(vostr.begin(), vostr.end(), ShowStr);

	ofstream fout("strings.txt", ios_base::out | ios_base::binary);
	for_each(vostr.begin(), vostr.end(), Store(fout));
	fout.close();

	vector<string> vistr;
	ifstream fin("strings.txt", ios_base::in | ios_base::binary);
	if (!fin.is_open())
	{
		cerr << "Could not open file for input.\n";
		exit(EXIT_FAILURE);
	}
	GetStrs(fin, vistr);
	cout << "\nHere are the strings read from the file:\n";
	for_each(vistr.begin(), vistr.end(), ShowStr);
}
void ShowStr(const string & str)
{
	cout << str << endl;
}
void GetStrs(istream & fin, vector<string> &vstr)
{
	string temp;
	size_t len;
	while (fin.read((char *)&len, sizeof(size_t)) && len>0)
	{
		char ch;
		temp = "";
		for (int i = 0; i < len; i++)
		{
			if (fin.read(&ch, 1))
				temp += ch;
			else
				break;
		}
		if (fin)
			vstr.push_back(temp);
	}
}