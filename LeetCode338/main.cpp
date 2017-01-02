#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> res;
    int num;
    cin >> num;
    if(num == 0){
        res.push_back(0);
    }
    if(num == 1){
        res.push_back(0);
        res.push_back(1);
    }
    res.push_back(0);
    res.push_back(1);
    int k = 2;
    while(k <= num){
        size_t stride = res.size();
        for(int i = 0; i < stride && k <= num; i ++){
            res.push_back(res[i] + 1);
            k ++;
        }
    }
    std::cout << "Ok" << std::endl;
    return 0;
}