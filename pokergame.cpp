#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

 std::vector<int> trade;

int chance();
template <typename T> void cards(T a);

int cards_review(const std::vector<int>& x);

int main(){
    srand(static_cast<int>(time(0)));
    int one;
    int two;
    int three;
    int four;
    int five;
    int one2;
    int two2;
    int three2;
    int four2;
    int five2;
    int trade1;
    std::cout << "Krupier rozdaje karty" << std::endl;
    std::cout << "Twoje karty : " << std::endl;
    one = rand() % 52;
    two = rand() % 52;
    three = rand() % 52;
    four = rand() % 52;
    five = rand() % 52;
    one2 = rand() % 52;
    two2 = rand() % 52;
    three2 = rand() % 52;
    four2 = rand() % 52;
    five2 = rand() % 52;
    std::cout << "1 : ";
    cards(one);
    std::cout << "2 : ";
    cards(two);
    std::cout << "3 : ";
    cards(three);
    std::cout << "4 : ";
    cards(four);
    std::cout << "5 : ";
    cards(five);
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Wymiana kart: Wpisz numery kart chcesz wymienić aby zakończyć wymianę wpisz 0" << std::endl;
    while(std::cin >> trade1 && trade1 != 0){
        trade.push_back(trade1);
    }
    if(trade[0] == 1){
        one = rand() % 52;
        cards(one);
    }
    if(trade[1] == 2){
        two = rand() % 52;
        cards(two);
    }
    if(trade[2] == 3){
        three = rand() % 52;
        cards(three);
    }
    if(trade[3] == 4){
        four = rand() % 52;
        cards(four);
    }
    if(trade[4] == 5){
        five = rand() % 52;
        cards(five);
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Pokazanie kart(showdown): " << std::endl;
    std::cout << std::endl;
    std::cout << "=====================================" << std::endl;
    std::cout << "Twoje karty: " << std::endl;
     std::cout << "1 : ";
    cards(one);
     std::cout << "2 : ";
    cards(two);
     std::cout << "3 : ";
    cards(three);
     std::cout << "4 : ";
    cards(four);
     std::cout << "5 : ";
    cards(five);
    std::cout << "=====================================" << std::endl;
    std::cout << "=====================================" << std::endl;
    std::cout << std::endl;
    std::cout << "Karty przeciwnika: " << std::endl;
     std::cout << "1 : ";
    cards(one2);
     std::cout << "2 : ";
    cards(two2);
     std::cout << "3 : ";
    cards(three2);
     std::cout << "4 : ";
    cards(four2);
     std::cout << "5 : ";
    cards(five2);
    std::cout << "=====================================" << std::endl;
    std::vector<int> P_1cards {one,two,three,four,five};
    std::vector<int> P_2cards {one2,two2,three2,four2,five2};
    
    
    



    return 0;
}

int chance(){
    return rand() % 52;
}

int cards_review(const std::vector<int>& x){
    std::vector<int> value (13,0);
    for(int card : x){
        value[card % 13]++;
    }
    const int poker = 100;
    const int caret = 95;
    const int full = 90;
    const int color = 80;
    const int street = 70;
    const int three_cards = 60;
    const int two_pairs = 55;
    const int two_cards = 50;
    bool kareta;
    bool para;
    bool trójka;
    bool kolor;
    bool strit;
    bool naj_karta;
    bool dwie_pary;
    int two_pair {1};
    int sequence {0};

    for(size_t i {0}; i < value.size();++i){
        if(value[i] == 2){
            para = true;
        }
    }
    for(size_t i {0}; i < value.size();++i){
        if(value[i] == 3){
            trójka = true;
        }
    }

    for(size_t i {0}; i < value.size();++i){
        if(value[i] = 4){
            kareta = true;
        }
    }

    for(size_t i {0}; i < value.size();++i){
        if(value[i] == 2 && value[i + two_pair] == 2){
            dwie_pary = true;
        }
    }

    std::vector<int> kolory (4,0);
    for(int card : x){
        kolory[card/13]++;
        if(kolory[card/13] < 5){
            kolor = false;
        }else{
            kolor = true;
        }
    }

    for(size_t i {0}; i < value.size();++i){
        if(2 < value[i] > 0){
            ++sequence;
        }else{
            sequence = 0;
        }
        if(sequence = 5){
            strit = true;
        }
    }

    if(strit && kolor){
        return poker;
    }else if(kareta){
        return caret;
    }else if(trójka && para){
        return full;
    }else if(kolor){
        return color;
    }else if(strit){
        return street;
    }else if(trójka){
        return three_cards;
    }else if(dwie_pary){
     return two_pairs
    }else if(para){
        return two_cards;
    }
}

template <typename T> void cards(T a){
    switch(a){
        case 0:{
            std::cout << "As karo" << std::endl;
        }
        break;

        case 1:{
            std::cout << "Król karo" << std::endl;
        }
        break;

        case 2:{
            std::cout << "Dama karo" << std::endl;
        }
        break;

        case 3:{
            std::cout << "Walet karo" << std::endl;
        }
        break;

        case 4:{
            std::cout << "Dziesiątka karo" << std::endl;
        }
        break;

        case 5:{
            std::cout << "Dziewiątka karo" << std::endl;
        }
        break;

        case 6:{
            std::cout << "Ósemka karo" << std::endl;
        }
        break;

        case 7:{
            std::cout << "Siódemka karo" << std::endl;
        }
        break;

        case 8:{
            std::cout << "Szóstka karo" << std::endl;
        }
        break;

        case 9:{
            std::cout << "Piątka karo" << std::endl;
        }
        break;

        case 10:{
            std::cout << "Czwórka karo" << std::endl;
        }
        break;

        case 11:{
            std::cout << "Trójka karo" << std::endl;
        }
        break;

        case 12:{
            std::cout << "Dwójka karo" << std::endl;
        }
        break;

        case 13:{
            std::cout << "As kier" << std::endl;
        }
        break;

        case 14:{
            std::cout << "Król kier" << std::endl;
        }
        break;

        case 15:{
            std::cout << "Dama kier" << std::endl;
        }
        break;

        case 16:{
            std::cout << "Walet kier" << std::endl;
        }
        break;

        case 17:{
            std::cout << "Dziesiątka kier" << std::endl;
        }
        break;

        case 18:{
            std::cout << "Dziewiątka kier" << std::endl;
        }
        break;

        case 19:{
            std::cout << "Ósemka kier" << std::endl;
        }
        break;

        case 20:{
            std::cout << "Siódemka kier" << std::endl;
        }
        break;

        case 21:{
            std::cout << "Szóstka kier" << std::endl;
        }
        break;

        case 22:{
            std::cout << "Piątka kier" << std::endl;
        }
        break;

        case 23:{
            std::cout << "Czwórka kier" << std::endl;
        }
        break;

        case 24:{
            std::cout << "Trójka kier" << std::endl;
        }
        break;

        case 25:{
            std::cout << "Dwójka kier" << std::endl;
        }
        break;

        case 26:{
            std::cout << "As pik" << std::endl;
        }
        break;


        case 27:{
            std::cout << "Król pik" << std::endl;
        }
        break;

        case 28:{
            std::cout << "Dama pik" << std::endl;
        }
        break;

        case 29:{
            std::cout << "Walet pik" << std::endl;
        }
        break;

        case 30:{
            std::cout << "Dziesiątka pik" << std::endl;
        }
        break;

        case 31:{
            std::cout << "Dziewiątka pik" << std::endl;
        }
        break;

        case 32:{
            std::cout << "Ósemka pik" << std::endl;
        }
        break;

        case 33:{
            std::cout << "Siódemka pik" << std::endl;
        }
        break;

        case 34:{
            std::cout << "Szóstka pik" << std::endl;
        }
        break;

        case 35:{
            std::cout << "Piątka pik" << std::endl;
        }
        break;

        case 36:{
            std::cout << "Czwórka pik" << std::endl;
        }
        break;

        case 37:{
            std::cout << "Trójka pik" << std::endl;
        }
        break;

        case 38:{
            std::cout << "Dwójka pik" << std::endl;
        }
        break;

        case 39:{
            std::cout << "As trefl" << std::endl;
        }
        break;

        case 40:{
            std::cout << "Król trefl" << std::endl;
        }
        break;

        case 41:{
            std::cout << "Dama trefl" << std::endl;
        }
        break;

        case 42:{
            std::cout << "Walet trefl" << std::endl;
        }
        break;

        case 43:{
            std::cout << "Dziesiątka trefl" << std::endl;
        }
        break;

        case 44:{
            std::cout << "Dziewiątka trefl" << std::endl;
        }
        break;

        case 45:{
            std::cout << "Ósemka trefl" << std::endl;
        }
        break;

        case 46:{
            std::cout << "Siódemka trefl" << std::endl;
        }
        break;

        case 47:{
            std::cout << "Szóstka trefl" << std::endl;
        }
        break;

        case 48:{
            std::cout << "Piątka trefl" << std::endl;
        }
        break;

        case 49:{
            std::cout << "Czwórka trefl" << std::endl;
        }
        break;

        case 50:{
            std::cout << "Trójka trefl" << std::endl;
        }
        break;

        case 51:{
            std::cout << "Dwójka trefl" << std::endl;
        }
        break;

    }
}

