#include<iostream>
using namespace std;
class titik{
public:
int data;
titik*next;
titik(int d){
    data=d;
    titik*next= NULL;
   }
};
void insertAt(titik*&head, int data){
   titik*n= new titik(data);
   n->next= head;
   head= n;
}
bool searchSequential(titik*head,int key){
   if(head==NULL){
      return false;
   }
   if(head->data==key){
      return true;
   }
   else{
      return searchSequential(head->next, key);
   }
}
void printNode(titik*head){
   while(head!=NULL){
      cout<<head->data<<"->";
      head=head->next;
   }
   cout<<endl;
}
int main(){
   titik*head= NULL;
   insertAt(head,5);
   insertAt(head,4);
   insertAt(head,3);
   insertAt(head,2);
   insertAt(head,1);
   printNode(head);
   if(searchSequential(head,5)){
      cout<<"Ada"<<endl;
   }
   else{
      cout<<"Tidak Ada"<<endl;
   }
}