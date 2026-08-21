//
// Created by asd on 2026/8/21.
//
#include <iostream>
template<class T>
T add_abd(T &a, T &b, T &c){
    return a+b+c;
}
int main(){
    int a,b,c;
    a=1;
    b=2;
    c=3;
    int result=add_abd(a,b,c);
    std::cout<<result;
    return 0;
}
