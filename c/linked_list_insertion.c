#include<stdio.h>
struct node{
    int data;
    struct node * ptr;
};
void traversal(struct node*next){
    while(next!=NULL){
        printf("ELEMENT : %d\n", next->data);
        next = next->ptr;
    }

}
struct node * insertion_begining(struct node*head, int data){
    struct node * next = (struct node * )malloc(sizeof(struct node));
    next->ptr = head;
    next->data = data;
    return next;

}
struct node * insertion_between(struct node*head, int data, int index){
    struct node * next = (struct node*)malloc(sizeof(struct node));
    struct node * p = head;
    int i =0 ;
    while(i!=index-1){
        p = p->next;
        i++;
    }
    next->data data;
    next->ptr = p->ptr;
    p->ptr = next;
};

int main(){
    struct node * head  = (struct node*)malloc(sizeof(struct node));
    struct node * first  = (struct node*)malloc(sizeof(struct node));
    struct node * second  = (struct node*)malloc(sizeof(struct node));
    struct node * third = (struct node*)malloc(sizeof(struct node));
    head->data = 10;
    head->ptr  = first;
    first->data = 11;
    first->ptr  = second;
    second->data = 12;
    second->ptr  = third;
    third->data = 13;
    third->ptr = NULL;
    traversal(head);
    head = insertion_between(head, 56, 1);
    traversal(head);
}
