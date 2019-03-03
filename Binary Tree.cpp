#include<iostream>
#include<vector>
#include<stack>
#include<queue>

using namespace std;
typedef char ElemType;
#define  N  100

//
//typedef struct BtNode 
//{
//	BtNode *leftchild;
//	BtNode *rightchild;
//	ElemType data;
//}BtNode, *BinaryTree;
//
//void PreOrder(BtNode *p)
//{
//	if (p != NULL)
//	{
//		cout << p->data << " ";
//		PreOrder(p->leftchild);
//		PreOrder(p->rightchild);
//	}
//}
//void InOrder(BtNode *p)
//{
//	if (p != NULL)
//	{
//		InOrder(p->leftchild);
//		cout << p->data << " ";
//		InOrder(p->rightchild);
//	}
//}
//
//void PastOrder(BtNode *p)
//{
//	if (p != NULL)
//	{
//		PastOrder(p->leftchild);
//		PastOrder(p->rightchild);
//		cout << p->data << " ";
//	}
//}
//BtNode *Buynode()
//{
//	BtNode *s = (BtNode*)malloc(sizeof(BtNode));
//	if (NULL == s) exit(1);
//	memset(s, 0, sizeof(BtNode));
//	return s;
//}
//void Freenode(BtNode *p)
//{
//	free(p);
//}
//
////前序和中序建二叉树
//BtNode * CreateTree1(ElemType pre[], ElemType in[], int len)
//{
//	ElemType leftpre[N];
//	ElemType rightpre[N];
//	ElemType leftin[N];
//	ElemType rightin[N];
//	int lincount = 0;
//	int rincount = 0;
//	int lprecount = 0;
//	int rprecount = 0;
//	BtNode *s = Buynode();
//	if (len == 0)
//	{
//		return 0;
//	}
//
//	s->data = pre[0];
//	//创造左右子树的中序
//	for (int i = 0; i < len; i++)
//	{
//		if ((in[i] != pre[0]) && (i <= lincount))
//		{
//			leftin[lincount++] = in[i];
//		}
//		else  if (in[i] != pre[0])
//		{
//			rightin[rincount++] = in[i];
//		}
//	}
//
//	//创造左右子树的前序
//	for (int n = 1; n < len; n++)
//	{
//		if (n <= lincount)
//		{
//			leftpre[lprecount++] = pre[n];
//		}
//		else
//		{
//			rightpre[rprecount++] = pre[n];
//		}
//	}
//
//	s->leftchild = CreateTree1(leftpre,leftin,lincount);
//	s->rightchild = CreateTree1(rightpre, rightin, rincount);
//	return s;
//}
//
////后序和中序建二叉树
//BtNode * CreateTree2(ElemType post[], ElemType in[], int len)
//{
//	ElemType leftpost[N];
//	ElemType rightpost[N];
//	ElemType leftin[N];
//	ElemType rightin[N];
//	int lincount = 0;
//	int rincount = 0;
//	int lpostcount = 0;
//	int rpostcount = 0;
//	BtNode *s = Buynode();
//	if (len == 0)
//	{
//		return 0;
//	}
//	s->data = post[len-1];
//
//	//创造左右子树的中序
//	for (int i = 0; i < len; i++)
//	{
//		if ((in[i] != post[len-1]) && (i <= lincount))
//		{
//			leftin[lincount++] = in[i];
//		}
//		else  if (in[i] != post[len-1])
//		{
//			rightin[rincount++] = in[i];
//		}
//	}
//
//	//创造左右子树的后序
//	for (int n = 0; n < len-1; n++)
//	{
//		if (n < lincount)
//		{
//			leftpost[lpostcount++] = post[n];
//		}
//		else
//		{
//			rightpost[rpostcount++] = post[n];
//		}
//	}
//
//	s->leftchild = CreateTree2(leftpost, leftin, lincount);
//	s->rightchild = CreateTree2(rightpost, rightin, rincount);
//	return s;
//}
//
//
//
//int main()
//{
//	ElemType pre[] = "ABCDEFGH";
//	ElemType in[] = "CBEDFAGH";
//	ElemType post[] = "CEFDBHGA";
//	int len = sizeof(pre) / sizeof(pre[0])-1;
//	BinaryTree root = NULL;
//	//root = CreateTree1(pre,in,len);
//	root = CreateTree2(post, in, len);
//	PreOrder(root);
//	cout << endl;
//	InOrder(root);
//	cout << endl;
//	PastOrder(root);
//	cout << endl;
//	return 0;
//}

//typedef struct BtNode 
//{
//	BtNode *leftchild;
//	BtNode *rightchild;
//	ElemType data;
//}BtNode, *BinaryTree;
//
//
//BtNode *Buynode()
//{
//	BtNode *s = (BtNode*)malloc(sizeof(BtNode));
//	if (NULL == s) exit(1);
//	memset(s, 0, sizeof(BtNode));
//	return s;
//}
//
//void Freenode(BtNode *p)  
//{
//	free(p);
//}
//void PreOrder(BtNode *p)
//{
//	if (p != NULL)
//	{
//		cout << p->data << " ";
//		PreOrder(p->leftchild);
//		PreOrder(p->rightchild);
//	}
//}
//void InOrder(BtNode *p)
//{
//	if (p != NULL)
//	{
//		InOrder(p->leftchild);
//		cout << p->data << " ";
//		InOrder(p->rightchild);
//	}
//}
//
//void PastOrder(BtNode *p)
//{
//	if (p != NULL)
//	{
//		PastOrder(p->leftchild);
//		PastOrder(p->rightchild);
//		cout << p->data << " ";
//	}
//}
//int Find(ElemType *is, ElemType *ls, int n)
//{
//	int pos = -1;
//	int i = 0;
//	for (; i < n; i++)
//	{
//		if (is[i] == ls[n - 1])
//		{
//			break;
//		}
//	}
//	pos = i;
//	return pos;
//}
//
//BtNode * createIL(ElemType *is, ElemType *ls, int n)
//{
//	if (n < 1)
//		return NULL;
//	int pos = Find(is,ls,n);
//	BtNode *s = NULL;
//	s = Buynode();
//	s->data = ls[n-1];
//
//	s->leftchild = createIL(is, ls, pos);
//	s->rightchild = createIL(is + pos + 1, ls + pos, n - pos - 1);
//
//	return s;
//}
//
//BtNode * creatTreeIL(ElemType *is, ElemType *ls, int n)
//{
//	if (NULL == is || NULL == ls || n < 1)
//		return NULL;
//	else
//	{
//		return createIL(is, ls, n);
//	}
//}
//
//BtNode * creat(ElemType *arr, int len,int i)
//{
//	if (len-1 < i)
//	{
//		return NULL;
//	}
//	BtNode *s = NULL;
//	s = Buynode();
//	s->data = arr[i];
//	s->leftchild = creat(arr,len,i*2+1);
//	s->rightchild = creat(arr, len, i * 2 + 2);
//	return s;
//}
//
//
////有问题
////BtNode * createbalence(char **arr, int len)
////{
////	if (arr = NULL)
////		return NULL;
////	BtNode *s = NULL;
////	s = Buynode();
////	
////	s->leftchild = createbalence(arr, len/2);
////	s->data = *arr[len /= 2];
////	s->rightchild = createbalence(arr+len+1, len-1);
////	return s;
////}
//
//int main()
//{
//	ElemType pre[] = "ABCDEFGH";
//	ElemType in[] = "CBEDFAGH";
//	ElemType post[] = "CEFDBHGA";
//	int len = sizeof(pre) / sizeof(pre[0])-1;
//	BinaryTree root = NULL;
//	//root = CreateTree1(pre,in,len);
//	//root = creatTreeIL(in, post, len);
//	//root = creat(pre, len, 0);
//
//
//	/*char *pre1 = "ABCDEFGH";
//	int len1 = strlen(pre1);
//	root = createbalence(&pre1, len1);*/
//
//
//	PreOrder(root);
//	cout << endl;
//	InOrder(root);
//	cout << endl;
//	PastOrder(root);
//	cout << endl;
//	return 0;
//}










typedef struct BtNode 
{
	BtNode *leftchild;
	BtNode *rightchild;
	ElemType data;
}BtNode, *BinaryTree;

void PreOrder(BtNode *p)
{
	if (p != NULL)
	{
		cout << p->data << " ";
		PreOrder(p->leftchild);
		PreOrder(p->rightchild);
	}
}
void InOrder(BtNode *p)
{
	if (p != NULL)
	{
		InOrder(p->leftchild);
		cout << p->data << " ";
		InOrder(p->rightchild);
	}
}

void PastOrder(BtNode *p)
{
	if (p != NULL)
	{
		PastOrder(p->leftchild);
		PastOrder(p->rightchild);
		cout << p->data << " ";
	}
}
BtNode *Buynode()
{
	BtNode *s = (BtNode*)malloc(sizeof(BtNode));
	if (NULL == s) exit(1);
	memset(s, 0, sizeof(BtNode));
	return s;
}
void Freenode(BtNode *p)
{
	free(p);
}


//前序和中序建二叉树
BtNode * CreateTree1(ElemType pre[], ElemType in[], int len)
{
	ElemType leftpre[N];
	ElemType rightpre[N];
	ElemType leftin[N];
	ElemType rightin[N];
	int lincount = 0;
	int rincount = 0;
	int lprecount = 0;
	int rprecount = 0;
	BtNode *s = Buynode();
	if (len == 0)
	{
		return 0;
	}
	s->data = pre[0];	
	for (int i = 0; i < len; i++)//创造左右子树的中序
	{
		if ((in[i] != pre[0]) && (i <= lincount))
		{
			leftin[lincount++] = in[i];
		}
		else  if (in[i] != pre[0])
		{
			rightin[rincount++] = in[i];
		}
	}	
	for (int n = 1; n < len; n++)//创造左右子树的前序
	{
		if (n <= lincount)
		{
			leftpre[lprecount++] = pre[n];
		}
		else
		{
			rightpre[rprecount++] = pre[n];
		}
	}

	s->leftchild = CreateTree1(leftpre,leftin,lincount);
	s->rightchild = CreateTree1(rightpre, rightin, rincount);
	return s;
}

//非递归遍历先序
void LoopPre(BtNode *p)
{
	stack<BtNode*> stack1;

	stack1.push(p);
	while (!stack1.empty())
	{
		p = stack1.top();
		stack1.pop();
		cout << p->data << " ";
		if (p->rightchild != NULL)
		{
			stack1.push(p->rightchild);
		}
		if (p->leftchild!=NULL)
		{
			stack1.push(p->leftchild);
		}		
	}
	cout << endl;
}

typedef struct BtNodenum
{
	BtNode *_leftchild;
	BtNode *_rightchild;
	ElemType _data;
	int _num;
}BtNodenum, *BinaryTreenum;

//利用访问次数来遍历中序

//void Inpre(BtNode *p)
//{
//	BtNodenum *pp;
//	pp->_data = p->data;
//	pp->_leftchild = p->leftchild;
//	pp->_rightchild = p->rightchild;
//	pp->_num = 3;
//	
//	while ()
//}
//void InPre(BtNode *p)
//{
//	stack<BtNodenum*> stack1;
//	BtNodenum *pp;
//	pp->_data = p->data;
//	pp->_leftchild = p->leftchild;
//	pp->_rightchild = p->rightchild;
//	pp->_num = 1;
//	stack1.push(pp);
//	while (!stack1.empty())
//	{
//		pp = stack1.top();
//		BtNodenum *nodeleft;
//		BtNodenum *noderight;
//		nodeleft->_leftchild = pp->_leftchild->leftchild;
//		nodeleft->_rightchild = pp->_rightchild->rightchild;
//		nodeleft->_data = pp->_leftchild->data;
//		nodeleft->_num = 1;
//		if (p->rightchild != NULL)
//		{
//			stack1.push(p->rightchild);
//		}
//		if (p->leftchild != NULL)
//		{
//			stack1.push(p->leftchild);
//		}
//		/*pp = stack1.top();
//		stack1.pop();
//		cout << p->data << " ";
//		if (p->rightchild != NULL)
//		{
//			stack1.push(p->rightchild);
//		}
//		if (p->leftchild != NULL)
//		{
//			stack1.push(p->leftchild);
//		}*/
//	}
//	cout << endl;
//}

//判断完全二叉树
bool IsComTree(BtNode *p)
{
	queue<BtNode*> queue1;
	queue1.push(p);

	while (!queue1.empty())
	{
		p = queue1.front();
		queue1.pop();
		if (p->leftchild == NULL || p->rightchild == NULL)
		{
			while (!queue1.empty())
			{
				p = queue1.front();
				queue1.pop();
				if (p->leftchild != NULL || p->rightchild != NULL)
				{
					return false;
				}
			}
		}
		if (p->leftchild != NULL)
		{
			queue1.push(p->leftchild);
		}
		if (p->rightchild != NULL)
		{
			queue1.push(p->rightchild);
		}
	}
	return true;
}

int main()
{
	ElemType pre[] = "ABCDEFGH";
	ElemType in[] = "CBEDFAGH";
	ElemType post[] = "CEFDBHGA";
	int len = sizeof(pre) / sizeof(pre[0])-1;
	BinaryTree root = NULL;
	root = CreateTree1(pre,in,len);
	LoopPre(root);
	if (IsComTree(root))
	{
		cout << "是完全二叉树" << endl;
	}
	else
	{
		cout << "不是完全二叉树" << endl;
	}


	ElemType pre1[] = "ABCHDEFG";
	ElemType in1[] = "HCBDAFEG";
	ElemType post1[] = "HCDBFGEA";
	int len1 = sizeof(pre1) / sizeof(pre1[0]) - 1;
	BinaryTree root1 = NULL;
	root1 = CreateTree1(pre1, in1, len1);
	if (IsComTree(root1))
	{
		cout << "是完全二叉树" << endl;
	}
	else
	{
		cout << "不是完全二叉树" << endl;
	}



	PreOrder(root);
	cout << endl;
	InOrder(root);
	cout << endl;
	PastOrder(root);
	cout << endl;
	return 0;
}