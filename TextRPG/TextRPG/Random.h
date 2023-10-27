#pragma once
#include <random>

class CRandom
{
private:
	std::random_device rd;
	std::mt19937 gen;
public:
	CRandom();
	~CRandom();
public:
	int getInt(int start, int end);
};

