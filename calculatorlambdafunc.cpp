#include <iostream>
#include <cmath>

auto plus = [](double a,double b){
    std::cout << a + b << std::endl;
};

auto minus = [](double a, double b){
    std::cout << a - b << std::endl;
};

auto multiply = [](double a, double b){
    std::cout << a * b << std::endl;
};

auto divine = [](double a, double b){
    std::cout << a/b << std::endl;
};

auto poww = [](double a, double b){
    std::cout << std::pow(a,b) << std::endl;
};

int main() {
    double a;
    double b;
    char c;
    std::cin >> a >> c >> b;
    switch(c){
        case '+': {
            plus(a,b);
        }
        break;
        
        case '-':{
            minus(a,b);
        }
        break;
        
        case '*': {
            multiply(a,b);
        }
        break;
        
        case '/': {
            if(b != 0){
            divine(a,b);
            }else{
                std::cout << "You can't divine with 0" << std::endl;
            }
        }
        break;
        
        case '^' : {
            poww(a,b);
        }
        break;
        
        default :{
            std::cout << "error" << std::endl;
        }
    }
    

    return 0;
}
