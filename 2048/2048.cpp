#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> grid(){
    vector<int> line;
    vector<vector<int>> input;
    for(size_t i=0; i<4; i++){
        for(size_t j=0; j<4; j++){
            int n;
            cin >> n;
            line.push_back(n);
        }
        input.push_back(line);
        line.clear();
    }
    return input;
}

vector<int> adjust_left(vector<int> line){
    for (size_t i{0}; i<4; i++){
        try
        {
            if(line.at(i)==0 && line.at(i+1) != 0){
                line.at(i) = line.at(i+1);
                line.at(i+1) = 0;
            }
        }
        catch(const out_of_range& e)
        {
            continue;
        }        
    }
    return line;
}

vector<vector<int>> left(vector<vector<int>> input){
    vector<vector<int>> output;

    for (vector<int> line : input){        
        // cout << "get line" << endl;
        for (size_t i{0}; i<4; i++){
            // cout << "perform ops" << endl;
            try
            {
                line = adjust_left(line);
                line = adjust_left(line);
                line = adjust_left(line);
                line = adjust_left(line);
                if (line.at(i) == line.at(i+1)){
                    // cout << "ops 2 i="<< line.at(i) << " i+1="<< line.at(i+1)<< endl;
                    int a = line.at(i);
                    int b = line.at(i+1);
                    line.at(i) = a + b;
                    // cout << "line at i = " << line.at(i) << endl;
                    line.at(i+1) = 0;
                }
                line = adjust_left(line);
                line = adjust_left(line);
                line = adjust_left(line);
                line = adjust_left(line);    
            }
            catch(const out_of_range& e)
            {
                continue;
            }                        
        }
        output.push_back(line);
        line.clear();
    }
    return output;
}

vector<int> adjust_right(vector<int> line){
    for (size_t i{4}; i>0; i--){
        try{
            if(line.at(i)==0 && line.at(i-1) != 0){
                line.at(i) = line.at(i-1);
                line.at(i-1) = 0;
            }
        }catch(const out_of_range& e){
            continue;
        }        
    }
    return line;
}

vector<vector<int>> right(vector<vector<int>> input){
    vector<vector<int>> output;

    for (vector<int> line : input){        
        // cout << "get line" << endl;
        for (size_t i{4}; i>0; i--){
            // cout << "perform ops" << endl;
            try
            {
                line = adjust_right(line);
                line = adjust_right(line);
                line = adjust_right(line);
                line = adjust_right(line);
                if (line.at(i) == line.at(i-1)){
                    // cout << "ops 2 i="<< line.at(i) << " i+1="<< line.at(i+1)<< endl;
                    int a = line.at(i);
                    int b = line.at(i-1);
                    line.at(i) = a + b;
                    // cout << "line at i = " << line.at(i) << endl;
                    line.at(i-1) = 0;
                }
                line = adjust_right(line);
                line = adjust_right(line);
                line = adjust_right(line);
                line = adjust_right(line);                    
            }
            catch(const out_of_range& e)
            {
                continue;
            }                        
        }
        output.push_back(line);
        line.clear();
    }
    return output;
}


vector<vector<int>> adjust_up(vector<vector<int>> input){
    for(size_t i{0}; i<4; i++){
        for(size_t j{0}; j<4; j++){
            try{
                if (input.at(i).at(j)==0 && input.at(i+1).at(j) != 0){
                    input.at(i).at(j) = input.at(i+1).at(j);
                    input.at(i+1).at(j) = 0;
                }
            }
            catch(const out_of_range& e)
            {
                continue;
            } 
        }
    }
    return input;
}

vector<vector<int>> up(vector<vector<int>> input){
    vector<vector<int>> output;
    input = adjust_up(input);
    input = adjust_up(input);
    input = adjust_up(input);
    input = adjust_up(input);
    for(size_t i{0}; i<4; i++){
        for(size_t j{0}; j<4; j++){
            try
            {                
                if (input.at(i).at(j) == input.at(i+1).at(j)){
                    int a = input.at(i).at(j);
                    int b = input.at(i+1).at(j);
                    input.at(i).at(j) = a + b;
                    input.at(i+1).at(j) = 0;
                }                    
            }
            catch(const out_of_range& e)
            {
                continue;
            }                        
        }
    }
    input = adjust_up(input);
    input = adjust_up(input);
    input = adjust_up(input);
    input = adjust_up(input);
    return input;
}

vector<vector<int>> adjust_down(vector<vector<int>> input){
    for(size_t i{4}; i>0; i--){
        for(size_t j{0}; j<4; j++){
            try{
                if (input.at(i).at(j)==0 && input.at(i-1).at(j) != 0){
                    input.at(i).at(j) = input.at(i-1).at(j);
                    input.at(i-1).at(j) = 0;
                }
            }
            catch(const out_of_range& e)
            {
                continue;
            } 
        }
    }
    return input;
}

vector<vector<int>> down(vector<vector<int>> input){
    vector<vector<int>> output;
    input = adjust_down(input);
    input = adjust_down(input);
    input = adjust_down(input);
    input = adjust_down(input);
    for(size_t i{4}; i>0; i--){
        for(size_t j{0}; j<4; j++){
            try
            {                
                if (input.at(i).at(j) == input.at(i-1).at(j)){
                    int a = input.at(i).at(j);
                    int b = input.at(i-1).at(j);
                    input.at(i).at(j) = a + b;
                    input.at(i-1).at(j) = 0;
                }                    
            }
            catch(const out_of_range& e)
            {
                continue;
            }                        
        }
    }
    input = adjust_down(input);
    input = adjust_down(input);
    input = adjust_down(input);
    input = adjust_down(input);
    return input;
}

int main(){
    vector<vector<int>> input, output;
    int move;
    
    input = grid();
    cin >> move;    
    
    if (move == 0)
        output = left(input);
    else if (move == 1)
        output = up(input);
    else if (move == 2)
        output = right(input);
    else if (move == 3)
        output = down(input);

    // print output
    for (size_t i{0}; i<4; i++){
        for (size_t j{0}; j<4; j++){
            cout << output.at(i).at(j) << " ";
        }
        cout << endl;
    }
    
    // Test case
    /*
    vector<vector<int>> vec{{2,2,4,8},
                            {4,0,4,4},
                            {16,16,16,16},
                            {32,16,16,32}
                            };
    
    vec = left(vec);

    for (size_t i{0}; i<4; i++){
        for (size_t j{0}; j<4; j++){
            cout << vec.at(i).at(j) << " ";
        }
        cout << endl;
    }  
    
    for(auto i:vec){
        cout << i << " ";
    }
    */
}