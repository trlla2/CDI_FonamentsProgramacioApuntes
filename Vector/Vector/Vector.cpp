#include <iostream>
#include <vector>
#include <algorithm>

//CRUD
int main()
{
    //Create
    std::vector<int> myIntVector;

    myIntVector = { 4,5,6,7,1 };

    std::vector<int> myIntVector2(5,-1); // array de cinco elementos inizializados a -1

    //READ
    std::cout << myIntVector2[2] << std::endl;

    //for (int i = 0; myIntVector2.size() -1; i++) {
    //    std::cout << myIntVector2[i];
    //}
    //std::cout << std::endl;

    /*for (int elem : myIntVector2) {
        std::cout << myIntVector2[elem];
    }
    std::cout << std::endl;*/

    //Iterator

    for (std::vector<int>::iterator it = myIntVector2.begin(); it < myIntVector2.end(); it++) {
        std::cout << *it; // peta?
    }
    std::cout << std::endl;

    std::sort(myIntVector2.begin(), myIntVector2.end());

    myIntVector2.reserve(6); // reserva espacio en el vector solo para 6 variables.
}

