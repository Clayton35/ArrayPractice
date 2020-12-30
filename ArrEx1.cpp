#include <iostream> 
#include <string.h>
#include <algorithm>

//Given an array of integers, find the largest element

int main()
{
    int array[15];
    std::sort(array, array+15);

    std::cout << "\nThe largest element in the given array is ";
    std::cout << array[14] << ". \n";

    return 0;
}