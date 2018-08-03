#include<stdio.h>
int n,i;
struct stock
{
 char Item_id[5],Item_name[50],Item_exp_date[10];
 int Item_price,Item_quantity,Item_tax,perishable;
};

 void show(int n,struct stock sto[100])
 {
  printf("\nThe stock of item contained are following....");
  printf("\nItem_id\tItem_name\tItem_price\tItem_quantity\tItem_tax\tperishable\tItem_expiry\n");
  for(i=0;i<n;i++)
 {
  printf("====================================================================================================================================");
  printf("\n%s\t%s\t\t%d\t\t%d\t\t%d\t\t%d\t\t%s\t\n",sto[i].Item_id,sto[i].Item_name,sto[i].Item_price,sto[i].Item_quantity,sto[i].Item_tax,sto[i].perishable,sto[i].Item_exp_date);
  printf("------------------------------------------------------------------------------------------------------------------------------------");
}
}

