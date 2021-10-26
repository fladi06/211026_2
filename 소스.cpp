#include <iostream>

using namespace std;

int main()
{
	//변수 사용하기
	/*
	int num; 

	num = 3; 

	cout << "변수 num의 값은 " << num << "입니다." << endl;
	*/

	//변수의 값 바꾸기
	/*
	int num = 3;

	cout << "변수 num의 값은" << num << "입니다." << endl;
	 
	num = 5; 

	cout << "변수 num의 값이 바뀌었습니다." << endl;
	cout << "변수 num의 새로운 값은 " << num << "입니다." << endl;
	*/

	//다른 변수에 값 대입하기
	/*
	int num1, num2;
	num1 = 3;
	cout << "변수 num1의 값은 " << num1 << "입니다." << endl;

	num2 = num1;

	cout << "변수 num1의 값을 num2에 대입했습니다." << endl;
	cout << "변수 num2의 값은 " << num2 << "입니다." << endl;
	*/

	//값 대입하기
	/*
	int num1;
	double num2;

	num1 = 3.14;
	num2 = 3.14;

	cout << "변수 num1의 값은 " << num1 << "입니다." << endl;
	cout << "변수 num2의 값은 " << num2 << "입니다." << endl;
	*/

	//변수의 값 바꾸기 
	/*
	int num = 0;

	cout << "숫자를 입력하시오. " << endl;
	cin >> num;

	cout << num << "(이)가 입력되었습니다." << endl;
	*/

	//2개 이상의 숫자를 연속해서 입력받기
	/*
	int num1, num2;

	cout << "정수 2개를 입력하시오." << endl;

	cin >> num1 >> num2;

	cout << "먼저" << num1 << "(이)가 입력되었습니다." << endl;
	cout << "그 다음으로 " << num2 << "(이)가 입력되었습니다." << endl;
	*/

	//상수 이용하기
	/*
	const double pi = 3.1415;

	cout << "원주율의 값은" << pi << "입니다." << endl;
	cout << "원주율의 값은 바뀌지 않습니다." << endl;
	*/

	//예제
	/*
	1. 원주율의 값은 얼마입니까?
	2. 3.14 입력받기
	3. 원주율의 값은 3.14입니다. 
	*/

	/*
	double num = 3.14;
	cout << "원주율의 값은 얼마입니까?" << endl;
	cin >> num;

	cout << "원주율의 값은" << num << "입니다." << endl;
	*/

	//예제
	/*
	1. 알파벳의 첫 글자는 무엇입니까?
	2. a 입력받기
	3. 알파벳 첫 글자는 a 입니다.
	*/
	/*
	char C;

	cout << "알파벳의 첫 글자는 무엇입니까?" << endl;

	cin >> C;
	
	cout << "알파벳 첫 글자는" << C << "입니다." << endl;
	*/

	//예제
	/*
	1. 키와 몸무게를 입력하십시오. 
	2. 165.2 입력받기
	3. 52.5 입력받기
	4. 키는 165.2센티미터 입니다. 
	5. 몸무게는 52.5 킬로그램입니다.
	*/
	/*
	double A, B;
	cout << "키를 입력하시오. " << endl;
	cin >> A;

	cout << "몸무게를 입력하십시오." << endl;
	cin >> B;

	cout << "키는 " << A << "센티미터 입니다." << endl;
	cout << "몸무게는" << B << "킬로그램입니다." << endl;
	*/
	return 0;
}