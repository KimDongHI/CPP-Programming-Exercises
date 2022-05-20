#pragma once
#include "Monster.h"
#include <time.h>

class Zombie : public Monster {
public:
	Zombie(string n = "허접좀비", string i = "§", int x = 0, int y = 0)
		: Monster(n, i, x, y) {}
	~Zombie() { cout << " Zombie"; }
};

class Vampire : public Monster {
public:
	Vampire(string n = "뱀파이어", string i = "★", int x = 0, int y = 0)
		: Monster(n, i, x, y) {}
	~Vampire() { cout << " Vampire"; }

	void move(int** map, int maxx, int maxy) {
		int dir = rand() % 4;
		if (dir == 0) x--;
		else if (dir == 1) x++;
		else if (dir == 2) y--;
		else y++;
		clip(maxx, maxy);
		eat(map);
	}
};

class KGhost : public Monster {
public:
	KGhost(string n = "처녀귀신", string i = "♥", int x = 0, int y = 0)
		: Monster(n, i, x, y) {}
	~KGhost() { cout << " KGhost"; }

	void move(int** map, int maxx, int maxy) {
		x = rand() % maxx;
		y = rand() % maxy;
		clip(maxx, maxy);
		eat(map);
	}
};

class Jiangshi : public Monster {
protected:
	bool	bHori;
public:
	Jiangshi(string n = "대륙강시", string i = "↔", int x = 0, int y = 0, bool bH = true)
		: Monster(n, i, x, y), bHori(bH) {}
	~Jiangshi() { cout << " Jiangshi"; }

	void move(int** map, int maxx, int maxy) {
		int dir = rand() % 2;
		int jump = rand() % 2 + 1;
		if (bHori) x += ((dir == 0) ? -jump : jump);
		else y += ((dir == 0) ? -jump : jump);
		clip(maxx, maxy);
		eat(map);
	}
};

class Smombi : public Monster
{
public:
	Smombi(string n = "스몸비", string i = "♨", int x = 0, int y = 0)
		:Monster(n, i, x, y) {}
	~Smombi() { cout << " Smombi "; }

	void move(int** map, int maxx, int maxy)
	{
		int dir = rand() % 4;
		if (dir == 0)
		{
			x--;
			y--;
		}
		else if (dir == 1)
		{
			x--;
			y++;
		}
		else if (dir == 2)
		{
			x++;
			y--;
		}
		else
		{
			x++;
			y++;
		}
		clip(maxx, maxy);
		eat(map);
	}
};

class Sianshi : public Jiangshi
{
	int timer = 0;


public:
	Sianshi(string n = "수퍼 강시", string i = "∬", int x = 0, int y = 0, bool bH = true)
		: Jiangshi(n, i, x, y)
	{
		bHori = bH;
	}
	~Sianshi() { cout << " Sianshi "; }

	void move(int** map, int maxx, int maxy)
	{
		int dir = rand() % 2;
		int jump = rand() % 2 + 1;

		if (bHori)
		{
			x += ((dir == 0) ? -jump : jump);
			if (timer == 10)
			{
				timer = 0;
				bHori = false;
			}
			else timer += 1;
		}

		else
		{
			y += ((dir == 0) ? -jump : jump);
			if (timer == 10)
			{
				timer = 0;
				bHori = true;
			}
			else timer += 1;

		}
		clip(maxx, maxy);
		eat(map);
	}


};

class Donghui : public KGhost
{
public:
	Donghui(string n = "나만의 몬스터", string i = "♣", int x = 0, int y = 0)
		: KGhost(n, i, x, y) {}
	~Donghui() { cout << " Donghui "; }

	void move(int** map, int maxx, int maxy) {
		x = rand() % maxx + 1;
		y = rand() % maxy + 1;
		clip(maxx, maxy);
		eat(map);
	}
};