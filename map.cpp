#include <iostream>
#include <map>

void find(int a);
void fund(int a);

std::map<int, std::string> x {
    {1, "one"},
    {2, "two"},
    {3, "three"},
};

int main(){
   int a;
   std::cin >> a;

   fund(a);

    

    return 0;
}

//function that only shows value not ID
void find(int a){
    if(x.find(a) != x.end()){
        std::cout << x[a] << std::endl;
    }else{
        std::cout << "wrong ID" << std::endl;
    }
}
//function that shows ID and value
void fund(int a){
    std::map<int, std::string>::iterator it = x.find(a);
    if(it != x.end()){
        std::cout << it->first << " : " << it->second << std::endl;
    }else{
        std::cout << "wrong ID" << std::endl;
    }
}
