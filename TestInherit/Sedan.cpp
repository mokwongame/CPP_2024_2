#include "Sedan.h"

// pulblic 상속
// 부모의 public 멤버 -> public으로 접근(자식이 사용가)
// 부모의 protected 멤버 -> protected로 접근(자식이 사용가)
// 부모의 private 멤버 -> private으로 접근(자식이 사용 불가)

// protected 상속
// 부모의 public 멤버 -> protected로 접근(자식이 사용가)
// 부모의 protected 멤버 -> protected로 접근(자식이 사용가)
// 부모의 private 멤버 -> private으로 접근(자식이 사용 불가)

// private 상속
// 부모의 public 멤버 -> private으로 접근(자식이 사용 불가)
// 부모의 protected 멤버 -> private으로 접근(자식이 사용 불가)
// 부모의 private 멤버 -> private으로 접근(자식이 사용 불가)

Sedan::Sedan(void)
{
	// m_name과 m_maxSpeed는 Car의 멤버; 상속을 통해서 부모 클래스의 멤버 접근 가능
	m_name = "승용차";
	m_maxSpeed = 300.;
}
