#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
template<class Type>
class stacksType
{
private:
	int stackSize;
	int stackTop;
	Type* list

public:
	linklist();
	void initializeStack();
	void pop();
	void push(const Type& );
	bool isFull() const;
	bool isEmpty() const;
	Type top() const;
};
template<class Type>
void stacksType<Type>::initializeStack()
{
	stackTop=NULL;
}
template<class Type>
bool stacksType<Type>::isFull() const
{
	return (stackTop == stackSize);
}

template<class Type>
bool stacksType<Type>::isEmpty() const
{
	return (stackTop == NULL);
}
template<class Type>
void stacksType<Type>::push(const Type&)
{
	if (!isFull())
	{
		list[stackTop] = new;
		stackTop++;
	}
	else
	{
		cout << "Cannot add to stack" << endl;
	}
}

template<class Type>
void stacksType<Type>::pop()
{
	if (!isEmpty())
	{
		stackTop--;
	}
	else
	{
		cout << "Cannot remove" << endl;
	}
}
template<class Type>
Type stacksType<Type>::top() const
{
	assert(stackTp != 0);
	return list[stackTop - 1];
}
template<class Type>
int main()
{

	for (int i = 0; i < str.size(); i++) {
		if ((str.at(i) >= '0' && str.at(i) <= '9') || str.at(i) == '+' || str.at(i) == '-' || str.at(i) == '/' || str.at(i) == '*' || str.at(i) == ' ') {
		}
		if (str.at(i) == '{' || str.at(i) == '(') {
			st.push(str.at(i));
		}
		else if (!st.empty() && ((st.top() == '{' && str.at(i) == '}') || (st.top() == '(' && str.at(i) == ')')))
			st.pop();
	}
}