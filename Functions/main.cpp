#include <iostream>
#include <vector>

using namespace std;
char menu();
void display(const vector<int> numbers);
void add(vector<int> &numbers);
void mean_value(const vector<int> numbers);
void smallest(const vector<int> numbers);
void largest(const vector<int> numbers);

int main()
{
    vector<int> numbers{};
    char choice{'Q'};

    while (choice != 'q'){
        choice = menu();
        switch(choice){
            case 'p':
            case 'P':
                display(numbers);
                break;
                
            case 'a':
            case 'A':
                add(numbers);
                break;
            
            case 'm':
            case 'M':                
                mean_value(numbers);
                break;
                
            case 's':
            case 'S':
                smallest(numbers);
                break;
            
            case 'l':
            case 'L':
                largest(numbers);
                break;
            
            case 'q':
            case 'Q':
                cout << "GoodBye!" << endl;
                exit(0);
        }
    }
	return 0;
}

char menu(){
    char choice{'Q'};
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
        return choice;
}

void display(const vector<int> numbers){
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
}

void add(vector<int> &numbers){
    int n{0};
    cout << "Enter a number: ";
    cin >> n;
    numbers.push_back(n);
}

void mean_value(const vector<int> numbers){
    double mean{0.0};
    if (numbers.size() == 0){
        cout << "Unable to calculate the mean - no data"
            << endl;
    }
    else{
        for (size_t i{0}; i < numbers.size(); i++)
            mean += numbers.at(i);
        mean = mean / numbers.size();
        cout << mean << endl;
    }
}

void smallest(const vector<int> numbers){
    int small{0};
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
        cout << small << endl;
    }
}

void largest(const vector<int> numbers){
    int large{0};
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
        cout << large << endl;
    }
}