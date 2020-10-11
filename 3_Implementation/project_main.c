#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "medicstore_management.h"

int n=0;

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
           addentry(struct medicine m[]);
       }
       if(operatorchoice=='P')
       {
           display(struct medicine m[]);
       }
       if(operatorchoice=='D')
       {
           deleteentry(struct medicine m[]);
       }
       if(operatorchoice=='E')
       {
           return;
       }
   }
}
