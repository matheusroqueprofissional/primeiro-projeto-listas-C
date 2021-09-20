#include<stdio.h>
#include<stdlib.h>

struct list{
int valor;
struct list *next;
}list;

void printlist(struct list *p)
{
 while (p!=NULL)
 {
     printf("%d", p->valor);
     p = p->next;
 }

}

int main(){
    int escolha;
printf("codigo iniciado\n lista simples[1] \n lista embaralhada[2]");
scanf("%d",&escolha);
struct list *head;
    struct list *one =NULL;
    struct list *two =NULL;
    struct list *three = NULL;
    struct list *four =NULL;
    struct list *five =NULL;
    struct list *six =NULL;
    struct list *seven =NULL;
one = malloc(sizeof(struct list));
two = malloc(sizeof(struct list));
three = malloc(sizeof(struct list));
four = malloc(sizeof(struct list));
five = malloc(sizeof(struct list));
six = malloc(sizeof(struct list));
seven = malloc(sizeof(struct list));

if(escolha == 1)
{




    one -> valor = 1;
    two -> valor = 2;
    three-> valor = 3;
    four -> valor = 4;
    five -> valor = 5;
    six -> valor = 6;
    seven -> valor = 7;

    one -> next = two -> next = three;
    three -> next = four;
    four -> next = five;
    five -> next = six;
    six -> next = seven;
    seven -> next = NULL;
head = one;
 printlist(head);
 return 0;
}


    one -> valor = 1;
    two -> valor = 2;
    three-> valor = 3;
    four -> valor = 4;
    five -> valor = 5;
    six -> valor = 6;
    seven -> valor = 7;

    one -> next =three;
    two -> next = five;
    three -> next = four;
    four -> next = six;
    five -> next = seven;
    six -> next = seven;
    seven -> next = NULL;

head = one;
printlist(head);


}
