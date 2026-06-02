#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int randomNumber,user_number,attempts = 0;

    srand(time(0));   // Seed for random number

    randomNumber = rand() % 101;

    while(1){
        printf("guess the random number");

    scanf("%d",&user_number);
    if(randomNumber==user_number){
        printf("yes u guessed right.it is:%d\n",randomNumber);
        attempts+=1;
        break;
    }
    else if(randomNumber<user_number){
        attempts+=1;
        printf("no!a lower number plz\n");
    }
    else if(randomNumber>user_number){
        attempts+=1;
        printf("no! a higher number plz\n");
    }}
    printf("your number of attempts are:%d",attempts);
    

    return 0;
}