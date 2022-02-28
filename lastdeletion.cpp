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

void removeLast(){
	del = tail;
	cur = head;
	while(cur->next != tail){
		cur = cur->next;
	}
	tail= cur;
	tail->next =NULL;
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
	createSingleLinkedList("Indobed", "Kasur Camping", 500000);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
	addLast("Superbed", "Kasur Jumbo", 3000000);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
	removeLast();
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
}