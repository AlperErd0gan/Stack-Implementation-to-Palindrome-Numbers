//
//  main.c
//  stack
//
//  
//

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
int is_palindrome(int number) {
    int temp=number;
    if (number==0){
        return 1;
    }
    int lastdigit=0;
    int ters_sayım=0;
    struct node* top = NULL;
    while (number>0){
     lastdigit=number%10;
     number=number/10;
     push(&top,lastdigit);
    }
    int i=1;
    while(is_empty(top)){
     ters_sayım+=pop(&top)*i;
     i*=10;
    }
    if(temp==ters_sayım){
        return 1;
    }
    else{
        return 0;
    }
    
}

int main(int argc, const char * argv[]) {
    int i = 0;
    int N = 3;
    int arr[] = {0, 123, 232};
    for(i=0; i<N; i++) {
        if(is_palindrome(arr[i])) {
            printf("%d is a palindrome number \n", arr[i]);
        } else {
            printf("%d is not a palindrome number \n", arr[i]);
        }
    }
    return 0;
}


