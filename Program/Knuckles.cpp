#include "Knuckles.h"

class kunckles :public Weapon
{
public:
	kunckles();

	void Attack();
};

void kunckles::Attack()
{
	cout << "Knuckles Attack" << endl;
}
