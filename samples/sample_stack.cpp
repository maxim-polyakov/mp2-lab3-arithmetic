#include "stack.h"
#include <iostream>
using namespace std;

int main()
{
	Stack<int> stack;
	stack.Push(5);
	stack.Push(6);
	stack.Push(4);
	stack.Push(7);
	stack.Push(8);
	stack.Push(13);

	cout <<"prosmotr verhnego elementa"<<stack.Peek() << endl;
	stack.Put();
	cout <<"prosmotr verhnego elementa posle udaleniya  "<<stack.Peek() << endl;
	cout << '\t' <<endl;
	stack.Push(5);
	cout <<"prosmotr verhnego elementa posle Push "<<stack.Peek() << endl;
	cout << '\t' <<endl;
	Stack<int> newStack(stack);
	cout <<"poka stack !IsEmpty vivodim "<<endl;
	while (!newStack.IsEmpty())
	cout <<newStack.Put()<<'\t';
	cout << endl;
	cout << '\t' <<endl;
	cout <<boolalpha;
	cout << '\t' <<endl;
	cout <<"pust li new stack? "<<(bool)newStack.IsEmpty() << endl;
	cout << '\t' <<endl;
	cout <<"top element stack "<<stack.Peek() << endl;//?
	
	return 0;
}