#include <iostream>
int main() {
    //Braced initializers
    //variable may contine randomgarbage value.waring
    int elephant_count;
    int lion_count{};// Initilalizes to zero 
    int dog_count{10};//Initilalizes to 10
    int cat_count{15};//Initilaizes to 15
    //can use exprression  as Intilaizer
    int domesticated_animals {dog_count+cat_count} ;
    std::cout<<"elephant count : "<<elephant_count<<std::endl;
    std::cout<<"lion count :"<<lion_count<<std::endl;
    std::cout<<"dog count :"<<dog_count<<std::endl;
    std::cout<<"cat count :"<<cat_count<<std::endl;
    std::cout<<"domesticated animals"<<domesticated_animals<<std::endl;
    std::cout<<"sizeof int"<<sizeof(int)<<std::endl;
    std::cout<<"sizeof dog count"<<sizeof(dog_count)<<std::endl;
    return 0 ;
}