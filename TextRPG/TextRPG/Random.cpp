#include "Random.h"
using namespace std;

CRandom::CRandom() : gen{rd()}
{
}

CRandom::~CRandom()
{

}

int CRandom::getInt(size_t start, size_t end)
{
	uniform_int_distribution<size_t> dist(start, end);

	return dist(this->gen);
}