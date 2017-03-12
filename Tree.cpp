#include "Tree.h"

Tree::Tree() {
	root = new TreeNode(-10);
	root->set_left(NULL);
	root->set_right(NULL);
}

Tree::~Tree() {
	delete root;
}

void Tree::addPrefix(TreeNode* newNode) {
	TreeNode* current = root;

	while (current->get_left() != NULL && current->get_right() != NULL) {
		if (current->get_left() == NULL) {

		}
	}
}