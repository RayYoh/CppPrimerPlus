#include <iostream>
#include "13.1tabtenn0.h"

int main()
{
	using std::cout;
	using std::endl;
	TableTennisPlayer player1("Chuck", "Blizzard", true);
	//TableTennisPlayer player2("Tara", "Boomdea", false);
	RatedPlayer rplayer1(1140, "Mallory", "Duck", true);
	rplayer1.Name();
	if (rplayer1.HasTable())
		cout << ": has a table.\n";
	else
		cout << ": hasn't a table.\n";
	player1.Name();
	if (player1.HasTable())
		cout << ": has a table.\n";
	else
		cout << ": hasn't a table.\n";
	cout << "Name: ";
	rplayer1.Name();
	cout << "; Rating: " << rplayer1.Rating() << endl;
	RatedPlayer rplayer2(1000, player1);
	cout << "Name: ";
	rplayer2.Name();
	cout << "; Rating: " << rplayer2.Rating() << endl;
	return 0;
}