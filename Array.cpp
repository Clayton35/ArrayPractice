#include <iostream>
#include <stdlib.h>
#include <time.h>

// Testing randomly chosen variables

int main()
{
    
    char arrayrandom[3]; // Use correct variable type
    arrayrandom[0] = 'r';
    arrayrandom[1] = 'p';
    arrayrandom[2] = 's';

    srand(time(NULL)); // 
    int random = rand()%3;

    std::cout << arrayrandom[random] << "\n";
    
    return 0;

}

    /* array[0] = R;
    array[1] = P;
    array[2] = S;*/