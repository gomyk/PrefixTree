#pragma once
#include "TreeNode.h"

//Tree Definition
class Tree {

public:
	Tree();					//Tree Constructor
	~Tree();				//Tree Destructor

	void addPrefix(TreeNode* newNode);		//Add Node as prefix algorithm

private:
	TreeNode* root;			//RootNode of Tree
};
