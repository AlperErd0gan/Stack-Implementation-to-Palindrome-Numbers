//
//  stack.c
//  stack
//
//  
//

#include "stack.h"

int is_empty(struct node* top) {
    if(top==NULL){
        return 0;
    }
    else{
        return 1;
    }
}

void push(struct node** top, int value) {
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->value=value;
newnode->next=(*top);
(*top)=newnode;
}

int pop(struct node** top) {
int value;
struct node *gecici=(*top);
if((*top)==NULL){
    return -1;
}
else{
value=gecici->value;
(*top)=(*top)->next;
free(gecici);
return value;
}

}

int get_size(struct node* top) {
int lenght=0;
struct node *gecici=top;
if(top==NULL){
    return 0;
}
else{
while(gecici!=NULL){
lenght++;
gecici=gecici->next;
}
return lenght;
}
}


