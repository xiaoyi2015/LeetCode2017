#include <iostream>
#include <cstring>

using namespace std;

int myAtoi(const char * str){
    long long res = 0;
    long long int_min = INT_MIN;
    long long int_min_fu = 0 - int_min;
    cout<< int_min << " " << int_min_fu << endl;
    int index = 0;
    bool isPos = true;
    while(str[index] == ' '){
        index ++;

    }
    if(str[index] == '\0'){
        return 0;
    }else if(str[index] == '-'){
        isPos = false;
        index++;
    }else if(str[index] == '+'){
        isPos = true;
        index++;
    }else if(str[index] - '0' >=0 && str[index] - '0' <=9){
        isPos = true;
    }else {
        return 0;
    }
    while(str[index] - '0' >=0 && str[index] - '0' <=9){
        int n = str[index] - '0';
        res = res * 10 + n;
        index++;

        if(res > int_min_fu && isPos == false){
            return int_min_fu;
        }
        if(res > INT_MAX && isPos == true){
            return INT_MAX;
        }
    }
    if(!isPos){
        res = -res;
    }
    return (int)res;
}


int main() {
    const char * str = "888886";

    std::cout << myAtoi(str) << std::endl;
    return 0;
}