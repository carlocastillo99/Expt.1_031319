#include <iostream>
#include <conio.h>

using namespace std;

int main() 
{
	double a, b, c, d;

	cout << "Ticket Price       " << endl;
	cout << "Box: $250" << endl;
	cout << "Sideline: $100" << endl;
	cout << "Premium: $50" << endl;
	cout << "General Admission: $25" << endl;
	cout << "Enter no. of tickets sold for Box: " << endl;
	cin >> a;
	cout << "Enter no. of tickets sold for Sideline: " << endl;
	cin >> b;
	cout << "Enter no. of tickets sold for Premium: " << endl;
	cin >> c;
	cout << "Enter no. of tickets sold for General Admission: " << endl;
	cin >> d;

	cout << "Ticket sold per section: " << endl;
	
	cout << "Box: " << a << (250*a) << endl;
	cout << "Sideline: " << b << (100*b) << endl;
	cout << "Premium: " << (50*c) << endl;
	cout << "General Admission: " << (d*25) << endl;
	cout << "Total income: " << (250*a) + (100*b) + (50*c) + (d*25) << endl;
	_getch();
	return 0;
}