#include <medicstore_management.h>


 void main()
{
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
           addentry();
       }
       if(operatorchoice=='P')
       {
           display();
       }
       if(operatorchoice=='D')
       {
           deleteentry();
       }
       if(operatorchoice=='E')
       {
           return;
       }
   }     // end of while loop
}   // end of main
