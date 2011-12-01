//============================================================================
// Name        : ������Ԫ���������.cpp
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

//��ʼ��������һ��ͷ�ڵ㡣
bool LinkList::InitList() {
 if (!(List = new LNode)) {
  return false;
 }
 List->next = NULL;

 return true;
}

//��������
bool LinkList::DestroyList() {
 if (!ClearList()) {
  return false;
 }

 delete List;

 return true;
}

//�ж������Ƿ�Ϊ�ա���Ϊ�գ�����true�����򷵻�false��
bool LinkList::IsEmpty() {
 if (List->next == NULL) {
  return true;
 }
 return false;
}

//����������е�ǰ�ڵ�����
int LinkList::GetLength() {
 return listLength;
}

//��������գ��ͷŵ�ǰ���нڵ㡣
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

//��positionָ���Ľڵ��ڵ���������ΪnewData��
//��һ����Ч�ڵ��positionΪ1��
bool LinkList::SetNodeData(int position, int newData) {
 LNode *pTemp = NULL;

if (!(GetNode(position, &pTemp))) {
  return false;
 }

 pTemp->data = newData;

 return true;
}

//�õ�ָ��λ�ýڵ�����ݡ�
//�ڵ�������1��listLength��
bool LinkList::GetNodeData(int position, int &data) {
 LNode *pTemp = NULL;

 if (!(GetNode(position, &pTemp))) {
  return false;
 }

 data = pTemp->data;

 return true;
}

//�������в���һ���ڵ㡣
//�����λ����beforeWhichָ�����½ڵ������beforeWhich֮ǰ��
//beforeWhich��ȡֵ��1��ListLength+1֮�䡣
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

//ɾ��һ��ָ���Ľڵ㡣
//�ڵ�λ����positionָ����
//positon��ֵ��1��listLength��
//������Ϊ�ջ�ָ���Ľڵ㲻�����򷵻�false��
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

//�õ�ָ��λ�ýڵ��ָ�롣
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

//��λ��ָ��������ȵ����ݽڵ㡣
//����ڵ�ǰ�������Ѿ����ڸ������򷵻ظ����ݽڵ�������š�
//�������������Ľڵ��򷵻�0��
//�ڵ�������0��ʼ��listLength��
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
