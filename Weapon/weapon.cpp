#include <iostream>
#include <vector>
#include <Windows.h>

class Weapon {
public:
	virtual void Action1() = 0;
	virtual void Action2() = 0;
};

class Knife : public Weapon {
public:
	virtual void Action1() {
		std::cout << "Get a knife\n";
	}
	virtual void Action2() {
		std::cout << "Throw the knife!\n";
	};
};

class Gun : public Weapon {
public:
	virtual void Action1() {
		std::cout << "Aim your Gun!\n";
	}
	virtual void Action2() {
		std::cout << "Shoot your Gun!\n";
	};
};

class Machine_gun : public Weapon {
public:
	virtual void Action1() {
		std::cout << "Aim with a mashine gun!\n";
	}
	virtual void Action2() {
		std::cout << "Hit the target\n";
	}
};

class Shotgun : public Weapon {
public:
	virtual void Action1() {
		std::cout << "Aim with a Shotgun!\n";
	}
	virtual void Action2() {
		std::cout << "Shoot the Shotgun!\n";
	};
};

class Sniper_rifle : public Weapon {
public:
	virtual void Action1() {
		std::cout << "Aim with a Sniper Rifle!\n";
	}
	virtual void Action2() {
		std::cout << "Shoot the Sniper_rifle!\n";
	};
};

class Grenade : public Weapon {
public:
	virtual void Action1() {
		std::cout << "Aim with a Grenade!\n";
	}
	virtual void Action2() {
		std::cout << "Throw the grenade!\n";
	};
};

class Bazooka : public Weapon {
public:
	virtual void Action1() {
		std::cout << "Aim with Bazooka!\n";
	}
	virtual void Action2() {
		std::cout << "Shoot the Bazooka!\n";
	};
};

int main()
{
	std::vector<Weapon*> vec;

	vec.push_back(new Knife);
	vec.push_back(new Gun);
	vec.push_back(new Machine_gun);
	vec.push_back(new Shotgun);
	vec.push_back(new Sniper_rifle);
	vec.push_back(new Grenade);
	vec.push_back(new Bazooka);

	int i = -1;

	while (true)
	{
		if (GetKeyState('0') < 0) {
			std::cout << "We are using Knife!\n";
			i = 0;
			Sleep(200);
		}

		else if (GetKeyState('1') < 0) {
			std::cout << "We are using Gun!\n";
			i = 1;
			Sleep(200);
		}

		else if (GetKeyState('2') < 0) {
			std::cout << "We are using Machine gun!\n";
			i = 2;
			Sleep(200);
		}

		else if (GetKeyState('3') < 0) {
			std::cout << "We are using Shotgun!\n";
			i = 3;
			Sleep(200);
		}

		else if (GetKeyState('4') < 0) {
			std::cout << "We are using Sniper rifle!\n";
			i = 4;
			Sleep(200);
		}

		else if (GetKeyState('5') < 0) {
			std::cout << "We are using Grenade!\n";
			i = 5;
			Sleep(200);
		}

		else if (GetKeyState('6') < 0) {
			std::cout << "We are using Bazooka!\n";
			i = 6;
			Sleep(200);
		}

		else if (GetKeyState(VK_SPACE) < 0) {
			if (i < 0) std::cout << "We don't have weapon!\n";
			else vec[i]->Action1();
			Sleep(200);
		}

		else if (GetKeyState(VK_RETURN) < 0) {
			if (i < 0) std::cout << "We don't have weapon!\n";
			else vec[i]->Action2();
			Sleep(200);
		}

		else if (GetKeyState(VK_ESCAPE) < 0) break;
	}
}