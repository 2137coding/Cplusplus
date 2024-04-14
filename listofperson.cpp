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
        int index {0};
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

};

class book{
    public :
        int index {9999};
        std::string book_name;
        int year;
        int x = 15;

        book(){
            std::cout << "type name of book" << std::endl;
            std::cin >> book_name;
            std::cout << "Type year of relase" << std::endl;
            std::cin >> year;
        }
    public :
        void display(){
            std::cout << std::setw(x) << book_name << std::setw(x) << year << std::endl;
        }
        void check(){

        };
};

class borrowing{
    public :
        int id_person {0};
        int id_book {9999};
        int x {15};

    public :
    void display(){
        if(id_book != 9999){
        std::cout << std::setw(x)  << "ID person : " << std::setw(5) << id_person << std::setw(x) << "ID book : " << std::setw(5) << id_book << std::endl;
        }
    }
    void check(){

    }

};

template <typename T>
void add(std::vector<T>& a);
template <typename T>
void list(std::vector<T>& a);
void adults (std::vector<person>& a);
void kids(std::vector<person>& a);
template <typename T>
void index(std::vector<T>& b);
void get_id(std::vector<person>& a,std::vector<borrowing>& c);
void add_id(std::vector<borrowing>& c);
void erase(std::vector<person>& a);


int main(){
    std::vector<person> a;
    std::vector<book> b;
    std::vector<borrowing> c;
    std::string command;
    while(std::cin >> command && command != "end"){
        if(command == "add"){
            add(a);
            index(a);
        }else if(command == "list"){
            list(a);
        }else if(command == "adults"){
            adults(a);
        }else if(command == "kids"){
            kids(a);
        }
        if(command == "change_to_books"){
            while(std::cin >> command && command != "change_to_persons" && command != "change_to_borrowing"){
                if(command == "add"){
                    add(b);
                    index(b);
                }else if(command == "list"){
                    list(b);

                }
            }
        }
        if(command == "change_to_borrowing"){
            while(std::cin >> command && command != "change_to_person" && command != "change_to_books"){
            get_id(a,c);
            if(command == "add_borrow"){
               add_id(c);
            }else if(command == "list"){
                for(size_t i {0}; i < c.size();++i){
                    c[i].display();
                }
            }
        }
        }

    }
    return 0;
}

template <typename T>
void add(std::vector<T>& a){
    T news;
    a.push_back(news);
}

template <typename T>
void list(std::vector<T>& a){
    for(size_t i {0}; i < a.size();++i){
        a[i].check();
        std::cout << "index : " <<  (i) << "  ";
        a[i].display();
    }
}

void adults(std::vector<person>& a){
    for(size_t i {0}; i < a.size();++i){
        a[i].check();
        if(a[i].adult){
            std::cout << "index : " <<  (i+1) << "  ";
        a[i].display();
        }
    }
    }

    void kids(std::vector<person>& a){
        for(size_t i {0}; i < a.size();++i){
            a[i].check();
            if(a[i].adult == false){
                std::cout << "index : " <<  (i+1) << "  ";
                a[i].display();
            }
        }
    }

template <typename T>
void index(std::vector<T>& b){
    for(size_t i {0}; i < b.size();++i){
        b[i].index = i;
    }
}

void get_id(std::vector<person>& a, std::vector<borrowing>& c){
    borrowing x;
    for(size_t i {0}; i < a.size();++i){
        c.push_back(x);
    }
    for(size_t i {0}; i < a.size();++i){
        c[i].id_person = a[i].index;
        
    }
}

void add_id(std::vector<borrowing>& c){
    std::cout << "Type id of person and id of book" << std::endl;
       int i_p;
       int i_b;
       std::cin >> i_p >> i_b;
       for(size_t i {0}; i < c.size();++i){
        if(c[i].id_person == i_p){
            c[i].id_book = i_b;
        }
       }

}
