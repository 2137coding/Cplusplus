#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

template <typename T> void cards(T a);
template <typename T> int review(T& a,std::vector<int>& cards);
void cardint(std::vector<int> x, std::vector<int>& y);
void clear_my_number(std::vector<int>& x);
int is_Ace(std::vector<int>& cards);
std::vector<int> number_cards {0,0,0,0,0,0,0,0,0,0,0,0,0};
std::vector<int> AI_number_cards {0,0,0,0,0,0,0,0,0,0,0,0,0};
/*
class enemy {
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
                }else if(x[i] > 1){
                    (*number)++;
                }else if(x[i] > 2){
                    (*number)++;
                }else if(x[i] > 3){
                    (*number)++;
                }
            }
        }

        void AI_numbers(std::vector<int> x){
            for(size_t i; i < x.size();++i){
                if(x[i] > 0){
                (*AI_number)++;
                }else if(x[i] > 1){
                    (*AI_number)++;
                }else if(x[i] > 2){
                    (*AI_number)++;
                }else if(x[i] > 3){
                    (*AI_number)++;
                }
            }
        }

        void clean(){
            AI_number_cards.clear();
            for(size_t i {0}; i < 13;++i){
                AI_number_cards.push_back(0);
            }
        *AI_number = 0;

        }

        void en_review(std::vector<int> encards){
            *AI_review = review(encards,AI_number_cards);
           
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
                        if(*score > 6.54){
                            return true;
                        }else{
                            return false;
                        }
                    }else if(*score > 100 ){
                        *score = *x * *y;
                        if(*score > 9.32){
                            return true;
                        }else{
                            return false;
                        }
                        //add more high points to stop very high cards
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
            }else if(*number < 2 && *AI_number >= 2){
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
            }else if(*number = 2 && *AI_number >= 2){
                *score = *x * *y * *AI_review;
                if(*score < 60){
                    *score = *x * *y;
                    if(*score > 3.85){
                        return true;
                    }else{
                        return false;
                    }
                }else if(*score < 88){
                    *score = *x * *y;
                    if(*score > 5.67){
                        return true;
                    }else{
                        return false;
                    }
                }else if(*score > 88){
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
*/



class enemy {
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
                }else if(x[i] > 1){
                    (*number)++;
                }else if(x[i] > 2){
                    (*number)++;
                }else if(x[i] > 3){
                    (*number)++;
                }
            }
        }

        void AI_numbers(std::vector<int> x){
            for(size_t i; i < x.size();++i){
                if(x[i] > 0){
                (*AI_number)++;
                }else if(x[i] > 1){
                    (*AI_number)++;
                }else if(x[i] > 2){
                    (*AI_number)++;
                }else if(x[i] > 3){
                    (*AI_number)++;
                }
            }
        }

        void clean(){
            AI_number_cards.clear();
            for(size_t i {0}; i < 13;++i){
                AI_number_cards.push_back(0);
            }
        *AI_number = 0;

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
                return true;
            }else if(*number > 2 && *AI_number < 2){
                return true;
            }else if(*number >= 2 && *AI_number >= 2){
                    /*
                    9 and 10 is impossible to get more than 21,
                     in 11 only if AI gets ace(11) it fails,
                      in 12 if AI gets 11 or 10 it fails
                      in 13 if AI gets 11,10 or 9 it fails
                      in 14 if AI gets 11,10,9,8 it fails
                      in 15 if Ai gets 11,10,9,8,7 it fails
                      in 16 if AI gets 11,10,9,8,7,6 it fails
                      in 17 if AI get 11,10,9,8,7,6,5 it fails
                      in 18 if AI get 11,10,9,8,7,6,5,4 it fails
                      in 19 if AI get 11,10,9,8,7,6,5,4,3 it fails
                    */
                    if(*AI_review <= 9){
                        return true;
                    }else if(*AI_review == 10){
                        return true;
                    }else if(*AI_review == 11){
                        *score = *x * *y;
                        if(*score > 0.10){
                            return true;
                        }else{
                            return false;
                        }
                    }else if(*AI_review == 12){
                        *score = *x * *y;
                        if(*score > 1.00){
                            return true;
                        }else{
                            return false;
                        }
                    }else if(*AI_review == 13){
                        *score = *x * *y;
                        if(*score > 2.00){
                            return true;
                        }else{
                            return false;
                        }
                    }else if(*AI_review == 14){
                        *score = *x * *y;
                        if(*score > 4.00){
                            return true;
                        }else{
                            return false;
                        }
                    }else if(*AI_review == 15){
                        *score = *x * *y;
                        if(*score > 6.00){
                            return true;
                        }else{
                            return false;
                        }
                    }else if(*AI_review == 16){
                        *score = *x * *y;
                        if(*score > 6.50){
                            return true;
                        }else{
                            return false;
                        }

                    }else if(*AI_review == 17){
                        *score = *x * *y;
                        if(*score > 7.50){
                            return true;
                        }else{
                            return false;
                        }
                    }else if(*AI_review == 18){
                        *score = *x * *y;
                        if(*score > 8.70){
                            return true;
                        }else{
                            return false;
                        }
                    }else if(*AI_review == 19){
                        *score = *x * *y;
                        if(*score > 9.80){
                            return true;
                        }else{
                            return false;
                        }
                    }else if(*AI_review == 20){
                       
                           return false; 
                       
                    }

                    //add more high points to stop very high cards
            }else if(*number == 1 && *AI_number >= 2){
                if(*AI_review <= 11){
                    return true;
                }else{
                    return false;
                }
            }
            
            
            
            
            /* else if(*number > 2 && *AI_number >= 4){
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
            }else if(*number < 2 && *AI_number >= 2){
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
            }else if(*number = 2 && *AI_number >= 2){
                *score = *x * *y * *AI_review;
                if(*score < 60){
                    *score = *x * *y;
                    if(*score > 3.85){
                        return true;
                    }else{
                        return false;
                    }
                }else if(*score < 88){
                    *score = *x * *y;
                    if(*score > 5.67){
                        return true;
                    }else{
                        return false;
                    }
                }else if(*score > 88){
                    *score = *x * *y;
                    if(*score > 9.93){
                        return true;
                    }else{
                        return false;
                    }
                    
                }
                
            }
            */
            
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
    int AI_scores [9]; //first one is useless but it isnt do any damage
    int myscores [8];
    int myace;
    int AI_ace;
    //int AI_scores3;
    //int AI_scores4;
    //int AI_scores5;
    int one;
    int two;
    int three;
    int four;
    int five;
    int six;
    int seven;
    int eight;
    int nine;
    int ten;
    int one2;
    int two2;
    int three2;
    int four2;
    int five2;
    int six2;
    int seven2;
    int eight2;
    int nine2;
    int ten2;
    int check [20]{0};
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
        myace = is_Ace(mycards);
        myscores[0] = review(mycards,number_cards);
        clear_my_number(number_cards);
        if(myace != 2 && myscores[0] < 21){
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
            myscores[1] = review(mycards,number_cards);
            clear_my_number(number_cards);
            if(myscores[1] < 21){
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
                    myscores[2] = review(mycards,number_cards);
                    clear_my_number(number_cards);
                        if(myscores[2] < 21){
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
                            myscores[3] = review(mycards,number_cards);
                            clear_my_number(number_cards);
                                if(myscores[3] < 21){
                                    std::cout << "Type + to get another card or - to stop" << std::endl;
                                    std::cin >> word;
                                    if(word == "+"){
                                        six = rand() % 52;
                                        while(six == check[0] || six == check[1] || six == check[2] || six == check[3] || six == check[4]){
                                            six = rand() % 52;
                                        }
                                        check[5] = six;
                                        cards(six);
                                        mycards.push_back(six);
                                       myscores[4] = review(mycards,number_cards);
                                        clear_my_number(number_cards);
                                        if(myscores[4] < 21){
                                           std::cout << "Type + to get another card or - to stop" << std::endl;
                                            std::cin >> word;
                                            if(word == "+"){
                                                seven = rand() % 52;
                                                while(seven == check[0] || seven == check[1] || seven == check[2] || seven == check[3] || seven == check[4] || seven == check[5]){
                                                    seven = rand() % 52;
                                                }
                                                check[6] = seven;
                                                cards(seven);
                                                mycards.push_back(seven);
                                                myscores[5] = review(mycards,number_cards);
                                                clear_my_number(number_cards);
                                                if(myscores[5] < 21){
                                                    std::cout << "Type + to get another card or - to stop" << std::endl;
                                                    std::cin >> word;
                                                    if(word == "+"){
                                                    eight = rand() % 52;
                                                    while(eight == check[0] || eight == check[1] || eight == check[2] || eight == check[3] || eight == check[4] || eight == check[5] || eight == check[6]){
                                                        eight = rand() % 52;
                                                    }
                                                    check[7] = eight;
                                                    cards(eight);
                                                    mycards.push_back(eight);
                                                    myscores[6] = review(mycards,number_cards);
                                                    clear_my_number(number_cards);
                                                    if(myscores[6] < 21){
                                                        std::cout << "Type + to get another card or - to stop" << std::endl;
                                                        std::cin >> word;
                                                        if(word == "+"){
                                                            nine = rand() % 52;
                                                            while(nine == check[0] || nine == check[1] || nine == check[2] || nine == check[3] || nine == check[4] || nine == check[5] || nine == check[6] || nine == check[7]){
                                                                nine = rand() % 52;
                                                            }
                                                            check[8] = nine;
                                                            cards(nine);
                                                            mycards.push_back(nine);
                                                            myscores[7] = review(mycards,number_cards);
                                                            clear_my_number(number_cards);
                                                            if(myscores[7] < 21){
                                                                std::cout << "Type + to get another card or - to stop" << std::endl;
                                                                std::cin >> word;
                                                                if(word == "+"){
                                                                    ten = rand() % 52;
                                                                    while(ten == check[0] || ten == check[1] || ten == check[2] || ten == check[3] || ten == check[4] || ten == check[5] || ten == check[6] || ten == check[7] || ten == check[8]){
                                                                        ten = rand() % 52;
                                                                    }
                                                                }
                                                                    check[9] = ten;
                                                                    cards(ten);
                                                                    mycards.push_back(ten);
                                                            }
                                                    }
                                                }
                                        }                                        
                                        }
                                }
                                }
            }
                
        }
    }
}
                }
            }
        }
        }
    }
    scoremy = review(mycards,number_cards);
    if(scoremy != 21 && myace != 2 && scoremy < 21){
    std::cout << "==================================================" << std::endl;
    //another player plays
    AI.numbers(number_cards);  // one time ussage
    AI.en_review(en_cards);  //AI_number_cards = x
    AI.AI_numbers(AI_number_cards); //AI_number = x
    AI.clean(); //AI_number = 0
    if(AI_status == true){
        one2 = rand() % 52;
        
        while(one2 == check[0] || one2 == check[1] || one2 == check[2] || one2 == check[3] || one2 == check[4] || one2 == check[5] || one2 == check[6] || one2 == check[7] || one2 == check[8 || one2== check[9]]){
        one2 = rand() % 52;
    }
        check[10] = one2;
        cards(one2);
        en_cards.push_back(one2);
        AI.en_review(en_cards);  //AI_number_cards = x
        AI.AI_numbers(AI_number_cards); //AI_number = x
        AI_status = AI.exchange();
        AI.clean(); //AI_number = 0

            if(AI_status == true){
                two2 = rand() % 52;
                while(two2 == check[0] || two2 == check[1] || two2 == check[2] || two2 == check[3] || two2 == check[4] || two2 == check[5] || two2 == check[6] || two2 == check[7] || two2 == check[8] || two2 == check[9] || two2 == check[10]){
                    two2 = rand() % 52;
                }
                check[11] = two2;
                cards(two2);
                en_cards.push_back(two2);
                AI_ace = is_Ace(en_cards);
                if(AI_ace != 2){
                AI_scores[0] = review(en_cards,AI_number_cards); // resolved Goood ,doubling the value of AI_score BAD BAD BAD BAD
                AI.clean();
                if(AI_scores[0] < 21){
                    AI.en_review(en_cards);  //AI_number = x
                    AI.AI_numbers(AI_number_cards); //AI_number = x
                    AI_status = AI.exchange();
                    AI.clean(); //AI_number = 0
                    if(AI_status == true){
                        three2 = rand() % 52;
                        while(three2 == check[0] || three2 == check[1] || three2 == check[2] || three2 == check[3] || three2 == check[4] || three2 == check[5] || three2 == check[6] || three2 == check[7] || three2 == check[8] || three2 == check[9] || three2 == check[10] || three2 == check[11]){
                            three2 = rand() % 52;
                        }
                        check[12] = three2;
                        cards(three2);
                        en_cards.push_back(three2);
                        AI_scores[1] = review(en_cards,AI_number_cards);
                        AI.clean();
                        if(AI_scores[1] < 21){
                            AI.en_review(en_cards);  //AI_number = x
                            AI.AI_numbers(AI_number_cards); //AI_number = x
                            AI_status = AI.exchange();
                            AI.clean(); //AI_number = 0
                            if(AI_status == true){
                                    four2 = rand() % 52;
                                    while(four2 == check[0] || four2 == check[1] || four2 == check[2] || four2 == check[3] || four2 == check[4] || four2 == check[5] || four2 == check[6] || four2 == check[7] || four2 == check[8] || four2 == check[9] || four2 == check[10] || four2 == check[11] || four2 == check[12]){
                                        four2 = rand() % 52;
                                    }
                                    check[13] = four2;
                                    cards(four2);
                                    en_cards.push_back(four2);
                                    AI_scores[2] = review(en_cards,AI_number_cards);
                                    AI.clean();
                                    if(AI_scores[2] < 21){
                                        AI.en_review(en_cards);  //AI_number = x
                                        AI.AI_numbers(AI_number_cards); //AI_number = x
                                        AI_status = AI.exchange();
                                        AI.clean(); //AI_number = 0
                                        if(AI_status == true){
                                                five2 = rand() % 52;
                                                while(five2 == check[0] || five2 == check[1] || five2 == check[2] || five2 == check[3] || five2 == check[4] || five2 == check[5] || five2 == check[6] || five2 == check[7] || five2 == check[8] || five2 == check[9] || five2 == check[10] || five2 == check[11] || five2 == check[12] || five2 == check[13]){
                                                    five2 = rand() % 52;
                                            }
                                                check[14] = five2;
                                                cards(five2);
                                                en_cards.push_back(five2);
                                                AI_scores[3] = review(en_cards,AI_number_cards);
                                                AI.clean();
                                                if(AI_scores[3] < 21){
                                                    AI.en_review(en_cards);  //AI_number = x
                                                    AI.AI_numbers(AI_number_cards); //AI_number = x
                                                    AI_status = AI.exchange();
                                                    AI.clean(); //AI_number = 0
                                                    if(AI_status == true){
                                                            six2 = rand() % 52;
                                                            while(six2 == check[0] || six2 == check[1] || six2 == check[2] || six2 == check[3] || six2 == check[4] || six2 == check[5] || six2 == check[6] || six2 == check[7] || six2 == check[8] || six2 == check[9] || six2 == check[10] || six2 == check[11] || six2 == check[12] || six2 == check[13] || six2 == check[14]){
                                                                six2 = rand() % 52;
                                                        }
                                                            check[15] = six2;
                                                            cards(six2);
                                                            en_cards.push_back(six2);
                                                            AI_scores[4] = review(en_cards,AI_number_cards);
                                                            AI.clean();
                                                            if(AI_scores[4] < 21){
                                                                AI.en_review(en_cards);  //AI_number = x
                                                                AI.AI_numbers(AI_number_cards); //AI_number = x
                                                                AI_status = AI.exchange();
                                                                AI.clean(); //AI_number = 0
                                                                if(AI_status == true){
                                                                        seven2 = rand() % 52;
                                                                        while(seven2 == check[0] || seven2 == check[1] || seven2 == check[2] || seven2 == check[3] || seven2 == check[4] || seven2 == check[5] || seven2 == check[6] || seven2 == check[7] || seven2 == check[8] || seven2 == check[9] || seven2 == check[10] || seven2 == check[11] || seven2 == check[12] || seven2 == check[13] || seven2 == check[14] || seven2 == check[15]){
                                                                            seven2 = rand() % 52;
                                                                    }
                                                                    check[16] = seven2;
                                                                    cards(seven2);
                                                                    en_cards.push_back(seven2);
                                                                    AI_scores[5] = review(en_cards,AI_number_cards);
                                                                    AI.clean();
                                                                        if(AI_scores[5] < 21){
                                                                            AI.en_review(en_cards);  //AI_number = x
                                                                            AI.AI_numbers(AI_number_cards); //AI_number = x
                                                                            AI_status = AI.exchange();
                                                                            AI.clean(); //AI_number = 0
                                                                            if(AI_status == true){
                                                                                    eight2 = rand() % 52;
                                                                                    while(eight2 == check[0] || eight2 == check[1] || eight2 == check[2] || eight2 == check[3] || eight2 == check[4] || eight2 == check[5] || eight2 == check[6] || eight2 == check[7] || eight2 == check[8] || eight2 == check[9] || eight2 == check[10] || eight2 == check[11] || eight2 == check[12] || eight2 == check[13] || eight2 == check[14] || eight2 == check[15] || eight2 == check[16]){
                                                                                        eight2 = rand() % 52;
                                                                                }
                                                                                check[17] = eight2;
                                                                                cards(eight2);
                                                                                en_cards.push_back(eight2);
                                                                                AI_scores[6] = review(en_cards,AI_number_cards);
                                                                                AI.clean();
                                                                                if(AI_scores[6] < 21){
                                                                                    AI.en_review(en_cards);  //AI_number = x
                                                                                    AI.AI_numbers(AI_number_cards); //AI_number = x
                                                                                    AI_status = AI.exchange();
                                                                                    AI.clean(); //AI_number = 0
                                                                                    if(AI_status == true){
                                                                                            nine2 = rand() % 52;
                                                                                            while(nine2 == check[0] || nine2 == check[1] || nine2 == check[2] || nine2 == check[3] || nine2 == check[4] || nine2 == check[5] || nine2 == check[6] || nine2 == check[7] || nine2 == check[8] || nine2 == check[9] || nine2 == check[10] || nine2 == check[11] || nine2 == check[12] || nine2 == check[13] || nine2 == check[14] || nine2 == check[15] || nine2 == check[16] || nine2 == check[17]){
                                                                                                nine2 = rand() % 52;
                                                                                        }
                                                                                        check[18] = nine2;
                                                                                        cards(nine2);
                                                                                        en_cards.push_back(nine2);
                                                                                        AI_scores[7] = review(en_cards,AI_number_cards);
                                                                                        AI.clean();
                                                                                        if(AI_scores[7] < 21){
                                                                                            AI.en_review(en_cards);  //AI_number = x
                                                                                            AI.AI_numbers(AI_number_cards); //AI_number = x
                                                                                            AI_status = AI.exchange();
                                                                                            AI.clean(); //AI_number = 0
                                                                                            if(AI_status == true){
                                                                                                    ten2 = rand() % 52;
                                                                                                    while(ten2 == check[0] || ten2 == check[1] || ten2 == check[2] || ten2 == check[3] || ten2 == check[4] || ten2 == check[5] || ten2 == check[6] || ten2 == check[7] || ten2 == check[8] || ten2 == check[9] || ten2 == check[10] || ten2 == check[11] || ten2 == check[12] || ten2 == check[13] || ten2 == check[14] || ten2 == check[15] || ten2 == check[16] || ten2 == check[17] || ten2 == check[18]){
                                                                                                        ten2 = rand() % 52;
                                                                                                }
                                                                                            check[19] = ten2;
                                                                                            cards(ten2);
                                                                                            en_cards.push_back(ten2);
                                                                                            AI_scores[8] = review(en_cards,AI_number_cards);
                                                                                            AI.clean();
                                                                                        }
                                                                                }
                                                                        }

                                                         
                                                }       
                        }
                        }
                        }
                     }
                     }
            }
            }
            }
    }
                    }
                }
                }
}
}
    if(AI_ace == 2){
        std::cout << "==================================================" << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "AI win by score" << (2*11) - 1 << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
    }else if(AI_scores[0] == 21 || AI_scores[1] == 21 || AI_scores[2] == 21 || AI_scores[3] == 21){
            int* exec = new int {0};
            for(size_t i {0}; i < 4;++i){
                if(AI_scores[i] == 21){
                    *exec = 21;
                }
            }
            std::cout << "==================================================" << std::endl;
            std::cout << "AI wins by score : " << *exec << std::endl;
            delete exec;
            exec = nullptr;
         }else{

        //scoremy = review(mycards,number_cards);
        std::cout << "==================================================" << std::endl;
        AI_scoremy = review(en_cards,AI_number_cards);
       if(AI_scoremy > 21){
            std::cout << "You win, AI exceeded 21 points" << std::endl;
        }else if((scoremy > AI_scoremy)){
            std::cout << "You win" << std::endl;
        }else if(AI_scoremy > scoremy){
            std::cout << "enemy wins" << std::endl;
        }else if(scoremy == AI_scoremy){
            std::cout << "draw" << std::endl;
        }
        std::cout << "you : " << scoremy << " :|: AI : " << AI_scoremy;
         }
}
        
}else{
    if(scoremy > 21 && myace != 2){
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "AI wins, you have exceeded 21 points" << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
    }else if(scoremy == 21){
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "You win by scored " << scoremy << " points" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
}else{
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "You win by scored " << scoremy - 1 << " points" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
}
}

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


int is_Ace(std::vector<int>& cards){
    int aces;
    for(size_t i {0};i < cards.size();++i){
        int x = cards[i] % 13;
        if(x == 0){
            aces++;
        }
    }
    return aces;
}

void clear_my_number(std::vector<int>& x){
        x.clear();
        for(size_t i {0}; i < 13;++i){
            x.push_back(0);
        }
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
