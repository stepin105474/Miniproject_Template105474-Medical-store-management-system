#include <medicstore_management.h>

struct medicine
{
    int price,stock;
    char name[50],mfg_date[12],exp_date[12];
}m[100];
int n=0;

int addentry(struct medicine m[])
   {
       
        n++;
        printf("Enter Medicine Name :\n");
        scanf("%s",m[n-1].name);
        printf("Enter Medicine Price:\n");
        scanf("%d",&m[n-1].price);
        printf("Enter Medicine Stock:\n");
        scanf("%d",&m[n-1].stock);
        printf("Enter Medicine Manufactured Date:\n");
        scanf("%s",m[n-1].mfg_date);
        printf("Enter Medicine Expiry Date:\n");
        scanf("%s",m[n-1].exp_date);
   }
//displaying function
   int display(struct medicine m[])
   {
    int i=0;
    printf("=================================================================================\n");
    printf("                          Medical Store Management System\n");
    printf("=================================================================================\n");
    printf("Medicines Available in the store are:\n\n");
    for(i=0;i<n;i++)
    {
        printf("Medicine Name:%s\n",m[i].name);
        printf("Medicine Price:%d\n",m[i].price);
        printf("Medicine Stock:%d\n",m[i].stock);
        printf("Medicine Manufactured Date:%s\n",m[i].mfg_date);
        printf("Medicine Expiry Date:%s\n\n",m[i].exp_date);
    }
   }
//deleting function
    int deleteentry(struct medicine m[])
   {   
    int i=0,iter;
    char delname[50];
    printf("Enter Medicine Name to be deleted\n");
    scanf("%s",delname);
    for(i=0;i<n;i++)
    {
        if(strcmp(delname,m[i].name)==0)
        {
            iter=i;
            printf("Medicine %s has removed from data\n",delname);
        }
    }
    for(i=iter;i<n;i++)
    {
            m[i].price=m[i+1].price;
            m[i].stock=m[i+1].stock;
            strcpy(m[i].name,m[i+1].name); 
            strcpy(m[i].mfg_date,m[i+1].mfg_date); 
            strcpy(m[i].exp_date,m[i+1].exp_date); 
    }
    n--;
   }
