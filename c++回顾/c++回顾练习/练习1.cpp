//
// Created by asd on 2026/8/21.
//交换两个数字
#include <iostream>
#include<format>
template <class T>
void swap(T &a,T &b)noexcept{
    T temp=a;
    a=b;
    b=temp;
}
int main()
{
    double a=1,b=2;
    std::cout<<std::format("a={} b={}",a,b)<<std::endl;
    swap(a,b);
    std::cout<<std::format("a={} b={}",a,b)<<std::endl;
    return 0;
}
