#include<iostream>
#include<stack>

using namespace std;

void DisplayList(stack<int> st)
{
	while (!st.empty())
	{
		cout << st.top()<<",";
		st.pop();
	}

	cout << endl;
}

int main()
{
	stack<int> st;
	st.push(5);
	st.push(4);
	st.push(3);
	st.push(2);
	st.push(1);

	DisplayList(st);

	cout << "Peek value is : " << st.top() << endl;
	st.pop();
	cout << "New peek value is : " << st.top() << endl;
	cout << "Stack count is : " << st.size() << endl;
	cout << "Is Stack empty : " << st.empty() << endl;


	//ListeyiGoster();
}