//
// Created by asd on 2026/8/21.
//
#include<iostream>
int abc_add(int a,int b,int c);
int main(){
    int result=abc_add(1,2,3);
    std::cout<<result;
    return 0;
}
int abc_add(int a,int b,int c){
    return a+b+c;
}