#include<iostream>
#include<stdio.h>
#include "heap.h"
using namespace std;
bool comparator(int x, int y) 
{ return x < y; }
int main()
{
 
MaxHeap< int > myMaxHeap(comparator);
//PUSHING ELEMENTS INTO THE QUEUE
 myMaxHeap.push(15);
 myMaxHeap.push(14);
 myMaxHeap.push(11);
 myMaxHeap.push(16);
 myMaxHeap.push(10);
 //CHECKING SIE OF QUEUE
 cout<< "Size of the priority queue is "<<myMaxHeap.Size()<<endl;
 //CHECKING IF THE QUEUE IS EMPTY OR NOT
 cout<<"Is priority queue empty "<<myMaxHeap.isEmpty()<<endl;
 //RETURNING THE HIGHEST PRIORITY ELEMENT
 int h = myMaxHeap.top();	
cout<<"element with the highest priority is "<<h<<endl;
//PRINTING ALL ELEMENTS OF QUEUE ACC TO PRIORITY
	cout<<"Elements of the queue are : "<<endl;
	while(! myMaxHeap.isEmpty())
	{
		 int h = myMaxHeap.top();
		 cout<<h<<endl;
		 myMaxHeap.pop();
	}
	//AGAIN CHECKING THE SIZE OF QUEUE AFTER REMOVING ALL ELEMENTS
	cout<<"Now the size of queue is : "<<myMaxHeap.Size()<<endl;
	//AGAIN CHECKING IS QUEUE EMPTY
	cout<<"Checking if queue is empty : "<<myMaxHeap.isEmpty()<<endl;
	return 0;
}
