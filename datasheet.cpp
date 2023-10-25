#include <iostream>
#include <iomanip>
int main(){
    int with_it = 20;

    std::cout<<std::setw(with_it)<<"First name"<<std::setw(with_it)<<"Last name"<<std::endl;
    std::cout<<std::setw(with_it)<<"Ali"<<std::setw(with_it)<<"Ahmed"<<std::endl;
    std::cout<<std::setw(with_it)<<"Omer"<<std::setw(with_it)<<"ALimany"<<std::endl;
    std::cout<<std::setw(with_it)<<"Ahmed"<<std::setw(with_it)<<"issa"<<std::endl;
    std::cout<<std::setw(with_it)<<"Mohamed"<<std::setw(with_it)<<"Mansour"<<std::endl;
    std::cout<<std::setw(with_it)<<"Mansour"<<std::setw(with_it)<<"Abubaker"<<std::endl;

    return 0;
}