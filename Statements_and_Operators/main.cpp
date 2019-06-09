#include <iostream>

using namespace std;

int main()
{
    cout << "*** For this program I will be"
    << "using US dollars and cents. ***"
    << endl;
    
    cout << "In the US:\n"
		<< "\t- 1 dollar is 100 cents.\n"
		<< "\t- 1 quarter is 25 cents.\n"
		<< "\t- 1 dime is 10 cents.\n"
		<< "\t- 1 nickel is 5 cents.\n"
		<< "\t- 1 penny is 1 cent.\n"
        << "-----------------------------------------\n"
        << endl;
    
    int cents{0}, remainder{0};
    cout << "Enter an amount in cents: ";
    cin >> cents;
    remainder = cents;
    
    if (cents >= 100){
        remainder = cents % 100;
        cout << "dollars: "
            << (cents - remainder) / 100
            << endl;
        cents = remainder;
    }
    
    if (remainder >= 25){
        remainder = cents % 25;
        cout << "quarters: "
            << (cents - remainder) / 25
            << endl;
        cents = remainder;
    }
    
    if (remainder >= 10){
        remainder = cents % 10;
        cout << "dimes: "
            << (cents - remainder) / 10
            << endl;
        cents = remainder;
    }
    
    if (remainder >= 5){
        remainder = cents % 5;
        cout << "nickels: "
            << (cents - remainder) / 5
            << endl;
        cents = remainder;
    }
    
    if (remainder < 5){
        cout << "pennies: "
            << cents
            << endl;
    }
    
	return 0;
}
