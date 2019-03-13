#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double box = 250;
	double side = 100;
	double prem = 50;
	double gen = 25;

	cout << "Box tickets sold: " << endl;
	cin >> box;
	cout << "Amount of box tickets sold: "  << "         " << "P" << 250*box << endl;
	cout << " " << endl;

	cout << "Sideline Tickets sold: " << endl;
	cin >> side;
	cout << "Amount of side tickets sold: "  << "         "<< "P"  << 100*side << endl;
	cout << " " << endl;

	cout << "Premium Tickets sold: " << endl;
	cin >> prem;
	cout << "Amount of Premium tickets sold: "  << "         "<< "P"  << 50*prem << endl;
	cout << " " << endl;

	cout << "General Admission Tickets sold: " << endl;
	cin >> gen;
	cout << "Amount of General Admission tickets sold: "  << "         "<< "P"  << 25*gen << endl;
	cout << " " << endl;

	cout << "Total number of Tickets Sold: " << "         " << box+prem+side+gen << endl;
	cout << "Total Sales: " <<  "         " << "P" << box*250+side*100+prem*50+25*gen << endl;

	_getch();
	return 0;
}