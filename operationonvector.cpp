#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void see(const std::vector<int>& x);
void sum(const std::vector<int>& x);
void minus_sum(const std::vector<int>& x, const std::vector<int> y);
void plus_sum(const std::vector<int>& x, const std::vector<int> y);
void average(const std::vector<int>& x);
void sum_of_numbers(const std::vector<int>& x, const std::vector<int>& y);
void minus_of_numbers(const std::vector<int>& x, const std::vector<int>& y);
void add(std::vector<int>& x,int y);
void erase(std::vector<int>& x,int y);
void brand_new_array(std::vector<int>& x);



int main(){
    std::vector<int> array;
    std::vector<int> array1;
    std::string a;
    int input;
    int x {};
    std::cout << "enter the set of numbers you want to operate on to stop write 0" << std::endl;
    while (std::cin >> input && input != 0) {
        array.push_back(input); 

    }
    std::cout << "Type in a word and the program will perform the operation" << std::endl;
    std::cout << "see - to see the numbers you type" << std::endl;
    std::cout << "sum - this give you sum of your numbers" << std::endl;
    std::cout << "average - this give you average from your numbers" << std::endl;
    std::cout << "minus_two -  to write another array and substract sums" << std::endl;
    std::cout << "sum_two  - to write another array and add sum of this two array" << std::endl;
    std::cout << "sum_of_numbers - to add to each number in a set the corresponding number from the second set" << std::endl;
    std::cout << "minus_of_numbers - to subtract from each number in the set the corresponding number from the second set" << std::endl;
    std::cout << "add - to add numbers to your array" << std::endl;
    std::cout << "erase - to erase numbers from your array" << std::endl;
    std::cout << "brand_new_array - to replace old array with new" << std::endl;

    while(std::cin >> a && a != "end"){
    if(a == "average"){
         average(array);
    }else if(a == "sum"){
        sum(array);
    }else if(a == "see"){
        see(array);
    }else if(a == "sum_two"){
        std::cout << "Write 2 array to stop write 0" << std::endl;
        while(std::cin >> input && input != 0){
            array1.push_back(input);
        }
        plus_sum(array,array1);

    }else if(a == "minus_two"){
        std::cout << "Write 2 array to stop write 0" << std::endl;
        while(std::cin >> input && input != 0){
            array1.push_back(input);
        }
        minus_sum(array,array1);
    }else if(a == "sum_of_numbers"){
        std::cout << "write 2 array to stop write 0" << std::endl;
        while(std::cin >> input && input != 0){
            array1.push_back(input);
        }
        sum_of_numbers(array,array1);
    }else if(a == "minus_of_numbers"){
        std::cout << "write 2 array to stop write 0" << std::endl;
        while(std::cin >> input && input != 0){
            array1.push_back(input);
        }
        minus_of_numbers(array,array1);
    }else if(a == "add"){
        std::cout << "Type number to add" << std::endl;
        std::cin >> input;
        add(array,input);
    }else if(a == "erase"){
        std::cout << "type number to remove" << std::endl;
        std::cin >> input;
        erase(array,input);

    }else if(a == "brand_new_array"){
        brand_new_array(array);

    }else{
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "error" << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
    }
    std::cout << "see - to see the numbers you type" << std::endl;
    std::cout << "sum - this give you sum of your numbers" << std::endl;
    std::cout << "average - this give you average from your numbers" << std::endl;
    std::cout << "minus_two -  to write another array and substract sums" << std::endl;
    std::cout << "sum_two  - to write another array and add sum of this two array" << std::endl;
    std::cout << "sum_of_numbers - to add to each number in a set the corresponding number from the second set" << std::endl;
    std::cout << "minus_of_numbers - to subtract from each number in the set the corresponding number from the second set" << std::endl;
    std::cout << "add - to add numbers to your array" << std::endl;
    std::cout << "erase - to erase numbers from your array" << std::endl;
    std::cout << "brand_new_array - to replace old array with new" << std::endl;
    }
    
    return 0;
}

void see(const std::vector<int>& x){
    std::cout << std::endl;
    std::cout << std::endl;
    for(size_t i {0}; i < x.size();++i){
        std::cout << "index " << i + 1 << " : " << x[i] << std::endl;

    }
    std::cout << std::endl;
    std::cout << std::endl;
}

void sum(const std::vector<int>& x){
    int sum1 {0};
    for(size_t i {0}; i < x.size();++i){
         sum1 += x[i];
        
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "sum : " << sum1 << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
}

void minus_sum(const std::vector<int>& x, const std::vector<int> y){
    int sum1 {0};
    int sum2 {0};
    for(size_t i {0}; i < x.size();++i){
        sum1 += x[i];
    }
    for(size_t i {0}; i < y.size();++i){
        sum2 += y[i];
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "minus_sum : " << sum1 - sum2 << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
}

void plus_sum(const std::vector<int>& x, const std::vector<int> y){
    int sum1 {0};
    int sum2 {0};
    for(size_t i {0}; i < x.size();++i){
        sum1 += x[i];
    }
    for(size_t i {0}; i < y.size();++i){
        sum2 += y[i];
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "plus_sum : " << sum1 + sum2 << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
}

void average(const std::vector<int>& x){
    int sum {0};
    for(size_t i {0}; i < x.size();++i){
        sum += x[i];
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "average : " << sum/x.size() << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
}

void sum_of_numbers(const std::vector<int>& x, const std::vector<int>& y){
    std::vector<int> sum_number;
    int sum {0};
    if(x.size() != y.size()){
        std::cout << "error : different sizes of array" << std::endl;
        return;
    }
    
    for(size_t i {0}; i < x.size();++i){
        sum = x[i] + y[i];
        sum_number.push_back(sum);
    }
    std::cout << std::endl;
    std::cout << std::endl;
    for(size_t i {0}; i < sum_number.size();++i){
        std::cout << "index " << i + 1 << " : " << sum_number[i] << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
}

void minus_of_numbers(const std::vector<int>& x, const std::vector<int>& y){
    std::vector<int> minus_number;
    int minus {0};
    if(x.size() != y.size()){
        std::cout << "error : different sizes of array" << std::endl;
        return;
    }
    for(size_t i {0}; i < x.size();++i){
        minus = x[i]- y[i];
        minus_number.push_back(minus);
    }
    std::cout << std::endl;
    std::cout << std::endl;
    for(size_t i (0); i < minus_number.size();++i){
        std::cout << "index " << i + 1 << " : " << minus_number[i] << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
}

void add(std::vector<int>& x, int y){
    x.push_back(y);
}

void erase(std::vector<int>& x, int y){
    auto z = std::find(x.begin(),x.end(),y);
    if(z != x.end()){
        x.erase(z);
    }else{
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "Invalid number" << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
    }
}

void brand_new_array(std::vector<int>& x){
    x.clear();
    int input1;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Type the content of the new array/ 0 to finish" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    while(std::cin >> input1 && input1 != 0){
        x.push_back(input1);
    }
    
}
