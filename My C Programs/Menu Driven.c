#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{

//Declaration and initialization of character and string
char str[30];
printf("Enter the string :");
scanf("%s",str);

int i;
//Declaration and assignment of pointers
char *ptr_str[30];

//Assigning address of each character of string to pointer array
for(i=0;i<strlen(str);i++)
ptr_str[i]=&str[i];


//Printing value and address of variables on output window
printf("\nString Entered is : %s\n Address of string :",str);
for(i=0;i<strlen(str);i++)
printf("\n%c's address : %p",str[i],ptr_str[i]);

getch();
}
