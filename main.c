#include <stdio.h>

int main() {

    int  n = 20, *pntr;  //actual and pointer variable declaration

    pntr = &n;  //store address of n in pointer variable

    printf("Address of n variable: %x\n", &n  );

    //address stored in pointer variable
    printf("Address stored in pntr variable: %x\n", pntr );

    //access the value using the pointer
    printf("Value of *pntr variable: %d\n", *pntr );

    /*
     * Arrays
     */




    return 0;
}
