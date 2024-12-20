﻿#include <iostream>
#include <thread>

using namespace std;

class Packet
{
private:
	int data;
public:
	Packet()
	{
		data = 100;

		cout << "Create Packet" << endl;
	}
	int Data()
	{
		return data;
	}

	~Packet()
	{
		cout << "Release Packet" << endl;
	}
};

// class Character
// {
// public:
// 	Character()
// 	{
// 		cout << "Create Character" << endl;
// 	}
// 
// 	~Character()
// 	{
// 		cout << "Release Character" << endl;
// 	}
// }

int main()
{
#pragma region 스마트 포인터
	// 포인터를 시뮬레이트하는 동시에 자동으로 메모리 관리를 해주며, 
	// 경계 확이노가 같은 추가 기능 제공하는 추상 데이터 포인터 형식입니다.
#pragma endregion

#pragma region Unique 포인터
	// 특정한 객체를 하나의 스마트 포인터만 가리킬 수 
	// 있도록 되어 있는 포인터입니다.

	// unique_ptr<Packet> uniquePointer1(new Packet); //= make_unique<Packet>();
	// 
	// cout << "uniquePointer1의 Data 값 : " << uniquePointer1->Data() << endl;
	// 
	// unique_ptr<Packet> uniquePointer2 = std::move(uniquePointer1);
	// 
	// cout << "uniquePointer1의 Data 값 : " << uniquePointer1->Data() << endl;
	// cout << "uniquePointer2의 Data 값 : " << uniquePointer2->Data() << endl;

#pragma endregion

#pragma region Shard 포인터
	// 하나의 자원 객체를 여러 포인터 객체가 가리킬 수 있으며, 
	// 모든 포인터 객체가 저원 객체를 필요하지 않을 때 자원 객체를 
	// 해제하도록 설계되어 있는 포인터입니다.

	// shared_ptr<Character>sharePointer1 = make_shared<Character>();
	// 
	// cout << "sharedPointer1의 참조 횟수 : " << sharePointer1.use_count() << endl;
	// 
	// shared_ptr<Character>sharePointer2 = make_shared<Character>();
	// 
	// cout << "sharedPointer1의 참조 횟수 : " << sharePointer1.use_count() << endl;

#pragma endregion

#pragma region Weak 포인터
	// 자원 객체를 소유하지 않기 때문에 Shared 포인터로 관리되는 
	// 자원 객체를 가리켜서 참조 개수에 영향을 미치지 않게 하는 포인텅입니다.



#pragma endregion


	return 0;
}