// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <limits.h>
#include <string.h>
#include < math.h>


int main()
{
   // printf("hello world ");
    
   /* printf("|\\\n");
    printf("| \\\n");
    printf("|  \\\n");
    printf("|   \\\n");
    printf("|    \\\n");
    printf("|_____\\\n");
    return 0;*/
    //int i = 1;
    //printf("the size of the int is %i", sizeof(i));
    //printf("the size of the int is %zu", sizeof(i));// using the size_t data type

    //printf("the max value is %i \n", INT_MAX);
    //printf("what is the min value %i", INT_MIN);

    //5.2
    //char mychar = 'c';
    //printf("the char that I would like to print is %c", mychar);

    //char str[] = "My mom says, \"I should learn C!!!\" ";
    //printf("\nstring print = %s", str);

    //char name[] = "Konrad ";
    //printf("%s", name);
    

    int maxpower = 3;
    for (int i = 0; i <= maxpower; i++)
    {   
        
        int val = pow(10, i);
        printf("\n");
        for (int j = maxpower - i-1; j >= 0; j--)
        {
            printf("%d",0);
        }
        printf("%1d",val);
    }




    





}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
