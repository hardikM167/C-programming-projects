#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int player,comp;
    /*0->snake;
    1->water;
    2->gun;*/
    printf("choose 0 for snake,1 for gun and 2 for water\n");
    scanf("%d",&player);

    srand(time(0));   // Seed for random number

    comp = rand() % 3;
    printf("%d\n",comp);
    if(player==comp){
        printf("draw");
    }
    if(player!=comp){
        if(player == 1 && comp == 2){
            printf("player wins\n");
        }
        else if(player == 2 && comp ==1){
            printf("computer wins\n");
        }
        else if(player ==0 && comp ==1){
            printf("player wins\n");
        }
        else if(player == 1 && comp == 0){
            printf("comp wins\n");
        }
        else if(player == 2 && comp == 0){
            printf("player wins\n");
        }
        else if(player == 0 && comp == 2){
            printf("comp wins\n");
        }
        
    }


    return 0;
}