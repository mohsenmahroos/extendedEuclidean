#pragma once
#include <iostream>
#include <tuple>
 
template<typename int_t>
std::tuple<int_t,int_t,int_t> extended_gcd(int_t a, int_t b) {
    if (a == 0)
    	return std::tuple<int_t,int_t,int_t>(b,0,1);
    const auto quotient = b/a, remainder = b%a;
    const auto [gcd,x,y] = extended_gcd(remainder,a);
    return std::tuple<int_t,int_t,int_t>(gcd,y-quotient*x,x); }
