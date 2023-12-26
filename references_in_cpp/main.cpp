#include <iostream>

int main(){
// declaring an integer and setting its value to 5
int a = 5;

// the & symbol makes sure we are declaring a reference in this case to variable a
int& ref = a;


std::cout<< "The value of a: "<< a <<std::endl;
std::cout<< "The value of ref: "<< ref <<std::endl;

a = 7;
// checking the effect of changing the value of a on ref

std::cout<< "We changed the value of a :"<< std::endl;
std::cout<< "The value of a: "<< a <<std::endl;
std::cout<< "The value of ref: "<< ref <<std::endl;

ref = 8;

// checking the effect of changing the value of ref on a
std::cout<< "We changed the value of the reference variable:"<<std::endl;
std::cout<< "The value of a: "<< a <<std::endl;
std::cout<< "The value of ref: "<< ref <<std::endl;


return 0;
}

