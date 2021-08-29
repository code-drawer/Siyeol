#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

// 부모 클래스
class 무기 {
public:
	virtual void attack() = 0; // 이 클래스를 추상 클래스로 만들기 위해 사용
};

// 자식 클래스들
class 칼 : public 무기 {
	void attack() {
		cout << "적을 베어 넘겼다." << endl;
	}
};

class 대포 : public 무기 {
	void attack() {
		cout << "적선에 대포를 쏴 침몰시켰다." << endl;
	}
};

class 총 : public 무기 {
	void attack() {
		cout << "적의 심장에 총알이 관통되었다." << endl;
	}
};

// 포인터: 주소값을 가리키는 것

int main() {
	무기* 무기포인터; // 포인터 변수 선언
	// 무기포인터 라는 이름의 포인터 변수 선언
	// 포인터변수는 값으로 다른 변수 또는 함수 또는 객체의 주소값을 가짐


	칼 환도;
	무기포인터 = &환도; // 환도 객체의 주소값을 반환
	// 여기서의 &는 피연산자의 주소값을 반환하는 역할

	무기포인터->attack();

	대포 머포;
	무기포인터 = &머포;
	무기포인터->attack();

	총 글록;
	무기포인터 = &글록;
	무기포인터->attack();


	return 0;
}
