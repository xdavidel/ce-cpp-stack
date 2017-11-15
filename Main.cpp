#include <iostream>
#include "IntStack.h"
#include "Stack.h"

int main()
{
	StackExercise::Stack<int> s;
	s.Push(5);
	s.Push(6);
	s.Pop();
	s.Push(-1);

	return 0;
}