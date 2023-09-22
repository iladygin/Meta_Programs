#include <iostream>

template <int n, int divider>
class Prime 
{
public:
    static const int tmp = (n % divider != 0) * Prime<n, divider - 1>::tmp;
};

template <int n>
class Prime<n, 1> 
{
public:
    static const int tmp = 1;
};

template <int n>
class Is_Prime
{
public:
    static const int tmp = Prime<n, n - 1>::tmp;
};

template <int n>
class Print {};

int what = Print <Is_Prime<15>::tmp>::pr;
