#include <iostream>
#include <vector>

int maximus(int a,int b);
void full(std::vector<int>& a, std::vector<int>& b,std::vector<int>& d, int c);

int main() {
    
    std::vector<int> a_div;
    std::vector<int> b_div;
    std::vector<int> both_div;
    int max {0}; 
    int a;
    int b;
    std::cin >> a >> b;
     int c = maximus(a, b);
     full(a_div,b_div,both_div,c);
  
    for (size_t i = 1; i <= c; ++i) { 
        if (a % i == 0) {
            a_div[i] = i;
        }

        if (b % i == 0) {
            b_div[i] = i;
        }
    }

    for (size_t i = 0; i < 1000; ++i) {
        if (a_div[i] != 0 && a_div[i] == b_div[i] && b_div[i] != 0) {
            both_div[i] = a_div[i];
        }
    }

    for (size_t i = 0; i < c; ++i) {
        if (both_div[i] > 0) {
            max = both_div[i];
        }
    }

    std::cout << "GCD " << max << std::endl;

 

    return 0;
    
}

int maximus(int a,int b){
    return (a >= b) ? a : b;
}

void full(std::vector<int>& a, std::vector<int>& b,std::vector<int>& d,int c){
    for(size_t i {0}; i < c;++i){
        a.push_back(0);
        b.push_back(0);
        d.push_back(0);
    }
}
