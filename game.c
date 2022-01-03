#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int rnumber,guess,counter=1;
    srand(time(0));
    rnumber=rand()%100+1;
   do
   {
       printf("guess the number between 1 to 100\n");
       scanf("%d",&guess);

       if (guess>rnumber)
       {
       printf("guess lower number");
       }
       else if(guess<rnumber){
           printf("guess greater number");
       }
       else{
           printf("you got it");
           printf("you took %d attempts",counter);
       }
         counter++;
   } while (guess!=rnumber);
   
    return 0;
}