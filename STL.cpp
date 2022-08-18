#include <iostream>
#include <array>
#include <vector> // vector is a dynamic array i.e. it can double its Capacity to store the values once it gets full (It creates new vector of 2x sixe of primary vector and copies the values from primary vector and then the primary vector is taken off from memory ). Capacity defines how much value can be stored, while size defines what values are currently stored
#include <deque>
#include <list>
#include <stack> //LIFO Concept
#include <queue> //FIFO Concept //Priority Queue - returns maximum values whenever we fetch from the data container
#include <set> //Insert, Find,Erase, Count --> O log(n) , Size, Begin, End --> O(1). Consist unique elements
#include <map> // Insert, Find, Count, Erase --> O log(n).
using namespace std;

int main(){

  array<int,4> a = {1,2,3,4};

  int size = a.size();

  for (int i = 0; i< size; i++){
    cout << a[i] << endl;
  }

  cout << "Element at index '3' " << a.at(3) << endl;
  cout << "Array is empty or not " << a.empty() << endl;
  cout << "First element of array " << a.front() << endl;
  cout << "Last element of array " << a.back() << endl;


  vector<int> b;
  vector<int> c(5,1);
  vector<int> d(c);
  cout << "Values in b before data insertion "<< b.capacity() << endl;
  b.push_back(1);
  cout << "Values in b after data insertion " << b.capacity() << endl;
  b.push_back(2);
  cout << "Values in b after data insertion " << b.capacity() << endl;
  b.push_back(3);
  cout << "Values in b after data insertion " << b.capacity() << endl;
  cout << "Values in b after data insertion " << b.size() << endl;

  for (int i = 0; i< c.size(); i++){
    cout << c[i]<< endl;
  }
  cout << "First element of array " << b.front() << endl;
  cout << "Last element of array " << b.back() << endl;

  b.pop_back();
  for (int i = 0; i< b.size(); i++){
    cout << b[i]<< endl;
  }

  c.clear();
  for (int i = 0; i< c.size(); i++){
    cout << c[i]<< endl;
  }
  cout << "Values in c after data clear " << c.capacity() << endl;
  cout << "Values in c after data clear " << c.size() << endl;

  deque<int> e;
  e.push_back(1);
  e.push_front(2);
  cout << "First element of array " << e.front() << endl;
  cout << "Last element of array " << e.back() << endl;
  cout << "value in e after addition to deque "<< e.size() << endl;
  for (int i = 0; i< e.size(); i++){
    cout << e[i]<< endl;
  }
  e.pop_front();
  e.pop_back();
  for (int i = 0; i< e.size(); i++){
    cout << e[i]<< endl;
  }
  cout << "value in e after removal to deque "<< e.size() << endl;

  list<int> l;
  list<int> m(5,100);
  list<int> n(m);

  l.push_back(1);
  l.push_front(2);
  for(int i:l){
    cout << i << endl;
  }
  l.erase(l.begin());
    for(int i:l){
    cout << i << endl;
  }
  cout << "Size of list " << l.size() << endl;

   
  stack<string> s;
  s.push("Manoj");
  s.push("Kamlesh");
  s.push("Gupta");

  cout << s.top() << endl;
  cout << s.size() << endl;
  cout << s.empty() << endl;

  queue<string> q;
  q.push("M");
  q.push("K");
  q.push("G");

  cout << q.size() << endl;
  cout << q.front() << endl;
  q.pop() ;
  cout << q.front() << endl;
  cout << q.size() << endl;
  cout << q.empty() << endl << endl;

  priority_queue<int> p;
  p.push(1);
  p.push(3);
  p.push(2);
  p.push(0);

  int w = p.size();
  cout << w << endl;

  for (int i = 0;i< w;i++){
    cout << p.top() << endl;
    p.pop();
  }
  cout << p.empty() << endl;

  set<int> t;
  t.insert(5);
  t.insert(5);
  t.insert(5);
  t.insert(1);
  t.insert(2);
  t.insert(2);
  t.insert(3);
  t.insert(4);
  t.insert(6);
  t.insert(7);

 
  cout << t.size() << endl;  
  set<int> :: iterator it = t.begin();
  it ++;

  t.erase(it);
  cout << t.size() << endl;

  map<int,string> o;
  o[10] = "Manoj";
  o[20] = "kamlesh";
  o[30] = "Gupta";

  o.insert({40,"KKK"});

  cout << o.size()<< endl;
  cout << o.count(10) << endl;
  cout << o.count(-20) << endl;
 
 
  }