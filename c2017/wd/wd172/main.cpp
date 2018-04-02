#include <iostream>

using namespace std;

class LinkNode{
  friend class List;
private:
  int data;
  LinkNode *link;
};

class List{
public:
  bool Insert(int i, int& x);
  bool Remove(int i, int& x);
private:
  LinkNode *first;
};

bool List::Insert(int i, int& x){
  if(first == NULL || i == 0){
    LinkNode *newNode = new LinkNode(x);
    if(newNode == NULL) {cerr<<"�洢�������\n";exit(1);}
    newNode -> link = first; first = newNode;
  }
  else{
    LinkNode *current - first;
    for(int k = 1; k < i; k++)
      if(current == NULL) break;
      else current = current -> link;
    if(current == NULL)
    {
      cerr<<"��Ч�Ĳ���λ�ã�\n";return false;
    }
    else{
      LinkNode *newNode = new LinkNode(x);
      if(newNode == NULL) {cerr<<"�洢�������\n";exit(1);}
      newNode -> link = current -> link;
      current -> link = newNode;
    }
  }
  return true;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
