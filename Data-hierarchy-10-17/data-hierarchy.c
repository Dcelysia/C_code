#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int TreeData;
typedef struct Tree
{
	TreeData data;
	struct Tree* right;
	struct Tree* left;
}Tree,*pTree;
//对二叉树每一个节点的初始化
pTree InitTree(TreeData data)
{
	pTree newTree = (pTree)malloc(sizeof(Tree));
	newTree->left = NULL;
	newTree->right = NULL;
	newTree->data = data;
	return newTree;
}
//先序遍历
void Frontsee(pTree tree)
{

	if (tree == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%d ", tree->data);
	Frontsee(tree->left);
	Frontsee(tree->right);
	

}
//中序遍历
void Middlesee(pTree tree)
{
	if (tree == NULL)
	{
		printf("NULL ");
		return;
	}
	Frontsee(tree->left);
	printf("%d ", tree->data);
	Frontsee(tree->right);
}
//后序遍历
void housee(pTree tree)
{
	if (tree == NULL)
	{
		printf("NULL ");
		return;
	}
	Frontsee(tree->left);
	Frontsee(tree->right);
	printf("%d ", tree->data);
}
int numjiedian(pTree tree)
{
	return tree == NULL ? 0 : numjiedian(tree->left) + numjiedian(tree->right)+1;
}
//叶节点的数量
int yejiediansize(pTree tree)
{
	if (tree == NULL)
	{
		return 0;
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return 1;
	}

	return yejiediansize(tree->left) + yejiediansize(tree->right);
}
//第k层节点的个数
int BTreeKLevelSize(pTree tree, int k)
{
	assert(k >= 1);
	if (tree == NULL)
	{
		return 0;
	}
	if (k == 1)
	{
		return 1;
	}
	return BTreeKLevelSize(tree->left, k - 1) + BTreeKLevelSize(tree->right,k-1);

}
//计算树的高度
int treehigh(pTree tree)
{
	if (tree == NULL)
	{
		return 0;
	}
	int leftlength = 0;
	int rightlength = 0;
	leftlength = treehigh(tree->left);
	rightlength = treehigh(tree->right);
	return leftlength > rightlength ? leftlength + 1 : rightlength + 1;
}
//在二叉树里面找某个值
pTree Treefind(pTree tree,  TreeData x)
{
	if (tree == NULL)
		return NULL;
	if (tree->data == x)
		return tree;
	if (Treefind(tree->left, x))
	{
		return Treefind(tree->left, x);
	}
	else
	{
		return Treefind(tree->right, x);
	}
}
int main(void)
{
	pTree node1 = InitTree(1);
	pTree node2 = InitTree(2);
	pTree node3 = InitTree(3);
	pTree node4 = InitTree(4);
	pTree node5 = InitTree(5);
	pTree node6 = InitTree(6);
	node1->right = node2;
	node1->left = node3;
	node2->left = node4;
	node3->right = node5;
	node3->left = node6;
	Frontsee(node1);
	printf("\n");
	Middlesee(node1);
	printf("\n");
	housee(node1);
	//节点的数量
	int numjiedian1 = numjiedian(node1);
	printf("节点的数量:%d\n", numjiedian1);
	//叶节点的数量
	printf("叶节点的数量:%d\n", yejiediansize(node1));
	//第二层的节点的数量
	printf("第二层的节点的数量:%d\n", BTreeKLevelSize(node1, 3));
	//二叉树的高度
	printf("二叉树的高度：%d\n", treehigh(node1));
	//在二叉树里面查找数据
	if (Treefind(node1, 3))
	{
		printf("找到了\n");
	}
	else
	{
		printf("没找到\n");
	}
	return 0;
}
