#include<iostream>
using namespace std;
struct kasur{
	string mrk, jns;
	int prc;
	kasur *next;
};

kasur *head, *tail, *cur, *newNode, *del;

void createSingleLinkedList(string mrk, string jns, int harga){
	head = new kasur();
	head->mrk = mrk;
	head->jns = jns;
	head->prc = harga;
	head->next = NULL;
	tail = head;	
}

void addLast(string mrk, string jns, int harga){
	newNode = new kasur();
	newNode->mrk = mrk;
	newNode->jns = jns;
	newNode->prc = harga;
	newNode->next = NULL;
	tail->next = newNode;
	tail=newNode;
}

void removeFirst(){
	del = head;
	head = head->next;
	delete del;
}

void printSingleLinkedList(){
	cur = head;
	while(cur != NULL){
		cout << "Brand Kasur : "<< cur->mrk <<endl;
		cout << "Jenis Kasur : "<< cur->jns <<endl;
		cout << "Harga Kasur : "<< cur->prc <<endl;	
		cur = cur->next;
	}
}

int main(){
	createSingleLinkedList("Olympic", "Spring Bed", 2500000);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
	addLast("Bola Dunia", "Kasur Lipat", 1000000);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
	removeFirst();
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
}