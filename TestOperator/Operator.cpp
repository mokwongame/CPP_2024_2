#include "Point2.h"

int main(void)
{
	using namespace std;

	Point2 pt(5, 7);
	pt.print(); cout << endl;
	Point2 pt2;
	pt2 = pt; // �̶��� �Ҵ� ������(operator=)�� ȣ���
	pt2.print();
	cout << endl << pt2 << endl << pt << endl;

	Point2 pt3 = pt + pt2;
	cout << endl << "pt3 = " << pt3 << endl;
	return 0;
}