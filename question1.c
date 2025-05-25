#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x;
    srand(time(NULL));//this prevents the same value from repeating continuously
    x= rand()% 6 + 1; //remainder between 1 and 6
    if (x==1) {
        printf("you're dead :("); //consider that 1 is the bullet cause it doesn't matter which number is assigned as we know its in a random pocket of bullet holder
    }
    else {
        printf("phew! close call");
    }
    printf("\n");
    return 0;
}
