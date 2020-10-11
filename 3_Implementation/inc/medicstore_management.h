#ifndef __MEDICSTORE_MANAGEMENT_H__
#define __MEDICSTORE_MANAGEMENT_H__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct medicine
{
    int price,stock;
    char name[50],mfg_date[12],exp_date[12];
}m[100];

void addentry(struct medicine m[]);

void display(struct medicine m[]);

void deleteentry(struct medicine m[]);

#endif  
