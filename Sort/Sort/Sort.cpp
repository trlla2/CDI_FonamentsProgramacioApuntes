#include <vector>
#include <iostream>
#include <algorithm>

struct Person {
	std::string name;
	int age;
};

bool compareFunc(int& a, int& b) {
	return a > b;
}

bool comparePersonNameAndAge(Person& a, Person& b) {
	if (a.name != b.name) {
		return a.name < a.name;
	}
	return a.age < b.age;
}

int main()
{
	std::vector<int> v = { 4,1,6 - 5,2 };
	std::sort(v.begin(), v.end(), compareFunc);
	std::cout << "tonto quien  lo lea" << std::endl;
	
}

