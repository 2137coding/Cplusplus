#include <iostream>
#include <cmath>
#include <iomanip>

long double plus1(long double a, long double b){
    long double plus = a + b;
    return plus;
}

long double minus1(long double a, long double b){
    long double minus = a - b;
    return minus;
}
long double multiply1(long double a, long double b){
    long double multiply = a * b;
    return multiply;
}
long double division1(long double a, long double b){
    long double division = a/b;
    return division;
}
long double pow1(long double a, long double b){
    long double pow = std::pow(a,b);
    return pow;
}
int main(){
    long double a;
    long double b;
    long double result;
    char c;
    std::cout << std::setprecision(15) << std::fixed;
    while(std::cin >> a >> c >> b){
        switch(c){
            case '+': {
                result = plus1(a,b);
                std::cout << result << std::endl;
            }
            break;

            case '-' : {
                result = minus1(a,b);
                std::cout << result << std::endl;
            }
            break;

            case '*' : {
                result = multiply1(a,b);
                std::cout << result << std::endl;
            }
            break;

            case '/' : {
                if(b != 0){
                result = division1(a,b);
                std::cout << result << std::endl;
                }else{
                    std::cout << "you can't divine with 0" << std::endl;
                }
            }
            break;

            case '^' : {
                result = pow1(a,b);
                std::cout << result << std::endl;
            }
            break;

            default: {
                std::cout << "Invalid character" << std::endl;
            }

        }
    }
   
   return 0;
}