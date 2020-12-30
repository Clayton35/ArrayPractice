#include <iostream> 
#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
    int a[7] = {2, 3, 456, 4545, 687, 56766, 5475};
    std::cout << "\nThe elements of the array are ";

    int x = 0;
    while (x < 7) // Take care to ensure the conditions set match the outcome you are trying to achieve.
    {
        std::cout << a[x] << " ";
        x++;
    }

    std::sort(a, a+7); // this sorts the elements of the array in ascending order

    std::cout << "\nThe elements after sorting are ";

    int y = 0;
    while (y < 7)
    {
        std::cout << a[y] << " ";
        y++;
    }
    std::cout << " \n";

    return 0;

}

/* This is just more array elements sorting practice.  I was having erros, it was not printing the elements of the array before
sorting, but was displaying the initial output statement.  I had the first "while" loop conditional set to (x < 0) instead of (x < 7).  
I need to take more initial care when setting conditions on my loops. */