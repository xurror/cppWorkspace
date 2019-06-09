#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> vector1{};
	
	vector1.push_back(10);
	vector1.push_back(20);
	
	cout << "Vector1: [ "
		<< vector1.at(0)
        << " "
		<< vector1.at(1)
		<< " ]" << endl;
	cout << "Vector1 has size: "
        << vector1.size() << endl;
    
    cout << "-------------\n" << endl;
    vector <int> vector2{};
    
    vector2.push_back(100);
	vector2.push_back(200);
	
	cout << "Vector2: [ "
		<< vector2.at(0)
        << " "
		<< vector2.at(1)
		<< " ]" << endl;
	cout << "Vector2 has size: "
        << vector2.size() << endl;
    
    cout << "-------------\n" << endl;
	
    vector <vector<int>> vector2d;
    
    vector2d.push_back(vector1);
	vector2d.push_back(vector2);
	
	cout << "Vector 2D: [ [ "
		<< vector2d.at(0).at(0)
        << " "
		<< vector2d.at(0).at(1)
		<< " ] [ "
        << vector2d.at(1).at(0)
        << " "
		<< vector2d.at(1).at(1)
		<< " ] ]" << endl;
	cout << "Vector 2D has size: "
        << vector2d.size() << endl;
    
    cout << "-------------\n" << endl;
    
    vector1.at(0) = 1000;
    
    cout << "Vector 2D: [ [ "
		<< vector2d.at(0).at(0)
        << " "
		<< vector2d.at(0).at(1)
		<< " ] [ "
        << vector2d.at(1).at(0)
        << " "
		<< vector2d.at(1).at(1)
		<< " ] ]" << endl;
	cout << "Vector 2D has size: "
        << vector2d.size() << endl;
    
    cout << "-------------\n" << endl;
    
    cout << "Vector1: [ "
		<< vector1.at(0)
        << " "
		<< vector1.at(1)
		<< " ]" << endl;
	cout << "Vector1 has size: "
        << vector1.size() << endl;
    
    cout << "-------------\n" << endl;
	return 0;
}
