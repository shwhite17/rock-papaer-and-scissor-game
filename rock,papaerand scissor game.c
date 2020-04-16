
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 int main()
 {
     int r=1;
     int p=2;
     int s=3;
     int i;
     int pscore=0;
     int cscore =0;
     int choice;
     srand(time(null));
     printf("rock=1, paper=2 and scissor=3\n");
     for(i=0;i<5;i++)
     {
         printf("enter your choice");
         scanf("%d", &choice);
         int computer =rand()%3+1;
if (choice==1){
    if(computer==1){
        printf("drawn\n");
    }
    if(computer==2){
        printf("computer wins!\n");
        cscore=cscore+1;
    }
    if(computer==3){
        printf("player wins\n");
        pscore=pscore+1;
    }
     }
     else if(choice==2){
         if(computer==2){
             printf("drawn\n");
         }
         if(computer==3){
             printf("player wins!\n");
             pscore=pscore+1;
         }
     if(computer ==1){
         printf("computer wins!\n");
         cscore=cscore+1;
     }
     }
     else if(choice==3){
         if(computer==3){
             printf("draw\n");
         }
if(computer==2){
    printf("computer wins!\n");
    cscore= cscore+1;

}
if(computer==1){
    printf("computer wins!\n");
    pscore=pscore+1;
}
}
else{
    printf("wrong answer\n");
}
     }
     if(cscore>pscore){
         printf("computer wins %d to %d\n", cscore, pscore);
     }
     else if(cscore<pscore){
         printf("player wins %d to %d\n", pscore , cscore);
     }
     else if(cscore=pscore){
         printf("no winner it is a draw\n");
     }
     return 0;
 }