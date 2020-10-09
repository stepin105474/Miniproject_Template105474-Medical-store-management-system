#include <stdio.h>
#include<string.h>
#include<stdlib.h>

 void main()
{
   //int i=0,n,iter;
   char operatorchoice;
   //char delname[20];
   while(operatorchoice!='E')
   {
       printf("*******************************************\n");
       printf("Enter the command:\n");
       printf("A:AddEntry\n");
       printf("P:display\n");
       printf("D:DeleteEntry\n");
       printf("E:Exit\n");
       printf("*******************************************\n");
       scanf("%s",&operatorchoice);
       if(operatorchoice=='A')
       {
           addentry(m);
       }
       if(operatorchoice=='P')
       {
           display(m);
       }
       if(operatorchoice=='D')
       {
           deleteentry(m);
       }
       if(operatorchoice=='E')
       {
           return;
       }
   }
}

