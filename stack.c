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

void Permutations_of_given_string(char *str, int start, int end)
{   //We will use two pointers that will show the start and the end of the string
    if (start == end)
    {  
        printf("%s\n", str);
    }
    //We will change the start and the end if the index of the sart character is smaller than the end. The start pointer of the start helps us itterate over the string
    else
    {
        for (int i = start; i <= end; i++)
        {
            swap(&str[start], &str[i]);
            Permutations_of_given_string(str, start + 1, end);
            swap(&str[start], &str[i]); // Geri dön
        }
    }
};
void charPermu(char *cht)
{   //find the length of a function with the help of the strlen function 
    int length = strlen(cht);
    Permutations_of_given_string(cht, 0, length - 1);
};
