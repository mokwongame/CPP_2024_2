#include <iostream>
#include <vector>

int main(void)
{
	using namespace std;

	// 벡터(vector): xyz 좌표계 -> (x, y, z) -> 벡터의 예
	std::vector<int> vec = { -2, -1, 0 }; // 템플릿 vector의 기본 자료형을 int로 설정하여 변수 vec을 선언; 초기화 = {-2, -1, 0}

	vec.push_back(1); // vec: {1}
	vec.push_back(2); // vec: {1, 2}
	vec.push_back(3); // vec: {1, 2, 3}

	for (int i = 0; i < vec.size(); i++) // 반복문: 전통적인 C 언어 방식
	{
		std::cout << "coord = " << vec[i] << " @ i = " << i << std::endl;
	}

	vec.pop_back(); // vec: {1, 2}

	cout << endl;
	// 반복자(iterator): 새로운 C++ 언어 방식
	//for (int el : vec) // vec의 원소를 차례대로 가져와서 int 자료형인 el에 저장
	for (auto el : vec) // auto 자료형: 문맥에 맞게 자료형을 자동(auto)으로 설정
	{
		cout << "coord = " << el << endl;
	}

	return 0;
}