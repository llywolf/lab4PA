#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int Data;

typedef struct Node{
	Data val;
	struct Node *next;
} Node;

void addAtBeginning();
void addAtEnd();
void display();
void addAtPos();
void actualizare();
