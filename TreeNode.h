#pragma once
#include <iostream>
using namespace std;

//TreeNode Definition
class TreeNode {

public:
	TreeNode(int input);			//TreeNode Constructor
	~TreeNode();					//TreeNode Destructor

	//Get Functions for returning private value of Node
	TreeNode* get_left() {return left;}			//return left child Node ptr
	TreeNode* get_right() {return right;}		//return right child Node ptr
	int get_content() { return content; }		//return value of Node

	//Set Functions for setting private value of Node
	void set_left(TreeNode* temp) {left = temp;}		//set left child Node ptr
	void set_right(TreeNode* temp) { right = temp; }	//set right child Node ptr
	void set_content(int temp) { content = temp; }		//set value of Node
	

private:
	int content;				//get operand or operator
	TreeNode *left;				//pointer to left
	TreeNode *right;			//pointer to right
};