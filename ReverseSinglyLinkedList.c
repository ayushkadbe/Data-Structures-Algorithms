//INSERTING A NEWNODE: TRAVERSING/SHIFTING A NEWNODE TO IT'S NEXT NODE USING HEAD POINTER.
//newnode -> next = head       head = newnode
//[N.N] [Next]  => [N.N] [Next = Head]   => [Previous Node] [head = N.N] NOW AGAIN IN LOOP, [N.N ] [NEXT = HEAD]

/* ALGORITHM 
   >Structure node
   >List Insertion using For 1)No. of NODES input //loop for memory allocation(INPUT OF DATA) and traversing
   >Bring Newnode to list else Traverse the newnode to next using head pointer
   >Display Linkedlist using For loop or while loop

*/

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){
    //struct variables
    struct node *newnode, *temp, *head;
    //initialization
    int i, n;
    head = temp = NULL;
    //input no. of nodes
    printf("Enter no. of nodes required:");
    scanf("%d", &n);

    //loop for memory allocation and traversing
    for(i=0; i<n; i++){
        //memory allocation
		newnode=(struct node*)malloc(sizeof(struct node*));
        //input data
        printf("Enter the data:");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        //TRAVERSING
        if(head==NULL){
            head=temp=newnode;
        }else{
		//INITIALLY newnode->next=head with Newnode as pointer
            newnode->next=head;
		//SHIFT newnode to Head as pointer
            head=newnode;
            
        }

    }

    //Display
    temp = head;

    //Head traverse from initial head = null, to newnode->next = head > again in loop for next nodes

    while (temp != NULL)
    {
        printf(" %d",temp->data);
       
        temp = temp->next;
    }
    


}
