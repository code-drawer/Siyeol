#include <iostream>
#include <list>

using std::cout;
using std::cin;
using std::endl;

using std::list;

// ������ �ڷᱸ��
// �ڷᱸ��: �������� �����͵��� ��� �����ϴ����� ���� �����

// �迭�� ���� �޸𸮿� ������� ������ �Ѵ�.

// ��ũ�� ����Ʈ�� ���� �޸𸮿� ������� �������� �ʴ´�.

// �迭�� ��ũ�帮��Ʈ�� ���� ������ �����̳�(������ ������ �� �ִ� ����)

int main() {
	int a[]{ 10, 20, 30, 40, 50 }; // �迭

	list<int> li; // ��ũ�� ����Ʈ

	li.push_back(10);
	li.push_back(20);

	li.push_front(30);

	for (auto& elem : li)
		cout << elem << endl;

	return 0;
}