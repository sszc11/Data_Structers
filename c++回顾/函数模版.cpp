//
// Created by asd on 2026/8/21.
//
#include<iostream>
template <class T>
T add_abd(T a, T b,T c)
{
    return a+b+c;
}
int main()
{
    int result=add_abd(1,2,3);
    std::cout<<result<<std::endl;
    double result1=add_abd(1.3,2.3,3.3);
    std::cout<<result1;
    return 0;
}
