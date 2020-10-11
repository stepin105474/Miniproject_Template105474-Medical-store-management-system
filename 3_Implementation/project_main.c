#include <medicstore_management.h>


 void main()
{
   //int i=0,n,iter;
  struct medicine m[100];
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
           addentry(m[]);
       }
       if(operatorchoice=='P')
       {
           display(m[]);
       }
       if(operatorchoice=='D')
       {
           deleteentry(m[]);
       }
       if(operatorchoice=='E')
       {
           return;
       }
   }     // end of while loop
}   // end of main
