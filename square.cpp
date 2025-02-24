#include <iostream>

int main(){
    int one;
    int two;
    std::cin >> one >> two;
    for(size_t i {0};i < one;++i){
        for(size_t i {0};i < two;++i){
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
