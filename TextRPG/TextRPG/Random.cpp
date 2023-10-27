#include "Random.h"
using namespace std;

CRandom::CRandom() : gen{rd()}
{
}

CRandom::~CRandom()
{

}

int CRandom::getInt(int start, int end)
{
	uniform_int_distribution<int> dist(start, end);

	return dist(this->gen);
}