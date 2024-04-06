#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

template <typename T> void see(const std::vector<T>& x);
template <typename T> void sum(const std::vector<T>& x);
template <typename T> void minus_sum(const std::vector<T>& x, const std::vector<T>& y);
template <typename T> void plus_sum(const std::vector<T>& x, const std::vector<T>& y);
template <typename T> void average(const std::vector<T>& x);
template <typename T> void sum_of_numbers(const std::vector<T>& x, const std::vector<T>& y);
template <typename T> void minus_of_numbers(const std::vector<T>& x, const std::vector<T>& y);
template <typename T>void add(std::vector<T>& x,T y);
template <typename T> void erase(std::vector<T>& x,T y);
template <typename T> void brand_new_array(std::vector<T>& x);







int main(){
    std::vector<double> array0;
    std::vector<double> array01;
    std::vector<int> array;
    std::vector<int> array1;
    std::string a;
    int input;
    double input2;
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
    std::cout << "change_to_double - change array to double and type it to do all of this operation above" << std::endl;
    std::cout << "change_to_int - to come back to intager numbers array" << std::endl;
    std::cout << "end - to end program" << std::endl;

    while(std::cin >> a && a != "end"){
        if(a != "change_to_double"){
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
        array1.clear();

    }else if(a == "minus_two"){
        std::cout << "Write 2 array to stop write 0" << std::endl;
        while(std::cin >> input && input != 0){
            array1.push_back(input);
        }
        minus_sum(array,array1);
        array1.clear();
    }else if(a == "sum_of_numbers"){
        std::cout << "write 2 array to stop write 0" << std::endl;
        while(std::cin >> input && input != 0){
            array1.push_back(input);
        }
        sum_of_numbers(array,array1);
        array1.clear();
    }else if(a == "minus_of_numbers"){
        std::cout << "write 2 array to stop write 0" << std::endl;
        while(std::cin >> input && input != 0){
            array1.push_back(input);
        }
        minus_of_numbers(array,array1);
        array1.clear();
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
        }else{
        std::cout << "enter the set of numbers you want to operate on to stop write 0" << std::endl;
        while(std::cin >> input2 && input2 != 0){
            array0.push_back(input2);
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
     std::cout << "change_to_double - change array to double and type it to do all of this operation above" << std::endl;
    std::cout << "change_to_int - to come back to intager numbers array" << std::endl;
        while(std::cin >> a && a != "change_to_int"){
    if(a == "average"){
         average(array0);
    }else if(a == "sum"){
        sum(array0);
    }else if(a == "see"){
        see(array0);
    }else if(a == "sum_two"){
        std::cout << "Write 2 array to stop write 0" << std::endl;
        while(std::cin >> input2 && input2 != 0){
            array01.push_back(input2);
        }
        plus_sum(array0,array01);
        array01.clear();

    }else if(a == "minus_two"){
        std::cout << "Write 2 array to stop write 0" << std::endl;
        while(std::cin >> input2 && input2 != 0){
            array01.push_back(input2);
        }
        minus_sum(array0,array01);
        array01.clear();
    }else if(a == "sum_of_numbers"){
        std::cout << "write 2 array to stop write 0" << std::endl;
        while(std::cin >> input2 && input2 != 0){
            array01.push_back(input2);
        }
        sum_of_numbers(array0,array01);
        array1.clear();
    }else if(a == "minus_of_numbers"){
        std::cout << "write 2 array to stop write 0" << std::endl;
        while(std::cin >> input2 && input2 != 0){
            array01.push_back(input2);
        }
        minus_of_numbers(array0,array01);
        array01.clear();
    }else if(a == "add"){
        std::cout << "Type number to add" << std::endl;
        std::cin >> input2;
        add(array0,input2);
    }else if(a == "erase"){
        std::cout << "type number to remove" << std::endl;
        std::cin >> input2;
        erase(array0,input2);

    }else if(a == "brand_new_array"){
        brand_new_array(array0);

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
     std::cout << "change_to_double - change array to double and type it to do all of this operation above" << std::endl;
    std::cout << "change_to_int - to come back to intager numbers array" << std::endl;
    
        }
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
     std::cout << "change_to_double - change array to double and type it to do all of this operation above" << std::endl;
    std::cout << "change_to_int - to come back to intager numbers array" << std::endl;
    std::cout << "end - to end program" << std::endl;
    }
    
    return 0;
}

template <typename T> void see(const std::vector<T>& x){
    std::cout << std::endl;
    std::cout << std::endl;
    for(size_t i {0}; i < x.size();++i){
        std::cout << "index " << i + 1 << " : " << x[i] << std::endl;

    }
    std::cout << std::endl;
    std::cout << std::endl;
}

template <typename T> void sum(const std::vector<T>& x){
    T sum1 {0};
    for(size_t i {0}; i < x.size();++i){
         sum1 += x[i];
        
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "sum : " << sum1 << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
}

template <typename T> void minus_sum(const std::vector<T>& x, const std::vector<T>& y){
    T sum1 {0};
    T sum2 {0};
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

template <typename T> void plus_sum(const std::vector<T>& x, const std::vector<T>& y){
    T sum1 {0};
    T sum2 {0};
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

template <typename T> void average(const std::vector<T>& x){
    T sum {0};
    for(size_t i {0}; i < x.size();++i){
        sum += x[i];
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "average : " << sum/x.size() << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
}

template <typename T> void sum_of_numbers(const std::vector<T>& x, const std::vector<T>& y){
    std::vector<T> sum_number;
    T sum {0};
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
    sum_number.clear();
    std::cout << std::endl;
    std::cout << std::endl;
}

template <typename T> void minus_of_numbers(const std::vector<T>& x, const std::vector<T>& y){
    std::vector<T> minus_number;
    T minus {0};
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
    minus_number.clear();
    std::cout << std::endl;
    std::cout << std::endl;
}

template <typename T> void add(std::vector<T>& x, T y){
    x.push_back(y);
}

template <typename T> void erase(std::vector<T>& x, T y){
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

template <typename T> void brand_new_array(std::vector<T>& x){
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

