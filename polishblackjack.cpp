#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

template <typename T> void cards(T a);
template <typename T> int review(T& a,std::vector<int>& cards);
void cardint(std::vector<int> x, std::vector<int>& y);
void clear(std::vector<int>& x);
std::vector<int> number_cards {0,0,0,0,0,0,0,0,0,0,0,0,0};
std::vector<int> AI_number_cards {0,0,0,0,0,0,0,0,0,0,0,0,0};


class enemy{
    public:
        enemy() = default;
        ~enemy(){
            delete number;
            number = nullptr;
            delete AI_number;
            AI_number = nullptr;
            delete y;
            y = nullptr;
            delete x;
            x = nullptr;
            delete score;
            score = nullptr;
            delete AI_review;
            AI_review = nullptr;
        }


        void numbers(std::vector<int>& x){
            for(size_t i {0}; i < x.size();++i){
                if(x[i] > 0){
                (*number)++;
                }
            }
        }

        void AI_numbers(std::vector<int> x){
            for(size_t i; i < x.size();++i){
                if(x[i] > 0){
                (*AI_number)++;
                }
            }
        }

        void clean(){
            AI_number_cards.clear();
            for(size_t i {0}; i < 13;++i){
                AI_number_cards.push_back(0);
                *AI_number = 0;
        }

}

        void en_review(std::vector<int> encards){
            *AI_review = review(encards,AI_number_cards);
            /*AI_number_cards.clear();
            for(size_t i {0}; i < 13;++i){
                AI_number_cards.push_back(0);
            } 
            */
        }

        bool exchange(){
            if(*number <= 2 && *AI_number < 2){
                *score = *x * *y;
                if(*score > 0.049){
                        return true;
                }else{
                    return false;
                }

            }else if(*number > 2 && *AI_number < 2){
                *score = *x * *y;
                if(*score > 0.020){
                    return true;
                }else{
                    return false;
                }
            }else if(*number > 2 && *AI_number >= 2 && *AI_number < 4){
                    *score = *x * *y * *AI_review;
                    if(*score < 20){
                        *score = *x * *y;
                        if(*score > 1.096){
                            return true;
                        }else{
                            return false;
                        }
                    }else if(*score < 60){
                        *score = *x * *y;
                        if(*score > 2.80){
                            return true;
                        }else{
                            return false;
                        }
                    }else if(*score < 90){
                        *score = *x * *y;
                        if(*score > 3.99){
                            return true;
                        }else{
                            return false;
                        }
                    }else if(*score < 100){
                        *score = *x * *y;
                        if(*score > 4.54){
                            return true;
                        }else{
                            return false;
                        }
                    }else if(*score > 100 ){
                        *score = *x * *y;
                        if(*score > 7.32){
                            return true;
                        }else{
                            return false;
                        }
                    }

            }else if(*number > 2 && *AI_number >= 4){
                *score = *x * *y * *AI_review;
                if(*score < 100){
                    *score = *x * *y;
                    if(*score > 8.00){
                        return true;
                    }else{
                        return false;
                    }
                }
                else if(*score < 150){
                    *score = *x * *y;
                    if(*score > 9.00){
                        return true;
                    }else{
                        return false;
                    }
                }
                else if(*score < 150){
                    *score = *x * *y;
                    if(*score > 9.87){
                        return true;
                    }else{
                        false;
                    }
                }
            }else if(*number <= 2 && *AI_number >= 2){
                *score = *x * *y * *AI_review;
                if(*score < 15){
                    *score = *x * *y;
                    if(*score > 3.85){
                        return true;
                    }else{
                        return false;
                    }
                }else if(*score < 50){
                    *score = *x * *y;
                    if(*score > 5.67){
                        return true;
                    }else{
                        return false;
                    }
                }else if(*score > 50){
                    *score = *x * *y;
                    if(*score > 9.93){
                        return true;
                    }else{
                        return false;
                    }
                }
            }
            
        }



    private:
    int* number = new int {0};
    int* AI_number = new int {0};
    int* y = new int {rand() % 1000};
    float* x  = new float {0.01};
    float* score = new float {0};
    int* AI_review = new int {0};
    
};


int main(){
    srand(static_cast<int>(time(0)));
    enemy AI;
    std::vector<int> mycards;
    std::vector<int> en_cards;
    std::string word;
    bool AI_status {true};
    int scoremy;
    int AI_scoremy;
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
    int check [10];
      one = rand() % 52;
    check[0] = one;
    cards(one);
    mycards.push_back(one);
    std::cout << "Type + to get another card or - to stop" << std::endl;
    std::cin >> word;
    if(word == "+"){
        two = rand() % 52;
        while(two == check[0]){
            two = rand() % 52;
        }
        cards(two);
        mycards.push_back(two);
        check[1] = two;
        std::cout << "Type + to get another card or - to stop" << std::endl;
        std::cin >> word;
        if(word == "+"){
            three = rand() % 52;
            while(three == check[0] || three == check[1]){
                three = rand() % 52;
            }
            cards(three);
            mycards.push_back(three);
            check[2] = three;
            std::cout << "Type + to get another card or - to stop" << std::endl;
            std::cin >> word;
            if(word == "+"){
                four = rand() % 52;
                while(four == check[0] || four == check[1] || four == check[2]){
                    four = rand() % 52;
                }
                cards(four);
                mycards.push_back(four);
                check[3] = four;
                std::cout << "Type + to get another card or - to stop" << std::endl;
                std::cin >> word;
                if(word == "+"){
                    five = rand() % 52;
                    while(five == check[0] || five == check[1] || five == check[2] || five == check[3]){
                        five = rand() % 52;
                    }
                    check[4] = five;
                    cards(five);
                    mycards.push_back(five);
                }
            }
        }
    }
    scoremy = review(mycards,number_cards);
    std::cout << "==================================================" << std::endl;
    //another player plays
    AI.numbers(number_cards);  // one time ussage
    AI.en_review(en_cards);  //AI_number = x
    AI.AI_numbers(AI_number_cards); //AI_number = x
    AI.clean(); //AI_number = 0
    if(AI_status == true){
        one2 = rand() % 52;
        
        while(one2 == check[0] || one2 == check[1] || one2 == check[2] || one2 == check[3] || one2 == check[4]){
        one2 = rand() % 52;
    }
        check[5] = one2;
        cards(one2);
        en_cards.push_back(one2);
        AI.en_review(en_cards);  //AI_number = x
        AI.AI_numbers(AI_number_cards); //AI_number = x
        AI_status = AI.exchange();
        AI.clean(); //AI_number = 0

            if(AI_status == true){
                two2 = rand() % 52;
                while(two2 == check[0] || two2 == check[1] || two2 == check[2] || two2 == check[3] || two2 == check[4] || two2 == check[5]){
                    two2 = rand() % 52;
                }
                check[6] = two2;
                cards(two2);
                en_cards.push_back(two2);
                AI.en_review(en_cards);  //AI_number = x
                AI.AI_numbers(AI_number_cards); //AI_number = x
                AI_status = AI.exchange();
                AI.clean(); //AI_number = 0
                if(AI_status == true){
                    three2 = rand() % 52;
                    while(three2 == check[0] || three2 == check[1] || three2 == check[2] || three2 == check[3] || three2 == check[4] || three2 == check[5] || three2 == check[6]){
                        three2 = rand() % 52;
                    }
                    check[7] = three2;
                    cards(three2);
                    en_cards.push_back(three2);
                    AI.en_review(en_cards);  //AI_number = x
                    AI.AI_numbers(AI_number_cards); //AI_number = x
                    AI_status = AI.exchange();
                    AI.clean(); //AI_number = 0
                     if(AI_status == true){
                            four2 = rand() % 52;
                            while(four2 == check[0] || four2 == check[1] || four2 == check[2] || four2 == check[3] || four2 == check[4] || four2 == check[5] || four2 == check[6] || four2 == check[7]){
                                four2 = rand() % 52;
                            }
                            check[8] = four2;
                            cards(four2);
                            en_cards.push_back(four2);
                            AI.en_review(en_cards);  //AI_number = x
                            AI.AI_numbers(AI_number_cards); //AI_number = x
                            AI_status = AI.exchange();
                            AI.clean(); //AI_number = 0
                            five2 = rand() % 52;
                            while(five2 == check[0] || five2 == check[1] || five2 == check[2] || five2 == check[3] || five2 == check[4] || five2 == check[5] || five2 == check[6] || five2 == check[7] || five2 == check[8]){
                                five2 = rand() % 52;
                        }
                            check[9] = five2;
                            cards(five2);
                            en_cards.push_back(five2);
                     }
            }
            }
    }
         std::cout << "==================================================" << std::endl;

        //scoremy = review(mycards,number_cards);
        AI_scoremy = review(en_cards,AI_number_cards);
        if((scoremy > AI_scoremy) && scoremy <= 21){
            std::cout << "You win" << std::endl;
        }else if(AI_scoremy > scoremy && AI_scoremy <= 21){
            std::cout << "enemy wins" << std::endl;
        }
        std::cout << "you :" << scoremy << " :: AI " << AI_scoremy;

        

    return 0; 
}

template <typename T> int review(T& a,std::vector<int>& cards){
    std::vector<int> ranks {11,4,3,2,10,9,8,7,6,5,4,3,2};
    //std::vector<int> number_cards {0,0,0,0,0,0,0,0,0};
    std::vector<int> score;
    int score1 {0};
    for(size_t i {0};i < a.size();++i){
        cards[a[i] % 13]++;
        
    }
    
    for(size_t i {0}; i < cards.size();++i){
        if(cards[i] != 0 && cards[i] < 2){
            score.push_back(ranks[i]);

        }else if(cards[i] != 0 && cards[i] == 2){
            score.push_back(ranks[i]);
            score.push_back(ranks[i]);
        }
        else if(cards[i] != 0 && cards[i] == 3){
            score.push_back(ranks[i]);
            score.push_back(ranks[i]);
            score.push_back(ranks[i]);
        }else if(cards[i] != 0 && cards[i] == 4){
            score.push_back(ranks[i]);
            score.push_back(ranks[i]);
            score.push_back(ranks[i]);
            score.push_back(ranks[i]);
        }
    }
    
    for(int x : score){
        score1 += x;
    }
    return score1;
}


/*
void cardint(std::vector<int> x, std::vector<int>& y){
   for(size_t i {0}; i < x.size(); ++i){
        y[x[i] % 13]++;
   }

}
*/

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
