#include <iostream>
#include <string.h> // enables strings and arrays
#include <algorithm> // enables "sort" function

/* This program uses "#include <algorithm>" to include the "sort" function for sorting the elements of an array in ascending order.  */

 using namespace std; // enables strings and arrays

int main()
{
    int array[10] = {1, 277, 382, 47, 5, 634590, 7, 30, 26}; // initial array with given elements
    std::cout << "\nThe elements of an array are ";
    int x = 0;
    while (x < 10)
    {
        std::cout << array[x] << " ";
        x++;
    }

    std::sort(array, array+10);
    std::cout << "\nThe array after sorting is ";
    int y = 0;
    while (y < 10)
    {
        std::cout << array[y] << " ";
        y++;
    }
    std::cout << " \n";

    return 0;
}

