#pragma once

namespace StackExercise
{
	const int STACK_SIZE = 10;

	class IntStack
	{
	public:
		IntStack();

		void Push(int val);
		int Pop();

	private:
		int m_impl[STACK_SIZE];
		int m_nextIndex;
	};
}