#include <iostream> 
#include <vector> 
using namespace std; 
int main() { 
    //vector<int> * vp = new vector<int>(); 
    vector<int> v; 
    for (int i = 0; i < 100; i++)
    { 
      cout << "cap:" << v.capacity() << endl; 
      cout << "size:" << v.size() << endl; 
      v.push_back(i + 1); 
    } 
      v.push_back(10); 
      v.push_back(20); 
      v.push_back(30); 
      v.push_back(23); 
      v.push_back(234); 
      v.pop_back(); 
            cout << v[0] << endl; 
            cout << v[1] << endl; 
            cout << v[2] << endl; 
            cout << v[3] << endl; 
            cout << v[4] << endl; 
            cout << v[5] << endl; 
            cout << v[6] << endl; 
            cout << v.at(2) << endl; 
            cout << v.at(6) << endl; 
        return 0;
 } 
