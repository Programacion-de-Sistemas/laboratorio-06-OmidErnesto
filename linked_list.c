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
	node *aux;
        aux=list;
	while(aux->next !=NULL){
	    aux = aux->next;
	}
	aux->next = newNode;
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
    list = AddNode(list,2);
    list = AddNode(list,3);
    list = AddNode(list,4);
    list = AddNode(list,5);
    list = AddNode(list,6);
    list = AddNode(list,7);
    list = AddNode(list,8);
    list = AddNode(list,9);
    list = AddNode(list,10);
    list = AddNode(list,20);
    list = AddNode(list,30);
    list = AddNode(list,50);
    list = AddNode(list,80);
    list = AddNode(list,100);

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
