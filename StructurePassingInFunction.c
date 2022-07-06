/*
Write a ‘C’ program to accept book details as book number, name, price,
publication using structure concept
*/

/*
ALGORITHM:
create a struct variable
create a void output function which takes struct structName objNam[] as input to access struture
create a main function which struct structName objName[size] to access structure
accept data in loop inside main as struct accepts and store data randomly inside memory.
call output function
write printing data in loop code inside output function using var t as book No. and in loop calling variables for particular Loop Cycle.
i.e MAIN:loop 1 data accepted > loop 2 data accepted using STRUCT obj[size] variable
i.e PUTPUT: loop 1 print data of ACCEPTED IN loop 1 > loop 2 print data of ACCEPTED IN loop 2 using STRUCT obj[] function after data is accepted
*/

#include<stdio.h>
#include<string.h>
#define SIZE 20
//struct datastrucute to store variable
struct book_detail
{
	char name[20];
	char author[20];
	int pages;
	float price;
};
//struct variable inside a output function() as struct name objectName[] to ACCESS STRUCT OBJ inside OTHER FUNCTION
void output(struct book_detail v[], int n); 

void main()
{   
    //struct object inside main  B= struct object for ACCESSTIN STRUCT OBJ IN MAIN
	struct book_detail b[SIZE];
	int n,i;
    //accept data with loop
	printf("Enter the number of books: ");
	scanf("%d", &n);

	for(i=0;i<n;i++)
	{
		printf("\n\t=:Book %d Detail:=\n", i+1); //n= 3 then i<n i<3 then time t= i+1; t= 1+1 > t=2+1 till t=3+1
		printf("\nEnter the Book Name:\n");
		scanf("%s", b[i].name);
		printf("Enter the Author of Book:\n");
		scanf("%s", b[i].author);          //for string we don't use & and use %s specifier 
		printf("Enter the Pages of Book:\n");
		scanf("%d",&b[i].pages);
		printf("Enter the Price of Book:\n");
		scanf("%f",&b[i].price);
	}
    //calling output by passing data b & n
	output(b,n);
}

void output(struct book_detail v[], int n)
{
	int i,t=1;
    //PRINTING IN LOOP
	for(i=0;i<n;i++,t++)
	{
		printf("\n");
		printf("Book No.%d\n", t);
		printf("\t\tBook %d Name is = %s \n", t,v[i].name);
		printf("\t\tBook %d Author is = %s \n", t,v[i].author);
		printf("\t\tBook %d Pages is = %d \n", t,v[i].pages);
		printf("\t\tBook %d Price is = %f\n", t,v[i].price);
		printf("\n");
	}
}
