#include <iostream> 
#include "linkedstack.h" 
using namespace std;
void testCopy(linkedStackType<int> OStack);
int main()
{
	linkedStackType<int> stack;
	int num;
	stack.push(34);
	stack.push(43);
	stack.push(27);

	while (!stack.isEmptyStack())
	{
		stack.pop(num);
		cout << num << " ";
	}


	system("pause");
	return 0;
}
