#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int Arr[5]; //static memory allocation

    int *ptr1 = (int *)malloc(5 * sizeof(int)); //Dynamic in c

    int *ptr2 = new int[5]; //Dynamic in c++

    free(ptr1); //c

    delete []ptr2;

    return 0;
}