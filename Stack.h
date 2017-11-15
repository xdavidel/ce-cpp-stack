#pragma once
#include "StackOverflowException.h"
#include "StackUnderflowException.h"

namespace StackExercise
{
	template <typename T, size_t STACK_SIZE = 10>
	class Stack
	{
	public:
		Stack()
			:m_nextIndex(0) 
		{}

		void Push(T val)
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
		T Pop()
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

	private:
		T m_impl[STACK_SIZE];
		int m_nextIndex;
	};
}