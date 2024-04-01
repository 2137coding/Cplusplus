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
    int cash1 = 100;
    int cash2 = 100;
    int wpłata1;
    int wpłata2;
    int result1;
    int result2;
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
    int check [10];
    while(cash1 > 0 && cash2 > 0){
    std::cout << "Krupier rozdaje karty" << std::endl;
    std::cout << "Twoje karty : " << std::endl;
    one = rand() % 52;
    check[0] = one;
    two = rand() % 52;
    while(two == check[0]){
        two = rand() % 52;
    }
    check[1] = two;
    three = rand() % 52;
    while(three == check[0] || three == check[1]){
        three = rand() % 52;
    }
    check[2] = three;
    four = rand() % 52;
     while(four == check[0] || four == check[1] || four == check[2]){
        four = rand() % 52;
    }
    check[3] = four;
    five = rand() % 52;
    while(five == check[0] || five == check[1] || five == check[2] || five == check[3]){
        five = rand() % 52;
        std::cout << five << std::endl;
    }
    check[4] = five;
    one2 = rand() % 52;
     while(one2 == check[0] || one2 == check[1] || one2 == check[2] || one2 == check[3] || one2 == check[4]){
        one2 = rand() % 52;
    }
    check[5] = one2;
    two2 = rand() % 52;
     while(two2 == check[0] || two2 == check[1] || two2 == check[2] || two2 == check[3] || two2 == check[4] || two2 == check[5]){
        two2 = rand() % 52;
    }
    check[6] = two2;
    three2 = rand() % 52;
     while(three2 == check[0] || three2 == check[1] || three2 == check[2] || three2 == check[3] || three2 == check[4] || three2 == check[5] || three2 == check[6]){
        three2 = rand() % 52;
    }
    check[7] = three2;
    four2 = rand() % 52;
     while(four2 == check[0] || four2 == check[1] || four2 == check[2] || four2 == check[3] || four2 == check[4] || four2 == check[5] || four2 == check[6] || four2 == check[7]){
        four2 = rand() % 52;
    }
    check[8] = four2;
    five2 = rand() % 52;
     while(five2 == check[0] || five2 == check[1] || five2 == check[2] || five2 == check[3] || five2 == check[4] || five2 == check[5] || five2 == check[6] || five2 == check[7] || five2 == check[8]){
        five2 = rand() % 52;
    }
    check[9] = five2;
    
   

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
    std::cout << "Wpłaty: Zdecyduj ile wpłacisz ty i przeciwnik" << std::endl;
    std::cout << "Twoje saldo to " << cash1 << std::endl;
    std::cin >> wpłata1;
    cash1 -= wpłata1;
    cash2 -= wpłata1;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Wymiana kart: Wpisz numery kart chcesz wymienić aby zakończyć wymianę wpisz 0" << std::endl;
    while(std::cin >> trade1 && trade1 != 0){
        trade.push_back(trade1);
    }
    for(size_t i {0}; i < trade.size();++i){
    switch(trade[i]){
        case 1: {
            one = rand() % 52;
            cards(one);
        }
        break;

        case 2: {
            two = rand() % 52;
            cards(two);
        }
        break;

        case 3: {
            three = rand() % 52;
            cards(three);
        }
        break;

        case 4: {
            four = rand() % 52;
            cards(four);
        }
        break;

        case 5: {
            five = rand() % 52;
            cards(five);
        }
        break;

        default: {
            std::cout << "Invalid number" << std::endl;
        }
    }
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Wpłaty: Zdecyduj ile wpłacisz ty i przeciwnik" << std::endl;
    std::cout << "Twoje saldo to " << cash1 << std::endl;
    std::cin >> wpłata2;
    cash1 -=  wpłata2;
    cash2 -= wpłata2;
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
    result1 = cards_review(P_1cards);
    result2 = cards_review(P_2cards);
    std::cout << std::endl;
    std::cout << std::endl;
   if(result1 > result2){
     std::cout << "Wygrałes" << result1 << std::endl;
     cash1 = cash1 + wpłata1 + wpłata1 + wpłata2 + wpłata2;
    }else if(result1 == result2){
        std::cout << "remis " << result1 << std::endl;
        cash1 = cash1 + wpłata1 + wpłata2;
        cash2 = cash2 + wpłata1 + wpłata2;
        
    }else{
     std::cout << "przeciwnik wygrał" << result2 << ": ty " << result1 << std::endl;
     cash2  = cash2 + wpłata1 + wpłata1 + wpłata2 + wpłata2;
    }
    trade.clear();
    }
    if(cash1 < 0){
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "jesteś spłukany" << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
    }else{
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "przeciwnik sie poddał, bo zabrakło mu pieniędzy" << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
    }
    std::cout << "Type something to close porogram" << std::endl;
    int og;
    std::cin >> og;
    
    




    return 0;
}

int chance(){
    return rand() % 52;
}

int cards_review(const std::vector<int>& x){
    std::vector<int> value (13,0);
    std::vector<int> rank {12,11,10,9,8,7,6,5,4,3,2,1,0};
    for(int card : x){
        value[card % 13]++;
    }
    const int poker = 100000;
    const int caret = 10000;
    const int full = 9000;
    const int color = 8000;
    const int street = 7000;
    const int three_cards = 6000;
    const int two_pairs = 5000;
    const int two_cards = 4000;
    const int card = 3000;
    bool kareta {false};
    bool para {false};
    bool trójka {false};
    bool kolor {false};
    bool strit {false};
    bool naj_karta {false};
    bool dwie_pary {false};
    bool wyskarta {false};
    int two_pair {0};
    int sequence {0};
    int single_card {0};

     for(size_t i {0}; i < value.size();++i){
        if(value[i] == 2){
            para = true;
            single_card = rank[i];
        }
        if(value[i] == 3){
            trójka = true;
            single_card = rank[i];
        }
         if(value[i] == 4){
            kareta = true;
            single_card = rank[i];
        }

    }
    

    for(size_t i {0}; i < value.size();++i){
        if(value[i] == 2){
            ++two_pair;
        }
        if(two_pair == 2){
            dwie_pary = true;
            break;
        }
    }
    
    
   for(size_t i {0}; i < value.size();++i){
        if(value[i] > 0){
         wyskarta = true;
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
        if(value[i] > 0){
            ++sequence;
        }else{
            sequence = 0;
        }
        if(sequence == 5){
            strit = true;
        }
    }

    if(strit && kolor){
         for(size_t i {0}; i < value.size();++i){
       if(value[i] > 0){
        single_card = rank[i];
        break;
       }
        }
        return poker + single_card;
    }else if(kareta){
        return caret + single_card;
    }else if(trójka && para){
        return full + single_card;
    }else if(kolor){
        for(size_t i {0}; i < value.size();++i){
       if(value[i] > 0){
        single_card = rank[i];
        break;
       }
   }
        return color + single_card;
    }else if(strit){
        for(size_t i {0}; i < value.size();++i){
       if(value[i] > 0){
        single_card = rank[i];
        break;
       }
        }
        return street +single_card;
    }else if(trójka){
        return three_cards + single_card;
    }else if(dwie_pary){
        for(size_t i {0}; i < value.size();++i){
       if(value[i] > 0 && value[i] == 2){
        single_card = rank[i];
        break;
       }
        }
        
    return two_pairs + single_card;

    }else if(para){
        return two_cards + single_card;
    }else if(wyskarta){
        for(size_t i {0}; i < value.size();++i){
       if(value[i] > 0){
        single_card = rank[i];
        break;
       }
   }return card + single_card;
    }
    return 0;
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
