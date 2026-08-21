//
// Created by asd on 2026/8/21.
//
#include<iostream>
#include<format>
template <class t1, class t2, class t3>
auto add(const t1& a, const t2& b, const t3& c) -> decltype(a + b + c)
{
    return a + b + c;
}
int main()
{
    int a = 1;
    double b = 2.10;
    float c = 3.0;
    auto result = add(a, b, c);
    std::cout << std::format("{}", result) << std::endl;
    std::cout << std::format("{}", static_cast<int>(a + b)) << std::endl;
    return 0;
}
