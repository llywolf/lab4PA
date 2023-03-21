#include "liste.h"

void addAtBeginning(Node **head, Data v)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->val = v;
	newNode->next = *head;
	*head = newNode;
}

void addAtEnd(Node** head, Data v)
{
	Node *aux=*head;
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->val = v;
	if (*head == NULL) addAtBeginning(&*head, v);
	else{
		while (aux->next!=NULL) aux = aux->next;
		aux->next = newNode;
		newNode->next = NULL;
	}
}

void display(Node *head)
{
	while (head!=NULL){
		printf ("%d ", head->val);
		head=head->next;
	}
	printf("\n");
}

void addAtPos ( Node** head , Data v, int pos ){
    Node* aux, *headcopy = *head;
    int p =0;
    if(head != NULL){
        Node *newNode = (Node* )malloc(sizeof(Node));
        newNode->val = v;
        while(headcopy != NULL && p < pos){
            aux = headcopy;
            headcopy = headcopy->next;
            p++;
        }
        if(pos == 0)
            addAtBeginning( head, v);
        else{
            aux->next = newNode;
            newNode->next = headcopy;
        }
    }
    else if(pos == 0)
        addAtBeginning(head, v);
}

void actualizare(Node** head, int nrFunctii){
    Node *headcopy = *head,*aux = *head;
    int k=0;
    while(nrFunctii){
        headcopy = *head;
        int timpTotal=0;
        for(int i = 0; i < k; i++)
            headcopy = headcopy->next;
        while(headcopy != NULL){
                timpTotal += headcopy->val;
                headcopy = headcopy->next;
            }
        aux->val = timpTotal;
        aux = aux->next;
        nrFunctii--;
        k++;
    }
}
