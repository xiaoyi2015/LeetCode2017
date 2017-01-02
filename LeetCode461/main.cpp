#include <iostream>



int main() {
    int x , y;
    std::cin >> x >> y;
    int num = 0;
    for(int i = 0 ; i < 32; i++){
        int val = 1 << i;
        if((val > x) && (val > y)){
            break;
        }
        if((x & val) != (y & val)) {
            num++;
        }
    }


    std::cout << num << std::endl;
    return 0;
}