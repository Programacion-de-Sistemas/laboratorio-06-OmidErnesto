#include<stdio.h>
#include<stdlib.h>

//definimos nuestra node
typedef struct node
{
    int number;
    struct node *next;
}
node;

node *ListNode(node *list)
{
    list = NULL;
    return list;
}

node *AddNode(node *list, int number)
{
    node *newNode;
    newNode= malloc(sizeof(node));
    newNode->number = number;
    newNode->next = NULL;
    if(list == NULL){
	list = newNode;
    }else{

    }
    return list;


}

int main(){

    node *list=NULL;

    //agregamos un elemento a la lista
    node *n = malloc(sizeof(node)); //asignando memoria para node
    if(n==NULL){
        return 1;
    }
    list = AddNode(list,1);

    // imprimir los elementos de la lista
    for (node *tmp = list;tmp!=NULL;tmp=tmp->next)
    {
        printf("%i\n",tmp->number);


    }

    // función (free) BUENA PR´ACTICA EN PROGRAMACI´ON EN "C"
    while(list!=NULL){
        node *tmp=list->next;
        free(list);
        list=tmp;
    }

    return 0;

}
