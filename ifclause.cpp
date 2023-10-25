#include <iostream>
int main(){
    int number1 {55};
    int number2 {43};

    bool result = (number1 < number2);
    std::cout<<std::boolalpha << "result : "<< result <<std::endl;

    std::cout<<std::endl;
    std::cout<<"free  standing if statment "<<std::endl;
    if (result == true){
        std::cout<< number1 <<"is less than "<<number2 <<std::endl;


    }
    if (!(result == true)){
        std::cout<< number1 <<"is not less than"<< number2 <<std::endl;
    }

    return 0;
}