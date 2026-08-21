//
// Created by asd on 2026/8/21.
/*编写一个模版函数fill给数组a[start:end-1]赋值为value*/
#include<iostream>
#include<vector>
template<class T>
void fill(std::vector<T> &a, int start, int end,T value){
    if (start < 0 || end < start ||end > static_cast<int>(a.size())){
        throw std::out_of_range("参数超出范围");
    }
    else{
        for (int i = start; i < end; ++i){
            a[i] = value;
        }
    }
}
int main(){
    std::vector<int> a = {1,2,3,4,5};
    int value=5;
    fill(a,1,5,value);
    for (int i = 0; i < 5; ++i){
        std::cout << a[i] << std::endl;
    }
    return 0;
}

