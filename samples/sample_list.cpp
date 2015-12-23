#include "list.h"
#include <iostream>
using namespace std;

int main()
{
	List<int> listSourse;
	listSourse.InsertLast(4);
	listSourse.InsertLast(3);
	listSourse.InsertLast(8);
	listSourse.InsertLast(5);
	listSourse.InsertLast(2);
	cout<<"vivod Sourcelista "<<endl;
	listSourse.Print();

	List<int> list1(listSourse);
	cout<<"vivod lista1 "<<endl;
	list1.Print();
	
	list1.InsertFirst(9);
		cout<<" InsertFirst "<<endl;
	list1.Print();

	list1.InsertLast(9);
	cout<<" InsertLast "<<endl;
	list1.Print();
	
	Node<int> *elem1 = new Node<int>;
	elem1->key = 9;
	list1.InsertBefore(2, elem1);
	cout<<" InsertBefore, sozdanie new elementa "<<endl;
	list1.Print();
		
	Node<int> *elem2 = new Node<int>;
	elem2->key = 10;
	list1.InsertAfter(2, elem2);
		cout<<" InsertAfter, sozdanie new elementa "<<endl;
	list1.Print();
	
	list1.erase(4);
		cout<<" erase(4) "<<endl;
	list1.Print();
	
	list1.erase(9);
		cout<<" erase(9) "<<endl;
	list1.Print();
	
	cout <<"firstelement "<<list1.getFirst()->key << endl;
		cout<<"listSource "<<endl;
	listSourse.Print();

	return 0;
}