#include <iostream>
#include <queue>
#include "MyQueue.h"

struct Enemy {
	int hp;
};
int main()
{
	std::queue<int> q1; // queue es una template (acepta varios tipos de datos)
	std::queue<Enemy> q2;

	q1.push(197);
	q1.push(6);
	q1.push(34);
	q1.push(13);
	q1.push(632);

	std::cout << q1.front() << std::endl; // 197
	std::cout << q1.back() << std::endl; // 632
	std::cout << q1.size() << std::endl;
	std::cout << q1.empty() << std::endl;
	
	std::queue<int> tempQ = q1; // variable temporal para printar
	while (!tempQ.empty()) {
		std::cout << tempQ.front() << ", ";
		tempQ.pop();
	}


	std::vector<int> v1{ 1,2,4,5,6 };
	//std::queue q3(std::move(v1))
}
