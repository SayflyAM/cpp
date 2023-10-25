#include <iostream>
#include <cmath>

int main(){
    double weight{7.7};
    //floor
    std::cout<<"weight rounded to floor : "<< std::floor(weight)<<std::endl;
    //ceil
    std::cout<<"weight rounded to ceil : "<< std::ceil(weight)<<std::endl;
    double saving {-76345};
    //abse
    std::cout<<"Abs of saving is : "<<std::abs(saving)<<std::endl;

    std::cout<<"to get 54.59 you evolate e to the oper of : "<<std::log(54.59)<<std::endl;
    std::cout<<"to get 10000 you need to elevate to ther oper"<<std::log10(10000)<<std::endl;

    //sqrt
    std::cout<<"the square root of the 81 is : "<<std::sqrt(81)<<std::endl;
    std::cout<<"3.6 is rounded to : "<<std::round(3.6)<<std::endl;
    std::cout<<"2.5 is rounded to : "<<std::round(2.5)<<std::endl;
    std::cout<<"2.4 is rounded to : "<<std::round(2.4)<<std::endl;


    return 0;
}