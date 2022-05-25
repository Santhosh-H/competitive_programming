#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insert_begin();
void insert_mid();
void insert_end();
void delete_begin();
void delete_mid();
void delete_end();
struct node{
    int info;
    struct node *next;
};
struct node *start=NULL;
void main()
{
int ch;
clrscr();
while(1)
 {
printf("\n MENU \n");
printf("\n 1.Create \n");
printf("\n 2.Display \n");
printf("\n 3.Insert at the beginning \n");
printf("\n 4.Insert at specified position \n");
printf("\n 5.Insert at the end\n");
printf("\n 6.Delete from beginning \n");
printf("\n 7.Delete from specified position\n");
printf("\n 8.Delete from end \n");
printf("\n 9.Exit \n");
printf("\n--------------------------------------\n");
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
 case 1:
create();
break;
 case 2:
display();
break;
 case 3:
insert_begin();
break;
 case 4:
insert_mid();
break;
 case 5:
insert_end();
break;
 case 6:
delete_begin();
break;
 case 7:
delete_mid();
break;
 case 8:
delete_end();
break;
 case 9:
exit(0);
break;
 default:
printf("\n Wrong Choice\n");
break;
}
}
}


