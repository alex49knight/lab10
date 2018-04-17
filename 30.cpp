#include<iostream>
using namespace std;
class maxheap{
private:
      int array[100];
      int length;
public:
      maxheap(){
           length=-1;
               }
void insert(int value);
void swap(int indexone,int indextwo);
void display();
};
void maxheap::swap(int indexone,int indextwo){
  int x=array[indextwo];
  array[indextwo]=array[indexone];
  array[indexone]=x;
}
void maxheap::display(){
for (int i=0;i<=length;i++){
                       cout<<array[i]<<" ";
                           }
  cout<<endl;
}
void maxheap::insert(int value){
 length++;
 int i=length;
 int parentindex=i;
 array[length]=value;
while(parentindex!=0){
       i=parentindex;
       parentindex=(parentindex-1)/2;
       if(array[parentindex]<array[i]){
                           swap(parentindex,i);
                                       }
                     }
}
int main(){
 maxheap newheap;
 newheap.insert(35);
 newheap.insert(40);
 newheap.insert(37);
 newheap.insert(50);
 newheap.insert(36);
 newheap.insert(45);
 newheap.display();
 return 0;
}


