#include <stdio.h>

typedef struct product{
	
	const char *name;
	float price;
	
	struct product *next;
	
} product;

void printLinkedList(product *pProduct){
	
	while(pProduct != NULL){
		printf("A %s costs %.2f\n\n",
			   (*pProduct).name,
			   pProduct->price);
		
		pProduct = pProduct->next;
	}
}

void main(){
	//create single structs
	product tomato = {"Tomato", .51, NULL};
	product potato = {"Potato", 1.21, NULL};
	product lemon = {"Lemon", 1.69, NULL};
	product milk = {"Milk", 3.09, NULL};
	product turkey = {"Turkey", 1.86, NULL};
	
	//create Linked List
	tomato.next = &potato;
	potato.next = &lemon;
	lemon.next = &milk;
	milk.next = &turkey;
	
	//insert apple inbetween
	product apple = {"Apple", 1.58, NULL};
	//set new links
	lemon.next = &apple;
	apple.next = &milk;
	
	printLinkedList(&tomato);
	
}
