#include <iostream>
#include <vector>


int main()
{
    std::cout << "Hello World!\n";

    std::vector<int> v = { 1,2,3,4,4 };
    // 0 (N^4 * (log N + N*logN)) // N^4 coste for // log N coste binarySearch // N*logN coste de mergeSort
    for(int i = 0; i < v.size(); i++)
        for(int i = 0; i < v.size(); i++)
            for(int i = 0; i < v.size(); i++)
                for (int i = 0; i < v.size(); i++) {
                    
                    //binarySearch(v, 50);
                    //mergeSort(v);
                }
    
}


