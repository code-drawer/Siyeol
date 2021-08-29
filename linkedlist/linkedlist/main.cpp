#include <iostream>
#include <list>

using std::cout;
using std::cin;
using std::endl;

using std::list;

// 간단한 자료구조
// 자료구조: 여러개의 데이터들을 어떻게 저장하는지에 대한 방법론

// 배열은 값을 메모리에 순서대로 저장을 한다.

// 링크드 리스트는 값을 메모리에 순서대로 저장하지 않는다.

// 배열과 링크드리스트가 가장 간단한 컨테이너(값들을 저장할 수 있는 공간)

int main() {
	int a[]{ 10, 20, 30, 40, 50 }; // 배열

	list<int> li; // 링크드 리스트

	li.push_back(10);
	li.push_back(20);

	li.push_front(30);

	for (auto& elem : li)
		cout << elem << endl;

	return 0;
}