#include <iostream>
#include <vector>
using namespace std;

vector<string> summaryRanges(vector<int>& nums) {
    vector<string> res;

    if(nums.size() == 0){
        return res;
    }
    int s = 0, l = 0;
    while(l < nums.size()){
        if(l + 1 < nums.size() && nums[l] + 1 == nums[l+1]){
            l ++;
        } else{
            if(s == l){
                res.push_back(to_string(nums[l]));
            }else{
                string t = to_string(nums[s]) + "->" + to_string(nums[l]);
                res.push_back(t);
            }
            l ++;
            s = l;
        }
    }
    return res;
}

int main() {

    vector<int> num;
    num.push_back(1);
    num.push_back(3);
    num.push_back(4);
    num.push_back(5);
    num.push_back(7);
    vector<string> out = summaryRanges(num);
    for(auto c: out)
        std::cout << c << std::endl;
    return 0;
}