#pragma once
#include <iostream>
#include <tuple>

template<typename int_t>
auto extended_gcd(int_t a, int_t b) {
    using itriple = std::tuple<int_t,int_t,int_t>;
    if (a == 0)
        return itriple(b,0,1);
    const auto quotient = b/a, remainder = b%a;
    const auto [gcd,x,y] = extended_gcd(remainder,a);
    return itriple(gcd,y-quotient*x,x); }
