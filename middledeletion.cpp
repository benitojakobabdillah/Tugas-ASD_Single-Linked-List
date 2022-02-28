#include<iostream>
using namespace std;
struct laptop{
	string mrk, jns;
	int prc;
	laptop *next;
};

laptop *head, *tail, *cur, *newNode,*del, *after;

void createSingleLinkedList(string mrk, string jns, int harga){
	head = new laptop();
	head->mrk = mrk;
	head->jns = jns;
	head->prc = harga;
	head->next = NULL;
	tail = head;
}

int countSingleLinkedList(){
	cur = head;
	int NO = 0;
	while(cur != NULL){
		NO++;
		cur = cur->next;
	}
	return NO;
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

void removeMiddle(int tempat){
	if ( tempat < 1 || tempat > countSingleLinkedList() ){
		cout << "Tempat Diluar Batas " << endl;
	}else if( tempat == 1 || tempat == countSingleLinkedList() ){
		cout << "Tempat Tidak Di Tengah " << endl;
	} else {
	int NO = 1;
	cur = head;
	while (NO <= tempat){
		if (NO == tempat -1){
			after = cur;
		}
		if (NO == tempat){
			del = cur;
		}
		cur = cur->next;
		NO++;
	}
	after->next = cur;
	delete del;
	}
}

void printSingleLinkedList(){
	cout << "Nomor yang Terdata : " << countSingleLinkedList() << endl;
	cur = head;
	while(cur != NULL){
		cout << "Brand Laptop : "<< cur->mrk <<endl;
		cout << "Jenis Laptop : "<< cur->jns <<endl;
		cout << "Harga Laptop : "<< cur->prc <<endl;
		cur = cur->next;
	}
}

int main(){
	createSingleLinkedList("Alienware", "Gaming Hardcore Laptop", 65000000);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
	addFirst("Lenovo Ideapad", "Portable Laptop", 7000000);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
	addMiddle("ASUS Vivobook", "Thin Laptop", 17000000, 2);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
	addMiddle("Lenovo Legion", "Gaming Laptop", 30000000, 2);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
	removeMiddle(2);
	printSingleLinkedList();
	cout <<"\n\n"<<endl;
}