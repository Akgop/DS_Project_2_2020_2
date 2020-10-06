#pragma once

#include <set>
#include <map>
using namespace std;

class SubSetNode
{
private:
	int frequency;		// subset frequency
	multimap<int, set<string> > SubSetList;	//first is subset size, second is subset data

public:
	SubSetNode() { frequency = 0; }
	~SubSetNode() { SubSetList.clear(); }
	void setFrequency(int frequency) { this->frequency = frequency; }
	void InsertList(set<string> item) { SubSetList.insert(multimap<int, set<string>>::value_type(item.size(),item)); }
	int getFrequency() { return frequency; }
	multimap<int, set<string> > getList() { return SubSetList; }
};


