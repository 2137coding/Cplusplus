#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>

class person{
    public :
        int age;
        std::string name;
        std::string surname;
        bool adult;
        int x = 15;
    
    public:
        person(){
            std::cout << "Type your name" << std::endl;
            std::cin >> name;
            std::cout << "Type your surname" << std::endl;
            std::cin >> surname;
            std::cout << "Type your age" << std::endl;
            std::cin >> age;
        }


    public : 
        void check(){
            if(age <= 18){
                adult = false;
            }else{
                adult = true;
            }
        }

        void display(){
            if(adult == true){
                std::cout << std::setw(x) << name << "  " << std::setw(x) << surname << "  " << std::setw(x) <<  "adult" << std::endl;
            }else{
                std::cout << std::setw(x) << name << "  " << std::setw(x) << surname << "  " << std::setw(x) << "child" << std::endl;
            }
        }

        void display_adult(){
            if(adult == true){
                std::cout << std::setw(x) << name << "  " << std::setw(x) << surname << "  " << std::setw(x) <<  "adult" << std::endl;
            }
        }

};
template <typename T>
void add(std::vector<T>& a);
void list(std::vector<person>& a);
void adults (std::vector<person>& a);
void erase(std::vector<person>& a);


int main(){
    std::vector<person> a;
    std::string command;
    while(std::cin >> command && command != "end"){
        if(command == "add"){
            add(a);
        }else if(command == "list"){
            list(a);
        }else if(command == "adults"){
            adults(a);
        }

    }
    return 0;
}

template <typename T>
void add(std::vector<T>& a){
    person newperson;
    a.push_back(newperson);
}

void list(std::vector<person>& a){
    for(size_t i {0}; i < a.size();++i){
        a[i].check();
        std::cout << "index : " <<  (i+1) << "  ";
        a[i].display();
    }
}





void adults(std::vector<person>& a){
    for(size_t i {0}; i < a.size();++i){
        a[i].check();
        
        std::cout << "index : " <<  (i+1) << "  ";
        a[i].display_adult();
        }
    }

