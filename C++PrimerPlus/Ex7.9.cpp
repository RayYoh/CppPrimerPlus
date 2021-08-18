#include<iostream>
using namespace std;
const int SLEN = 30;
struct student
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);
int main()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "Done\n";
	return 0;
}
int getinfo(student pa[], int n)
{
	int trueSize = 0;
	cout << "Input the student's fullname: ";
	for (int i = 0; i < n; i++)
	{
		if (cin >> pa[i].fullname>>pa[i].hobby>>pa[i].ooplevel)
		{

		}
		else
		{
			trueSize = i;
			break;
		}
		trueSize = i + 1;
		cout << "Input the student's fullname: ";
	}
	return trueSize;
}
void display1(student st)
{
	cout << "Name: " << st.fullname << " ";
	cout << "Hobby: " << st.hobby << " ";
	cout << "Ooplevel: " << st.ooplevel << endl;
}
void display2(const student * ps)
{
	cout << "Name: " << ps->fullname << " ";
	cout << "Hobby: " << ps->hobby << " ";
	cout << "Ooplevel: " << ps->ooplevel << endl;
}
void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Name: " << pa[i].fullname << " ";
		cout << "Hobbt: " << pa[i].hobby << " ";
		cout << "Ooplevel: " << pa[i].ooplevel << endl;
	}
}