#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
struct Review
{
	std::string title;
	int rating;
	double price;
};
bool operator<(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool worseThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool priceThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool FillReview(Review & rr);
void ShowReview(const shared_ptr<Review> & rr);
void showMenu();
int main()
{
	using namespace std;

	vector<shared_ptr<Review>> books;
	Review temp;
	while (FillReview(temp))
	{
		shared_ptr<Review> pd_temp(new Review(temp));
		books.push_back(pd_temp);
	}
	if (books.size() > 0)
	{
		cout << "Thank you. You entered the following "
			<< books.size() << " ratings:\n"
			<< "Rating\tBook\n";

		cout << "Choose a way to show data.";
		int choice;
		showMenu();
		while (cin >> choice && choice<=7 && choice>0)
		{
			switch (choice)
			{
			case 1:
				for_each(books.begin(), books.end(), ShowReview);
				break;
			case 2:
				sort(books.begin(), books.end());
				for_each(books.begin(), books.end(), ShowReview);
				break;
			case 3:
				sort(books.begin(), books.end(), worseThan);
				for_each(books.begin(), books.end(), ShowReview);
				break;
			case 4:
				sort(books.rbegin(), books.rend(), worseThan);
				//reverse(books.begin(), books.end());
				for_each(books.begin(), books.end(), ShowReview);
				break;
			case 5:
				sort(books.begin(), books.end(), priceThan);
				for_each(books.begin(), books.end(), ShowReview);
				break;
			case 6:
				sort(books.rbegin(), books.rend(), priceThan);
				//reverse(books.begin(), books.end());
				for_each(books.begin(), books.end(), ShowReview);
				break;
			case 7:
				cout << "Quit!" << endl;
				break;
			default:
				cout << "Wrong number";
				continue;
			}
			cout << "Choose a way to show data.";
			showMenu();
		}
	}
	else
		cout << "No entries. ";
	cout << "Bye.\n";
	return 0;
}
bool operator<(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
	if (r1->title < r2->title)
		return true;
	else if (r1->title == r2->title && r1->rating < r2->rating)
		return true;
	else
		return false;
}
bool worseThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
	if (r1->rating < r2->rating)
		return true;
	else
		return false;
}
bool priceThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
	if (r1->price < r2->price)
		return true;
	if (r1->price == r2->price && r1->rating < r2->rating)
		return true;
	else
		return false;
}
bool FillReview(Review & rr)
{
	cout << "Enter book title (quit to quit): ";
	getline(cin, rr.title);
	if (rr.title == "quit")
		return false;
	cout << "Enter book rating: ";
	cin >> rr.rating;
	if (!cin)
		return false;
	cout << "Enter book price: ";
	cin >> rr.price;
	if (!cin)
		return false;
	while (cin.get() != '\n')
		continue;
	return true;
}
void ShowReview(const shared_ptr<Review> & rr)
{
	cout << rr->title << "\t" << rr->rating <<"\t"<<rr->price<< endl;
}
void showMenu()
{
	cout << "Please enter 1,2,3,4,5,6 or 7\n"
		<< "1) by original order \t 2) by alphabet order \n"
		<< "3) by rating up      \t 4) by rating down    \n"
		<< "5) by pricing up     \t 6) by pricing down   \n"
		<< "7) quit  \n";
}