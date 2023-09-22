#include <iostream>

template <int n>
class Factorial 
{
public:
    static const int tmp = n * Factorial<n - 1>::tmp;
};

template <>
class Factorial<0> 
{
public:
    static const int tmp = 1;
};

template <int n>
class Print {};

int what = Print <Factorial<6>::tmp>::pr;
