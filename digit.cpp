#include <iostream>
#include <map>

std::map<int, char> hexMap = {
    {0, '0'},
    {1, '1'},
    {2, '2'},
    {3, '3'},
    {4, '4'},
    {5, '5'},
    {6, '6'},
    {7, '7'},
    {8, '8'},
    {9, '9'},
    {10, 'A'},
    {11, 'B'},
    {12, 'C'},
    {13, 'D'},
    {14, 'E'},
    {15, 'F'}
};




int main(){
     int data [100];
        int n = 0;
        int x;
        int y;
        std::cin >> x;
        std::cout << "Enter the base " << std::endl;
        std::cin >> y;
        if(y<11){
        while(x > 0){
            data[n] = x%y;
            x = x/y;
            n++;
        }
       
        while(n != 0){
            n--;
            std::cout << data[n];
            
        }
    }else{


        while(x > 0){
            data[n] = x%y;
            x = x/y;
            n++;
        }
       
        while(n != 0){
            n--;
            std::cout << hexMap[data[n]];
            
        }
    }

    return 0;
}
