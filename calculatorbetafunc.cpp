#include <iostream>
#include <cmath>
#include <iomanip>

void plus1(long double* a, long double* b);
void minus1(long double* a, long double* b);
void multiply1(long double* a, long double* b);
void division1(long double* a, long double* b);
void pow1(long double* a, long double* b);

int main(){
    long double a;
    long double b;
    char c;
    std::cout << std::setprecision(15) << std::fixed;
    while(std::cin >> a >> c >> b){
        switch(c){
            case '+': {
                plus1(&a,&b);
            }
            break;

            case '-' : {
                minus1(&a,&b);
            }
            break;

            case '*' : {
                 multiply1(&a,&b);
                
            }
            break;

            case '/' : {
                if(b != 0){
                division1(&a,&b);
                }else{
                    std::cout << "you can't divine with 0" << std::endl;
                }
            }
            break;

            case '^' : {
                pow1(&a,&b);
            }
            break;

            default: {
                std::cout << "Invalid character" << std::endl;
            }

        }
    }
   
   return 0;
}


void plus1(long double* a, long double* b){
    long double plus = *a + *b;
    std::cout << plus << std::endl;
}

void minus1(long double* a, long double* b){
    long double minus = *a - *b;
    std::cout << minus << std::endl;
}
void multiply1(long double* a, long double* b){
    long double multiply = *a * *b;
    std::cout << multiply << std::endl;
}
void division1(long double* a, long double* b){
    long double division = *a/(*b);
    std::cout << division << std::endl;
}
void pow1(long double* a, long double* b){
    long double pow = std::pow(*a,*b);
    std::cout << pow << std::endl;
}
