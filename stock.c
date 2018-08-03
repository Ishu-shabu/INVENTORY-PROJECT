#include<stdio.h>
struct stock
{
 char Item_id[5],Item_name[50],Item_exp_date[10];
 int Item_price,Item_quantity,Item_tax,perishable;
};
int n,i;
void main()
{
 struct stock st[100];
 printf("\nEnter the no:of items to be added in the stock");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\n Enter the item id to add (starting with I eg:I001) : ");
  scanf("%s",&st[i].Item_id);
  printf("\n Enter the item name to add : ");
  scanf("%s",&st[i].Item_name);
  printf("Enter the item price : ");
  scanf("%d",&st[i].Item_price);
  printf("\n Enter the no:of quantity to be added");
  scanf("%d",&st[i].Item_quantity);
  printf("\n Enter item tax percentage : ");
  scanf("%d",&st[i].Item_tax);
  printf("\n Enter 0 if the item is not perishable and 1 if the item is perishable");
  scanf("%d",&st[i].perishable);
  printf("\n Enter the expiry date of the item if it is perishable");
  scanf("%s",&st[i].Item_exp_date);
   }
 show(n,st); 
}
