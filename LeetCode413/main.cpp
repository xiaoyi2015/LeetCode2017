#include <iostream>
#include <vector>

using namespace std;

int numberOfArithmeticSlices(vector<int>& A) {
    int count = 0;
    int add = 0;
    for(int i = 2; i < A.size(); i++){
        if(A[i] - A[i-1] == A[i-1] - A[i-2]){
            add ++;
            count = count + add;

        }else{
            add = 0;
        }

    }
    return count;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}