//============================================================================
// Name        : 迭代友元类访问链表.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class iterat;
typedef struct LNode {
 int data;
 struct LNode *next;
}LNode;

class LinkList {
private:
 LNode *List;
 int listLength;
public:
 LinkList();
 ~LinkList();
 bool InitList ();
 bool DestroyList ();
 bool ClearList();
 bool IsEmpty ();
 int GetLength ();
 bool GetNode(int position, LNode** node);
 int LocateElem(int elem);
 bool SetNodeData(int position, int newData);
 bool GetNodeData(int position, int &data);
 bool InsertNode(int beforeWhich, int data);
 bool DeleteNode(int position);
 friend class iterat;
};
LinkList::LinkList() {
 List = NULL;
 listLength = 0;

 InitList();
}

LinkList::~LinkList() {
 if (!DestroyList()) {
  DestroyList();
 }
}

//初始化，分配一个头节点。
bool LinkList::InitList() {
 if (!(List = new LNode)) {
  return false;
 }
 List->next = NULL;

 return true;
}

//销毁链表。
bool LinkList::DestroyList() {
 if (!ClearList()) {
  return false;
 }

 delete List;

 return true;
}

//判断链表是否为空。若为空，返回true，否则返回false。
bool LinkList::IsEmpty() {
 if (List->next == NULL) {
  return true;
 }
 return false;
}

//返回链表的中当前节点数。
int LinkList::GetLength() {
 return listLength;
}

//将链表清空，释放当前所有节点。
bool LinkList::ClearList() {
 if (List == NULL) {
  return false;
 }

 LNode *pTemp = NULL;
 while (List->next != NULL) {
  pTemp =List->next;
  List->next = pTemp->next;
  delete pTemp;
 }
 listLength = 0;

 return true;
}

//将position指定的节点内的数据设置为newData。
//第一个有效节点的position为1。
bool LinkList::SetNodeData(int position, int newData) {
 LNode *pTemp = NULL;

if (!(GetNode(position, &pTemp))) {
  return false;
 }

 pTemp->data = newData;

 return true;
}

//得到指定位置节点的数据。
//节点索引从1到listLength。
bool LinkList::GetNodeData(int position, int &data) {
 LNode *pTemp = NULL;

 if (!(GetNode(position, &pTemp))) {
  return false;
 }

 data = pTemp->data;

 return true;
}

//在链表中插入一个节点。
//插入的位置由beforeWhich指定，新节点插入在beforeWhich之前。
//beforeWhich的取值在1到ListLength+1之间。
bool LinkList::InsertNode(int beforeWhich, int data) {
 LNode *pTemp = NULL;

 if (beforeWhich < 1 || beforeWhich > (listLength + 1)) {
  return false;
 }

 if (!(GetNode(beforeWhich - 1, &pTemp))) {
  return false;
 }

 LNode *newNode = new LNode;
 newNode->data = data;
 newNode->next = pTemp->next;
 pTemp->next = newNode;

 listLength++;

 return true;
}

//删除一个指定的节点。
//节点位置由position指定。
//positon的值从1到listLength。
//若链表为空或指定的节点不存在则返回false。
bool LinkList::DeleteNode(int position) {
 if (position < 1 || position >listLength) {
  return false;
 }

 LNode *pTemp = NULL;
 if (!(GetNode(position - 1, &pTemp))) {
  return false;
 }

 LNode *pDel = NULL;
 pDel = pTemp->next;
 pTemp->next = pDel->next;
 delete pDel;

 listLength--;

 return true;
}

//得到指定位置节点的指针。
bool LinkList::GetNode(int position, LNode **node) {
 LNode *pTemp = NULL;
 int curPos = -1;

 pTemp =List;
 while (pTemp != NULL) {
  curPos++;
  if (curPos == position)
   break;
  pTemp = pTemp->next;
 }

 if (curPos != position) {
  return false;
 }

 *node = pTemp;

 return true;
}

//定位与指定数据相等的数据节点。
//如果在当前链表中已经存在该数据则返回该数据节点的索引号。
//若不存在这样的节点则返回0。
//节点索引从0开始到listLength。
int LinkList::LocateElem(int elem) {
 LNode *pTemp = NULL;
 int curIndex = 1;

 pTemp = List->next;
 while ((pTemp != NULL) && (pTemp->data != elem)) {
  pTemp = pTemp->next;
  curIndex++;
 }
 if (pTemp == NULL) {
   return 0;
  }

  return curIndex;
 }
class iterat{
private:
	LinkList list;
public:
	iterat(LinkList &list){
		this->list=list;
	}
	void show(){
		int data = 0;
		 for (int i = 1; i <= list.GetLength(); i++) {
		  list.GetNodeData(i,data);
		  cout << data<< endl;
		 }

	}
};

int main() {
	LinkList list;
	 list.InsertNode(1, 10);
	 list.InsertNode(2, 20);
	 list.InsertNode(3, 30);
	 list.InsertNode(4, 40);
	 list.InsertNode(5,50);
	 iterat it(list);
	 it.show();
	return 0;
}
