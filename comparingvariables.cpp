#include <iostream>
int main(){
    int number1 {32};
    int number2 {44};

    std::cout<<"comparing variables"<<std::endl;
    std::cout<<std::boolalpha ;
    
    std::cout <<"number1 < number2 : "<< (number1 < number2)  << std::endl;
    std::cout <<"number1 > number2 : "<< (number1 > number2)  << std::endl;
    std::cout <<"number1 <= number2 : "<< (number1 <= number2)  << std::endl;
    std::cout <<"number1 >= number2 : "<< (number1 >= number2)  << std::endl;
    std::cout <<"number1 == number2 : "<< (number1 == number2)  << std::endl;
    std::cout <<"number1 != number2 : "<< (number1 != number2)  << std::endl;

    std::cout<<"==========="<<std::endl;
    bool result =(number1 == number2);
    std::cout<<number1 <<" == "<<number2<<" : "<< result<<std::endl;
    

    return 0;
}