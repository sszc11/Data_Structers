//
// Created by asd on 2026/8/21.
//
/*编写一个函数模版count返回a[0:n-1]中value出现次数*/
#include<iostream>
#include<vector>
#include<format>
template<class T>
int count(const std::vector<T> &arr,const T key_num){
  int count=0;
  for (auto i : arr){
    if (i==key_num)
      count++;
  }
  return count;
}
template<class T>
void input(std::vector<T> &arr){
  for (T&i : arr){
    std::cin>>i;
  }
}
template<class T>
void print(const std::vector<T> &arr){
  for (const T&i : arr){
    std::cout<<i<<" ";
  }
  std::cout<<std::endl;
}
int main(){
  int n;
  std::cout<<"请输入数组大小n"<<std::endl;
  std::cin>>n;
  std::vector<int> arr(n);
  int value;
  std::cout<<"请输入数组:"<<std::endl;
  input(arr);
  std::cout<<"请输入需要找的value"<<std::endl;
  std::cin>>value;
  std::cout<<std::format("输出的在数组中value出现的次数为:{}",count(arr,value))<<std::endl;
  std::cout<<"打印原数组:";
  print(arr);
  std::cout<<std::endl;
  return 0;
}
