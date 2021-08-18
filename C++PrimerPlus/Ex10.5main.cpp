#include<iostream>
#include<cctype>
#include"Ex10.5stack.h"
using namespace std;

int main()
{
	Stack st;
	char ch;
	customer po;
	double total = 0;
	cout << "Please enter A to add a customer,\n"
		<< "P to process a PO, or Q to quit.\n";
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'A':
		case 'a':cout << "Enter a PO custumer to add: " << endl;
			cout << "Enter fullname: ";
			cin >> po.fullName;
			cout << "Enter payment: ";
			cin >> po.payment;
			if (st.isfull())
				cout << "stack already full\n";
			else
				st.push(po);
			break;
		case 'P':
		case 'p':if (st.isempty())
			cout << "stack already empty\n";
				 else
		{
			st.pop(po);
			cout << "PO #" << po.fullName << " popped\n";
			total += po.payment;
			cout << "Total: " << total << endl;
		}
				 break;
		default:
			break;
		}
		cout << "Please enter A to add a purchase order,\n"
			<< "P to process a PO, or Q to quit.\n";
	}
	cout << "Bye\n";
	return 0;
}