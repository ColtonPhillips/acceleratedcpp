//oh ya!
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>

int main(int argc, char ** argv) 
{
	int v = 33;
	float y = 1.11234664;
	double z = 434.23231;

	std::istringstream iss(argv[1]);
	int x;
	if (!(iss >> x))
    		std::cerr << "Invalid number " << argv[1] << '\n';

	std::streamsize prec = std::cout.precision();
	std::cout << std::setprecision(x) << "You are having " 
		<< 0.2 * v << " " << y * 10.3 << " " << z 
		<< std::setprecision(prec) << std::endl;
 	return 0;
}
