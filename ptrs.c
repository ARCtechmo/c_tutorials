#include <stdio.h>
int main(){
    int var = 20; // declare an integer variable
    int *p; // declare a pointer to an integer
    p = &var; // initialize the pointer to the address of var
    printf("Value of var (int = var): %d\n", var);
    printf("Value pointed to by p (int *p): %d\n",*p);
    printf("Memory address of var (&var): %p\n",&var);
    printf("Value of p (address of var ; p = &var): %p\n", p);
    return 0;
}