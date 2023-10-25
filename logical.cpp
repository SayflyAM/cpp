#include <iostream>
int main(){
    bool a {true};
    bool b {false};
    bool c {true};

    std::cout<<std::boolalpha;

    std::cout<<"a : "<< a<<std::endl;
    std::cout<<"b : "<< b<<std::endl;
    std::cout<<"c : "<< c<<std::endl;

    std::cout<<std::endl;
    std::cout<<"Basic and operation"<<std::endl;
    std::cout<<"a && b : "<< (a && b)<<std::endl;
    std::cout<<"b && c : "<< (b && c)<<std::endl;
    std::cout<<"a && b && c : "<< (a && b && c )<<std::endl; 
    

    std::cout<<std::endl;
    std::cout<<"a || b "<< (a || b)<<std::endl;
    std::cout<<"a || c "<< (a || c)<<std::endl;
    std::cout<<"a || b || c "<< (a || b || c)<<std::endl;


   std::cout<<std::endl;
   std::cout<<"Basic Not operator"<<std::endl;
   std::cout<<"!a : "<< !a <<std::endl;
   std::cout<<"!b : "<< !b <<std::endl;
   std::cout<<"!c : "<<!c <<std::endl;

   std::cout<<std::endl;
   std::cout<<"combining logical operator"<<std::endl;
   std::cout<<"!(a && b) || c : "<< (!(a && b) || c) <<std::endl;


   std::cout<<"combining logical operator with relationl operators"<<std::endl;
   int d {45};
   int e {20};
   int f {11};
   std::cout<<std::endl;
   std::cout<<"Relation  and operator onj interger "<<std::endl;
   std::cout<<"d : "<< d<<std::endl;
   std::cout<<"e : "<< e<<std::endl;
   std::cout<<"f : "<< f<<std::endl;

   std::cout<<std::endl;
   std::cout<<"(d > e) && (d > f)"<<( (d > e) && (d > f))<<std::endl;

    return 0;
}