#include<medicstore_management.h>

struct medicine
{
    int price,stock;
    char name[50],mfg_date[12],exp_date[12];
}m[100];

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
