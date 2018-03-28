#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
#define DefaultSize 10;
enum bool {false,true}
template <class E>
class MinHeap:public PQueue<E>{
public:
  MinHeap(int sz = DefaultSize);
  MinHeap(E arr[],int n);
  ~MinHeap(){delete []heap;}
  bool Insert(const E& x);
  bool RemoveMin(E& x);
  bool IsEmpty()const
      {return (currentSize == 0)?true:false;}
  bool IsFull()const
  {
    return (currentSize == maxHeapSize)?true:false;
  }
  void MakeEmpty(){currentSize = 0;}
private:
  E *heap;
  int currentSize;
  void siftDown(int start,int m);
  void siftUp(int start);
};
