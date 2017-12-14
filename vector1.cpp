#include <vector>
#include <iostream>
using namespace std;
int main(void){
     vector<int> v;
     v.push_back(11);
     v.push_back(22);
     v.push_back(33);
     for(int i = 0; i < v.size(); i++)
         cout << "v[" << i << "] = " << v[i] << endl;
     return 0;
}
