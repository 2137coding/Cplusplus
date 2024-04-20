#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

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

        borrowing() = default;
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
void add_id(std::vector<borrowing>& c,std::vector<person>& a, std::vector<book>& b);
template <typename T>
void erase(std::vector<T>& a);
void erase_person(std::vector<person>& a,std::vector<borrowing>& c);
void erase_borrow(std::vector<borrowing>& c);




int main(){
    std::vector<person> a;
    std::vector<book> b;
    std::vector<borrowing> c;
    std::string command;
    std::cout << "add - to add person to the list" << std::endl;
    std::cout << "list -  to see list of persons" << std::endl;
    std::cout << "adults - to see list of adults" << std::endl;
    std::cout << "kids - to see list of kids" << std::endl;
    std::cout << "erase - to erase person from the list" << std::endl;
    std::cout << "change_to_books - to change to books" << std::endl;
    std::cout << "change_to_borrowing - to change to borrows" << std::endl;
    std::cout << "change_to_person - to change to persons" << std::endl;
    std::cout << "end - to end program" << std::endl;
    while(std::cin >> command && command != "end"){
        if(command == "add"){
            add(a);
            index(a);
        }else if(command == "list"){
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
            list(a);
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
        }else if(command == "adults"){
            adults(a);
        }else if(command == "kids"){
            kids(a);
        }else if(command == "erase"){
            erase_person(a,c);
            index(a);
        }
            std::cout << "add - to add person to the list" << std::endl;
            std::cout << "list -  to see list of persons" << std::endl;
            std::cout << "adults - to see list of adults" << std::endl;
            std::cout << "kids - to see list of kids" << std::endl;
            std::cout << "erase - to erase person from the list" << std::endl;
            std::cout << "change_to_books - to change to books" << std::endl;
            std::cout << "change_to_borrowing - to change to borrows" << std::endl;
            std::cout << "end - to end program" << std::endl;
        if(command == "change_to_books"){
            std::cout << "add - to add book to the list" << std::endl;
            std::cout << "list -  to see list of books" << std::endl;
            std::cout << "erase - to erase book from the list" << std::endl;
            std::cout << "change_to_person - to change to persons" << std::endl;
            std::cout << "change_to_borrowing - to change to borrows" << std::endl;
            std::cout << "end - to end program" << std::endl;
            while(std::cin >> command && command != "change_to_persons" && command != "change_to_borrowing"){
                if(command == "add"){
                    add(b);
                    index(b);
                }else if(command == "list"){
                    std::cout << std::endl;
                    std::cout << std::endl;
                    std::cout << std::endl;
                    list(b);
                    std::cout << std::endl;
                    std::cout << std::endl;
                    std::cout << std::endl;

                }else if(command == "erase"){
                    erase(b);
                    index(a);
                }
            }
        }
        if(command == "change_to_borrowing"){
             std::cout << "add - to add borrow to the list" << std::endl;
            std::cout << "list -  to see list of borrows" << std::endl;
            std::cout << "erase - to erase borrow from the list" << std::endl;
            std::cout << "change_to_books - to change to books" << std::endl;
            std::cout << "change_to_person - to change to persons" << std::endl;
            std::cout << "end - to end program" << std::endl;
            while(std::cin >> command && command != "change_to_person" && command != "change_to_books"){
            get_id(a,c);
            if(command == "add"){
               add_id(c,a,b);
            }else if(command == "list"){
                std::cout << std::endl;
                std::cout << std::endl;
                std::cout << std::endl;
                for(size_t i {0}; i < c.size();++i){
                    c[i].display();
                }
                std::cout << std::endl;
                std::cout << std::endl;
                std::cout << std::endl;
            }else if(command == "erase"){
                erase_borrow(c);
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
        std::cout << "ID : " <<  (i) << "  ";
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
    std::vector<borrowing>::iterator y = c.begin();
    borrowing x;
    if(c.size() == 0){
    for(size_t i {0}; i < a.size();++i){
        c.push_back(x);
    }
    for(size_t i {0}; i < a.size();++i){
        c[i].id_person = a[i].index;
        
    }
    }
    if(c.size() != a.size()){
        while(c.size() < a.size()){
            c.push_back(x);
            
        }
    }
    for(size_t i {0}; i < a.size();++i){
        c[i].id_person = a[i].index;
        
    }
    
}


void add_id(std::vector<borrowing>& c, std::vector<person>& a, std::vector<book>& b){
    std::cout << "Type id of person and id of book" << std::endl;
       int i_p;
       int i_b;
       std::cin >> i_p >> i_b;
       if(i_p <= a.size() && i_b <= b.size()){
       for(size_t i {0}; i < c.size();++i){
        if(c[i].id_person == i_p){
            c[i].id_book = i_b;
        }
       }
       }else if(i_p > a.size() && i_b > b.size()){
        std::cout << "two invalid ID" << std::endl;
       }else if(i_p > a.size()){
        std::cout << "invalid person ID" << std::endl;
       }else if(i_b > b.size()){
        std::cout << "invalid book ID" << std::endl;
       }

}

template <typename T>
void erase(std::vector<T>& a){
    std::cout << "type ID to erase" << std::endl;
    int index1;
    std::cin >> index1;
    typename std::vector<T>::iterator x = a.begin() + index1;
    if(index1 <= a.size()){
    a.erase(x);
    }else{
        std::cout << "invalid ID" << std::endl;
    }
}

void erase_person(std::vector<person>& a,std::vector<borrowing>& c){
    std::cout << "type ID to erase" << std::endl;
    int indexx;
    std::cin >> indexx;
    std::vector<person>::iterator x = a.begin() + indexx;
    std::vector<borrowing>::iterator y = c.begin() + indexx;
    if(indexx <= a.size()){
       a.erase(x); 
    }else{
        std::cout << "invalid ID" << std::endl;
    }
    c.erase(y);
}

void erase_borrow(std::vector<borrowing>& c){
    std::cout << "type ID of person to erase the borrow" << std::endl;
    int bor;
    std::cin >> bor;
    if(bor <= c.size()){
    for(size_t i {0}; i < c.size();++i){
        if(c[i].id_person == bor){
            c[i].id_book = 9999;
        }
    }
    }else{
        std::cout << "invalid ID" << std::endl;
    }
}
