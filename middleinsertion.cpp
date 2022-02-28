#include<iostream>
using namespace std;
struct laptop{
	string mrk, jns;
	int prc;
	laptop *next;
};

laptop *head, *tail, *cur, *newNode;

void createSingleLinkedList(string mrk, string jns, int harga){
	head = new laptop();
	head->mrk = mrk;
	head->jns = jns;
	head->prc = harga;
	head->next = NULL;
	tail = head;
}

void addFirst(string mrk, string jns, int harga){
	newNode = new laptop();
	newNode->mrk = mrk;
	newNode->jns = jns;
	newNode->prc = harga;
	newNode->next = head;
	head = newNode;
}

void addMiddle(string mrk, string jns, int harga, int tempat){
	newNode = new laptop();
	newNode->mrk = mrk;
	newNode->jns = jns;
	newNode->prc = harga;
	cur = head;
	int NO = 1;
	while(NO < tempat - 1 ){
		cur = cur->next;
		NO++;
	}
	newNode->next = cur->next;
	cur->next = newNode;
}

void printSingleLinkedList(){
	cur = head;
	while(cur != NULL){
		cout << "Brand Laptop : "<< cur->mrk <<endl;
		cout << "Jenis Laptop : "<< cur->jns <<endl;
		cout << "Harga Laptop : "<< cur->prc <<endl;
		cur = cur->next;
	}
}

int main(){
	createSingleLinkedList("ASUS ROG", "Gaming Laptop", 50000000);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
	addFirst("HP Envy", "Content Creation Laptop", 20000000);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
	addMiddle("Acer Swift", "Slim Laptop", 10000000, 2);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
}