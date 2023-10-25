#include <iostream>
#include <string>
int main(){
//printing data
/*
std::cout<<"hello c++ 20"<<std::endl;

int age{21};
std::cout<<"Age :"<< age <<std::endl;
std::cerr<<"erorr massgae:somthing this wrong"<<std::endl;
std::clog<<"log message :something happened"<<std::endl;
*/
//
/*
int age1;
std::string name;
std::cout<<"please type your name"<<std::endl;
std::cin >> name;
std::cin >> age1;
std::cout <<"hello" <<name <<"you are" <<age1 << "years old!" <<std::endl;
*/
//data with sapce
std::string full_name;
int age3;
std::cout<<"please type in your full name"<<std::endl;
std::getline(std::cin,full_name);
std::cin >> age3; 
std::cout <<"hello"<< full_name <<"you are "<< age3 <<"years old! "<< std::endl;
return 0;
}