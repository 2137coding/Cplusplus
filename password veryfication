#include <iostream>
#include <string>

int main(){
    std::string password;
    std::cout << "Write your 8 print password, don't use spaces, your password must contains digits or special characters" << std::endl;
    std::cin >> password;
    size_t blank {0};
    size_t digit {0};
    size_t upper {0};
    size_t punct {0};
    for(char a : password){
        if(std::isblank(a)){
        ++blank;
        }
    }
    for(char b : password){
        if(std::isdigit(b)){
        ++digit;
        }
    }
    for(char c : password){
        if(std::isupper(c)){
        ++upper;
        }
    }
    for(char d : password){
        if(std::ispunct(d)){
        ++punct;
        }

    }
    if((blank == 0) && ((digit != 0) || (upper != 0) || (punct != 0))){
    if(std::size(password) == 8){

    
    std::string real_password {password,0,8};
    std::cout << "Write your password again to complete" << std::endl;
    std::cin >> password;
    if(real_password == password){
        std::cout << "Your password is good" << std::endl;
    }else{
        std::cout << "invalid password" << std::endl;
    }
    }else if(std::size(password) < 8){
        std::cout << "Your password is to small" << std::endl;
    }else{
        std::cout << "Your password is to big" << std::endl;
    }
    }else{
        std::cout << "Invalid password, you use spaces or don't use digits or special characters" << std::endl;
    }
    return 0;
}
