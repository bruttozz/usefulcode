#include <vector>
#include <iostream>
using namespace std;
int main(void){
     vector<int> v;
     v.push_back(22);
     v.push_back(33);
     v.push_back(55);
     v.push_back(66);
     v.insert(v.begin() + 2, 44);
     v.insert(v.begin(), 11);
     v.insert(v.end(), 77);
     for(int i = 0; i < v.size(); i++)
         cout << "v[" << i << "] = " << v[i] << endl;
     return 0;
}
