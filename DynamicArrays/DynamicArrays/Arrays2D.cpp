// Arrays2D.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Mapa.h"

struct Car
{
	std::string name;
	std::string model;
	//Default: Car() --- Contructor 
	// Default: ~Car() --- Destructor

};

int* reziseToNewCapacityArray(int* dynamicArray, int newSize, int oldSize) {

	if (dynamicArray == nullptr) { return dynamicArray; }

	if (oldSize < 0 || newSize < 0) { return dynamicArray; }

	int* newDynamicArray = new int[newSize];

	if (newSize <= oldSize) {
		oldSize = newSize;
	}

	for (int i = 0; i < oldSize; i++)
	{
		newDynamicArray[i] = dynamicArray[i];
	}

	delete[] dynamicArray;

	return newDynamicArray;
}

int main()
{
	/*
	// Arrays of 2 dimensions (Matrices)
	std::cout << "Introduce number of row and column of the new matrix" << std::endl;
	int numRows;
	int numColumns;
	std::cin >> numRows;
	std::cin >> numColumns;

	Mapa level1(numRows, numColumns);
	// C++ Constructor & Destructor
	//level1.initLevel(numRows, numColumns);
	level1.printLevel();
	//level1.destroyLevel();
	


	//int** my2DArray;

	//my2DArray = new int* [numRows];

	//for (int i = 0; i < numRows; ++i)
	//{
	//	my2DArray[i] = new int[numColumns];
	//}

	//// Cool Code
	//srand(time(NULL));
	//// Assign value & Print Code
	//for (int i = 0; i < numRows; ++i)
	//{
	//	for (int j = 0; j < numColumns; ++j)
	//	{
	//		//std::cin >> my2DArray[i][j];
	//		my2DArray[i][j] = rand() % 10;
	//		//std::cout << my2DArray[i][j] << " ";
	//	}
	//	//std::cout << std::endl;
	//}
	//// Iterate filas
	//for (int i = 0; i < numRows; ++i)
	//{
	//	for (int j = 0; j < numColumns; ++j)
	//	{
	//		std::cout << my2DArray[i][j] << " ";
	//	}
	//	std::cout << std::endl;
	//}
	//std::cout << std::endl;

	//// Iterate by columns
	//for (int j = 0; j < numColumns; ++j)
	//{
	//	for (int i = 0; i < numRows; ++i)
	//	{
	//		std::cout << my2DArray[i][j] << " ";
	//	}
	//}
	//std::cout << std::endl;
	//int elementToFind;
	//std::cin >> elementToFind;
	//for (int i = 0; i < numRows; ++i)
	//{
	//	for (int j = 0; j < numColumns; ++j)
	//	{
	//		if (i == j && my2DArray[i][j] == elementToFind)
	//		{
	//			std::cout << i << " " << j << std::endl;;
	//		}
	//	}
	//}
	//// Optimization. Assuming square matrix
	//for (int i = 0; i < numRows; ++i)
	//{
	//	if (my2DArray[i][i] == elementToFind)
	//	{
	//		std::cout << i << " " << i << std::endl;;

	//	}
	//}

	//for (int i = 0; i < numRows; ++i)
	//{
	//	for (int j = 0; j < numColumns; ++j)
	//	{
	//		std::cout << my2DArray[i][j] << " ";
	//	}
	//	std::cout << std::endl;
	//}
	//// Delete Array 2D
	//for (int i = 0; i < numRows; ++i)
	//{
	//	delete[] my2DArray[i]; // @ row i
	//}
	//delete[] my2DArray;
	*/

	int dynamicSpace;

	std::cout << "Enter dynamic space" << std::endl;

	std::cin >> dynamicSpace;

	int* dynamicArray = new int[dynamicSpace];

	for (int i = 0; i < dynamicSpace; i++)
	{
		dynamicArray[i] = 1;

		std::cout << dynamicArray[1] << ", ";
	}

	int newDynamicSpace;

	std::cout << "Enter new dynamic space" << std::endl;

	std::cin >> newDynamicSpace;

	dynamicArray = reziseToNewCapacityArray(dynamicArray, dynamicSpace, newDynamicSpace);

}