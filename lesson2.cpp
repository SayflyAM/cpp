#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    //Declare  and intilialize the varible
    float number1{1.3894938493840349f};
    double number2{1.094504954095};
    long double number3{1.938439843984894L};
    std::cout<<"sizeof float : "<<sizeof(float)<<std::endl;// 7 digit
    std::cout<<"sizeof double : "<<sizeof(double)<<std::endl;// 15 digit
    std::cout<<"sizeof long double : "<<sizeof(long double)<<std::endl;// 15+ digit
  //PRESION
  std::cout<<std::setprecision(20);//control from precisiion  std::cout
  std::cout<<"number1 is : "<<number1<<std::endl;
  std::cout<<"number2 is : "<<number2<<std::endl;
  std::cout<<"number3 is : "<<number3<<std::endl;

  std::cout<<"-----------------------------"<<std::endl;
  double number5{192400032};
  double number6{1.92400023e8};
  double number7{1.924e8};
  double number8{0.0000000003498};
  double number9{3.498e-11};

  std::cout<<"number5  is : "<<number5<<std::endl;
  std::cout<<"number6 is : "<<number6<<std::endl;
  std::cout<<"number7 is : "<<number7<<std::endl;
  std::cout<<"number8 is : "<<number8<<std::endl;
  std::cout<<"number9 is : "<<number9<<std::endl; 

    return 0;
}