#include<iostream>
using namespace std;
struct helm{
	string mrk, jns;
	int prc;
	helm *next;	
};

helm *head, *tail, *cur, *newNode;

void createSingleLinkedList(string mrk, string jns, int harga){
	head = new helm();
	head->mrk = mrk;
	head->jns = jns;
	head->prc = harga;
	head->next = NULL;
	tail = head;	
}

void addLast(string mrk, string jns, int harga){
	newNode = new helm();
	newNode->mrk = mrk;
	newNode->jns = jns;
	newNode->prc = harga;
	newNode->next = NULL;
	tail->next = newNode;
	tail=newNode;
}

void printSingleLinkedList(){
	cur = head;
	while(cur != NULL){
		cout << "Brand Helm : "<< cur->mrk <<endl;
		cout << "Jenis Helm : "<< cur->jns <<endl;
		cout << "Harga Helm : "<< cur->prc <<endl;
		cur = cur->next;
	}
}

int main(){
	createSingleLinkedList("Shark", "GP Helmet", 15000000);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
	addLast("INK", "Slowride Helmet", 300000);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
}