#include <iostream>
// Variables globales tienen memoria limitada (sirve para cosas minimas necesarias)
static int s_myStaticInt;
int g_myGlobalInt = 7;

const int nums_rows = 4;
const int num_colum = 4;

// colums x rows (C++ va al reves)
float my2dArray[nums_rows][num_colum];

// STACK 
// my FLoat - 4 bytes
// p - 4 bytes
int main() {
	//context of main
	float* myFloatHeap = new float;
	*myFloatHeap = 4.0f;//Se guarda en el heap y se puede usar en cualquier contexto, no se va a destruir al final de la funcion 

	delete myFloatHeap; // Borra la variable del heap libera memoria 
	int* p;

	for (int i = 0; i < 4; i++)// i is created
	{
		//context of for
		int a = 2;
		p = &a; // Nunca hacer
	}// i is destroyed

	std::cout << p; // suele petar 
}
//Complier destroys context of main


//int* foo()
//{
//    float myLocalDouble;
//    int* p;
//
//    int* myDynamicArray = new int[5];
//
//    return myDynamicArray;
//}
