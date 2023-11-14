#include <stdio.h>
#include <stdlib.h>


struct node 
{
    char *data ;
    struct node *link;
};

int main ()
{
    struct node *head = NULL;
    head  = malloc(sizeof(struct node));

    head ->data = "zaki";
    head ->link = NULL;

    struct node *currant ;
    currant = malloc(sizeof(struct node));
    currant ->data = "reda";
    currant ->link = NULL ;
    head ->link =currant;

    currant = malloc(sizeof(struct node));
    currant ->data = "kk";
    currant ->link = NULL;
    head->link->link = currant;

    printf("%s , %s, %s",head->data ,->data ,currant->data);     
}