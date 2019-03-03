#pragma once
#include <array>
#include <exception>

template <typename T>
class StackImpl {
public:
	virtual void Push(T value) = 0;
	virtual T& Top() = 0;
	virtual void Pop() = 0;
	virtual bool Empty() = 0;
};

template<typename T, size_t N = 256>
class Stack : public StackImpl<T> {

private:
	int count = 0;
	std::array<T, N> store;

public:
	const int& Count = count;

	void Push(T value) override {
		if (count == N)
		{
			throw std::out_of_range{ "Overflowed stack" };
			return;
		}

		store[count] = value;
		count++;
	}

	T& Top() override{
		return store[count-1];
	}
	void Pop() override {
		if (Empty())
		{
			throw std::invalid_argument{ "Stack is Empty" };
		}
		count--;
		store[count] = {};
	}
	bool Empty() override {
		return count == 0;
	}
};
