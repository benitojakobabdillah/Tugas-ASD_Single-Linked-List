#include<iostream>
using namespace std;
struct helm{
	string jns, mrk;
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

void addFirst(string mrk, string jns, int harga){
	newNode = new helm();
	newNode->mrk = mrk;
	newNode->jns = jns;
	newNode->prc = harga;
	newNode->next = head;
	head = newNode;
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
	createSingleLinkedList("Arai", "Racing Helmet", 1000000);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
	addFirst("KYT", "Standard Helmet", 850000);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
}