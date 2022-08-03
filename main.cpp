#include "extendedgcd.hpp"

int main() {
	int a, b;
	std::cin >> a >> b;
	const auto [gcd,x,y] = extended_gcd(a,b);
	std::cout << "extended_gcd(" << a << "," << b << ") = " << gcd << std::endl;
	std::cout << gcd << " = (" << a << ")*(" << x << ")+(" << b << ")*(" << y << ")" << std::endl;  
	return 0; }
