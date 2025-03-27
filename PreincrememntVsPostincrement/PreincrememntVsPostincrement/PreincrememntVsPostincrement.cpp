#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 10,5,6,1,2 };

	int i = 0;
	++i;
	std::cout << i << std::endl;
	i++;
	std::cout << i << std::endl;
	std::cout << v[i] << std::endl;
	std::cout << v[i++] << std::endl;
	std::cout << v[i] << std::endl;
}

