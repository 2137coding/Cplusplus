#include <iostream>

void quest(std::string& a,std::string& b,std::string& c);

int main(){
    std::string a [60];  //answear
    std::string b [60];  // polish word
    std::string c [60];  // english word
    std::cout << "Type word from polish to english, good luck" << std::endl;
    quest(a[0], b[0] = "x", c[0] = "y");
quest(a[1], b[1] = "x", c[1] = "y");
quest(a[2], b[2] = "x", c[2] = "y");
quest(a[3], b[3] = "x", c[3] = "y");
quest(a[4], b[4] = "x", c[4] = "y");
quest(a[5], b[5] = "x", c[5] = "y");
quest(a[6], b[6] = "x", c[6] = "y");
quest(a[7], b[7] = "x", c[7] = "y");
quest(a[8], b[8] = "x", c[8] = "y");
quest(a[9], b[9] = "x", c[9] = "y");
quest(a[10], b[10] = "x", c[10] = "y");
quest(a[11], b[11] = "x", c[11] = "y");
quest(a[12], b[12] = "x", c[12] = "y");
quest(a[13], b[13] = "x", c[13] = "y");
quest(a[14], b[14] = "x", c[14] = "y");
quest(a[15], b[15] = "x", c[15] = "y");
quest(a[16], b[16] = "x", c[16] = "y");
quest(a[17], b[17] = "x", c[17] = "y");
quest(a[18], b[18] = "x", c[18] = "y");
quest(a[19], b[19] = "x", c[19] = "y");
quest(a[20], b[20] = "x", c[20] = "y");
quest(a[21], b[21] = "x", c[21] = "y");
quest(a[22], b[22] = "x", c[22] = "y");
quest(a[23], b[23] = "x", c[23] = "y");
quest(a[24], b[24] = "x", c[24] = "y");
quest(a[25], b[25] = "x", c[25] = "y");
quest(a[26], b[26] = "x", c[26] = "y");
quest(a[27], b[27] = "x", c[27] = "y");
quest(a[28], b[28] = "x", c[28] = "y");
quest(a[29], b[29] = "x", c[29] = "y");
quest(a[30], b[30] = "x", c[30] = "y");
quest(a[31], b[31] = "x", c[31] = "y");
quest(a[32], b[32] = "x", c[32] = "y");
quest(a[33], b[33] = "x", c[33] = "y");
quest(a[34], b[34] = "x", c[34] = "y");
quest(a[35], b[35] = "x", c[35] = "y");
quest(a[36], b[36] = "x", c[36] = "y");
quest(a[37], b[37] = "x", c[37] = "y");
quest(a[38], b[38] = "x", c[38] = "y");
quest(a[39], b[39] = "x", c[39] = "y");
quest(a[40], b[40] = "x", c[40] = "y");
quest(a[41], b[41] = "x", c[41] = "y");
quest(a[42], b[42] = "x", c[42] = "y");
quest(a[43], b[43] = "x", c[43] = "y");
quest(a[44], b[44] = "x", c[44] = "y");
quest(a[45], b[45] = "x", c[45] = "y");
quest(a[46], b[46] = "x", c[46] = "y");
quest(a[47], b[47] = "x", c[47] = "y");
quest(a[48], b[48] = "x", c[48] = "y");
quest(a[49], b[49] = "x", c[49] = "y");
quest(a[50], b[50] = "x", c[50] = "y");
quest(a[51], b[51] = "x", c[51] = "y");
quest(a[52], b[52] = "x", c[52] = "y");
quest(a[53], b[53] = "x", c[53] = "y");
quest(a[54], b[54] = "x", c[54] = "y");
quest(a[55], b[55] = "x", c[55] = "y");
quest(a[56], b[56] = "x", c[56] = "y");
quest(a[57], b[57] = "x", c[57] = "y");
quest(a[58], b[58] = "x", c[58] = "y");
quest(a[59], b[59] = "x", c[59] = "y");
quest(a[60], b[60] = "x", c[60] = "y");

  
   
    
    return 0;
}


void quest(std::string& a,std::string& b, std::string& c){
    std::cout << b << std::endl;
    std::cin >> a;
    if(a == c){
        std::cout << "===========" << std::endl;
        std::cout << "GOOD ANSWEAR" << std::endl;
        std::cout << "===========" << std::endl;
    }else{
         std::cout << "===========" << std::endl;
        std::cout << "BAD ANSWEAR. GOOD: " << c << std::endl;
        std::cout << "===========" << std::endl;
    }

}
