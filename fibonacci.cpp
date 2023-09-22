#include <iostream>

template <int n>
class Fibonacci 
{
public:
    static const int tmp = Fibonacci<n - 1>::tmp + Fibonacci<n - 2>::tmp;
};

template <>
class Fibonacci<0> 
{
public:
    static const int tmp = 0;
};

template <>
class Fibonacci<1> 
{
public:
    static const int tmp = 1;
};

template <int n>
class Print {};

int what = Print <Fibonacci<4>::tmp>::pr;