
#include <iostream>
#include <queue>

using namespace std;
void showq(queue<int> q)
{
	queue<int> g = q;
	while (!g.empty()) {
		cout << '\t' << g.front();
		g.pop();
	}
	cout << '\n';
}

int main()
{
	queue<int> a;
	a.push(10);
	a.push(20);
	a.push(30);

	cout << "The queue gquiz is : ";
	showq(a);

	cout << a.size()<<endl;
	cout << a.front()<<endl;
	cout << a.back()<<endl;

	cout << "After pop funtion : ";
	a.pop();
	showq(a);

	return 0;
}
