#include <iostream>
#include <vector>
#include "range-based-for-loop.h"
int main()
{
	for (int i : {2, 3, 4, 5})
	{
		std::cout << i << std::endl;
	}
	std::vector<double>	vec = { 1.1,2.2,3.3 };

	for (auto& elem : vec)
	{
		elem *= 3;
		std::cout << elem << std::endl;
	}

	/*std::vector<std::string> vs;
	for (const C& elem : vs)
	{
		std::cout << elem << std::endl;
	}*/

}