#include "BpTree.h"

bool BpTree::Insert(int key, set<string> set) {

	return true;
}

BpTreeNode* BpTree::searchDataNode(int n) {
	BpTreeNode* pCur = root;
	
	return pCur;
}

void BpTree::splitDataNode(BpTreeNode* pDataNode) {
	
}

void BpTree::splitIndexNode(BpTreeNode* pIndexNode) {
	
}
bool BpTree::excessDataNode(BpTreeNode* pDataNode) {
	if (pDataNode->getDataMap()->size() > order - 1) return true;//order is equal to the number of elements 
	else return false;
}

bool BpTree::excessIndexNode(BpTreeNode* pIndexNode) {
	if (pIndexNode->getIndexMap()->size() > order - 1)return true;//order is equal to the number of elements 
	else return false;
}


bool BpTree::printConfidence(string item, double item_frequency, int min_frequency)
{

	return true;
}
bool BpTree::printFrequency(string item, int min_frequency)//print winratio in ascending order
{

	return true;
}
bool BpTree::printRange(string item, int min, int max) {

	return true;
}
void BpTree::printSubset(set<string> pSubset, string item) {
	*fout << "{";
	set<string> curSet = pSubset;
	curSet.erase(item);
	for (set<string>::iterator it = curSet.begin(); it != curSet.end();) {
		string temp = *it++;
		if (temp != item) *fout << temp;
		if (it == curSet.end()) {
			*fout << "} ";
			break;
		}
		*fout << ", ";
	}
}
