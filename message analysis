#include <iostream>
#include <cctype>
#include <string>
#include <iomanip>

int main(){
    std::cout << "Type number of how many you want to use this program" << std::endl;
    size_t COUNT;
    std::cin >> COUNT;
    std::cin.ignore();
    for(size_t i {0}; i < COUNT;++i){
    std::string message;
    std::getline(std::cin,message);
    size_t isprint {0};
    size_t isalnum {0};
    size_t isalpha {0};
    size_t isblank {0};
    size_t isdigit {0};
    size_t islower {0};
    size_t isupper {0};
    size_t ispunct {0};
    for(auto i : message){
        if(std::isprint(i)){
            ++isprint;
        }  
    }
    for(size_t i {0}; i < (std::size(message));++i){
        if(std::isalnum(message[i])){
            ++isalnum;
        }
    }
    for(auto a : message){
        if(std::isalpha(a)){
            ++isalpha;
        }
    }
    for(size_t i {0}; i < (std::size(message));++i){
        if(std::isblank(message[i])){
            ++isblank;
        }
    }
    for(size_t i {0}; i < (std::size(message));++i){
        if(std::isdigit(message[i])){
            ++isdigit;
        }
    }
    for(auto l : message){
        if(std::islower(l)){
            ++islower;
        }
    }
    for(auto u : message){
        if(std::isupper(u)){
            ++isupper;
        }
    }
    for(auto p : message){
        if(std::ispunct(p)){
            ++ispunct;
        }
    }
    int x {22};
   std::cout << std::endl;
   std::cout << std::setw(x) << "Summary" << std::endl;
   std::cout << std::setw(x) << "characters : " << isprint << std::endl;
   std::cout << std::setw(x) << "alfanumeric : " << isalnum << std::endl;
   std::cout << std::setw(x) << "letters : " << isalpha << std::endl;
   std::cout << std::setw(x) << "blank space : " << isblank << std::endl;
   std::cout << std::setw(x) << "digits : " << isdigit << std::endl;
   std::cout << std::setw(x) << "lower letters : " << islower << std::endl;
   std::cout << std::setw(x) << "upper letters : " << isupper << std::endl;
   std::cout << std::setw(x) << "Punctuation mark : " << ispunct << std::endl;

    }



   return 0;
}
