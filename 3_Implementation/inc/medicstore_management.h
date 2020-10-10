#ifndef MEDICSTORE_MANAGEMENT_H
#define MEDICSTORE_MANAGEMENT_H

struct medicine
{
    int price,stock;
    char name[50],mfg_date[12],exp_date[12];
}m[100];

int addentry(struct);

int display(struct);

int deleteentry(struct);

#endif  
