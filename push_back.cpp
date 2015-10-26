// c++11 oh ya!
#include <iostream>
#include <algorithm>
#include <vector>

int main() 
{
	std::vector<double> homework; double x;
	while (std::cin >> x) 
	       homework.push_back(x);	
	std::sort(homework.begin(),homework.end());	
	auto size = homework.size();
	auto mid = size / 2;
	double median = size % 2 == 0 
		? (homework[mid]+homework[mid-1])/2
		: homework[mid];
	std::cout << "hey, " << homework[1] 
		<< ", you sup " << median << std::endl;
 	return 0;
}
