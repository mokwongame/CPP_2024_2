#include <iostream>
#include <vector>

int main(void)
{
	using namespace std;

	// ����(vector): xyz ��ǥ�� -> (x, y, z) -> ������ ��
	std::vector<int> vec = { -2, -1, 0 }; // ���ø� vector�� �⺻ �ڷ����� int�� �����Ͽ� ���� vec�� ����; �ʱ�ȭ = {-2, -1, 0}

	vec.push_back(1); // vec: {1}
	vec.push_back(2); // vec: {1, 2}
	vec.push_back(3); // vec: {1, 2, 3}

	for (int i = 0; i < vec.size(); i++) // �ݺ���: �������� C ��� ���
	{
		std::cout << "coord = " << vec[i] << " @ i = " << i << std::endl;
	}

	vec.pop_back(); // vec: {1, 2}

	cout << endl;
	// �ݺ���(iterator): ���ο� C++ ��� ���
	//for (int el : vec) // vec�� ���Ҹ� ���ʴ�� �����ͼ� int �ڷ����� el�� ����
	for (auto el : vec) // auto �ڷ���: ���ƿ� �°� �ڷ����� �ڵ�(auto)���� ����
	{
		cout << "coord = " << el << endl;
	}

	return 0;
}