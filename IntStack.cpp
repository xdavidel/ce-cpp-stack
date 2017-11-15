#include "IntStack.h"
#include "StackOverflowException.h"
#include "StackUnderflowException.h"

namespace StackExercise
{

	IntStack::IntStack()
		: m_nextIndex(0)
	{}

	void IntStack::Push(int val)
	{
		if (m_nextIndex < STACK_SIZE)
		{
			m_impl[m_nextIndex] = val;
			++m_nextIndex;
		}
		else
		{
			throw StackOverflowException();
		}
	}

	int IntStack::Pop()
	{
		if (m_nextIndex > 0)
		{
			--m_nextIndex;
			return m_impl[m_nextIndex];
		}
		else
		{
			throw StackUnderflowException();
		}
	}
}
