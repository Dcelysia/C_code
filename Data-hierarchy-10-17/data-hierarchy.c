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
//�Զ�����ÿһ���ڵ�ĳ�ʼ��
pTree InitTree(TreeData data)
{
	pTree newTree = (pTree)malloc(sizeof(Tree));
	newTree->left = NULL;
	newTree->right = NULL;
	newTree->data = data;
	return newTree;
}
//�������
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
//�������
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
//�������
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
//Ҷ�ڵ������
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
//��k��ڵ�ĸ���
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
//�������ĸ߶�
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
//�ڶ�����������ĳ��ֵ
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
	//�ڵ������
	int numjiedian1 = numjiedian(node1);
	printf("�ڵ������:%d\n", numjiedian1);
	//Ҷ�ڵ������
	printf("Ҷ�ڵ������:%d\n", yejiediansize(node1));
	//�ڶ���Ľڵ������
	printf("�ڶ���Ľڵ������:%d\n", BTreeKLevelSize(node1, 3));
	//�������ĸ߶�
	printf("�������ĸ߶ȣ�%d\n", treehigh(node1));
	//�ڶ����������������
	if (Treefind(node1, 3))
	{
		printf("�ҵ���\n");
	}
	else
	{
		printf("û�ҵ�\n");
	}
	return 0;
}
