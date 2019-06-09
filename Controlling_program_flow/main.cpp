#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers{};        
    char choice{'Q'};
    int n{0}, small{0};
    int mean{0}, large{0};
    
    while (choice != 'q'){
        cout << "=====================================\n"
        << "\t\tMENU\n"
        << "\t-------------------\n"
        << "P - Print numbers\n"
        << "A - Add a number\n"
        << "M - Display mean of the numbers\n"
        << "S - Display the smallest number\n"
        << "L - Display the largest number\n"
        << "Q - Quit\n"
        << "=====================================\n"
        << endl;
        
        cout << "> ";
        cin >> choice;
        cout << endl;
        
        switch(choice){
            case 'p':
            case 'P':
                if (numbers.size() == 0){
                    cout << "[] - the list is empty"
                        << endl;
                }
                else{
                    cout << "[ ";
                    for (size_t i{0}; i < numbers.size(); i++)
                        cout << numbers.at(i) << " ";
                    cout << "]" << endl;
                }
                break;
                
            case 'a':
            case 'A':
                cout << "Enter a number: ";
                cin >> n;
                numbers.push_back(n);
                break;
            
            case 'm':
            case 'M':                
                if (numbers.size() == 0){
                    cout << "Unable to calculate the mean - no data"
                        << endl;
                }
                else{
                    for (size_t i{0}; i < numbers.size(); i++)
                        mean += numbers.at(i);
                    mean = mean / numbers.size();
                }
                break;
                
            case 's':
            case 'S':
                if (numbers.size() == 0){
                    cout << "Unable to determine the smallest "
                        << "number - list is empty"
                        << endl;
                }
                else{
                    small = numbers.at(0);
                    for (size_t i{1}; i < numbers.size(); i++){
                        if (small >= numbers.at(i))
                            small = numbers.at(i);
                    }
                }
                break;
            
            case 'l':
            case 'L':
                if (numbers.size() == 0){
                    cout << "Unable to determine the largest "
                        << "number - list is empty"
                        << endl;
                }
                else{
                    large = numbers.at(0);
                    for (size_t i{1}; i < numbers.size(); i++){
                        if (large <= numbers.at(i))
                            large = numbers.at(i);
                    }
                }
                break;
            
            case 'q':
            case 'Q':
                cout << "GoodBye!" << endl;
                exit(0);
        }
    }
	return 0;
}
