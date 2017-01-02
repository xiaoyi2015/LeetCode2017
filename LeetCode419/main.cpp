#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<char>> input;
    for(int i = 0; i < 4; i ++){
        vector<char > one;
        char a;
        for(int j = 0 ; j < 3; j++){
            cin >> a;
            one.push_back(a);
        }
        input.push_back(one);
    }

    int x = input.size();
    int y = input[0].size();
    int count = 0;
    for(int i = 0; i < x; i ++){
        for(int j = 0; j < y; j++){
            if((input[i][j] == 'X') && ((i == 0) || (input[i-1][j] == '.')) && ((j == 0) || (input[i][j - 1] == '.'))){
                count++;
            }
        }
    }
    std::cout << count << std::endl;
    return 0;
}