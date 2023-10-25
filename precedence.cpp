#include <iostream>
int main(){
    int a{7};
    int b{23};
    int c{32};
    int d{67};
    int e{43};
    int m{34};
    int q{87};
    int result = a*b+c*d-e/m*q ;
    std::cout<<"result : "<< result <<std::endl;

    auto value = 5;
    std::cout<<"value : "<< value++<<std::endl;
    std::cout<<"value : "<< value <<std::endl;

    return 0;
}