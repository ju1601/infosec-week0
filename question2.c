//
// Created by hp on 26-05-2025.
//
#include <stdio.h>
//int main() {
    //int a[] = {123,312,2322,11,31,22};
    //int n = sizeof(a) / sizeof(a[0]); //finding the number of elements
    int bubble(int a[], int n) {
        int i,j,t,u;
        for (i = 0; i < n; i++) { //sorting
            for (j = 0; j < n-i-1; j++) {
                if (a[j] > a[j+1]) {
                    t = a[j];
                    u = a[j+1];
                    a[j] = a[j+1];
                    a[j+1] = t;
                }
                else {
                    continue;
                }
            }
        }
        for (int f = 0; f < n; f++) {
            printf("%d\n",a[f]); //print array
        }
    }
    //return 0;
//}