#include <stdio.h>
//
// Created by hp on 26-05-2025.
//
//int main() {
    void todo1(){
        FILE *f;
        f = fopen("todo1.txt","w");
        int x;
        printf("enter number of tasks: ");
        scanf("%d",&x);
        for (int i = 0; i < x; i++) {
            char task[100];
            printf("enter task: ");
            scanf("%s",task);
            fprintf(f,"%s\n", task);
        }
        fclose(f);
    }
    void todo2(){
        FILE *f;
        f = fopen("todo2.txt","w");
        int y;
        printf("enter number of users: ");
        scanf("%d",&y);
        for (int i = 0; i < y; i++) {
            char user[100];
            printf("enter user: ");
            scanf("%s",user);
            fprintf(f,"%d. %s \n",i+1, user);
            int x;
            printf("enter number of tasks: ");
            scanf("%d",&x);
            for (int i = 0; i < x; i++) {
                char task[100];
                printf("enter task: ");
                scanf("%s",task);
                fprintf(f,"%s\n", task);
            }
        }
        fclose(f);
    }
//}