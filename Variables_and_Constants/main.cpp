#include <iostream>

using namespace std;

int main()
{
	cout << "-------------------------------------------\n" 
		<< "Welcome to Frank's Carpet Cleaning Service\n"
		<< "Charges:\n"
		<< "\t- $25 per small room\n"
        << "\t- $35 per large room\n"
        << "\t- Sales tax rate is 6%\n"
		<< "Estimates are valid for 30 days\n"
		<< "-------------------------------------------\n" 
		<< endl;
		
	double small_rooms{0}, large_rooms{0};
	
	cout << "Enter number of small rooms: ";
	cin >> small_rooms;
	
	cout << "Enter number of large rooms: ";
	cin >> large_rooms;
		
	double cost{0.0},tax{0.0};
	cost = (small_rooms * 25.0) + (large_rooms * 35.0);
	tax = cost * 0.06;
	
	cout << "==========================================\n";
	
	cout << "Total estimate: "
		<< cost + tax << "\n"
		<< "This estimate is valid for 30 days\n"
		<< endl;
		
	return 0;
}
