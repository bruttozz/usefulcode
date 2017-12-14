#include <vector>
#include <iostream>
using namespace std;
int main(void){
     vector<int> v;
     v.push_back(11);
     v.push_back(22);
     v.push_back(33);
     vector<int>::iterator i;
     int j;
     for(i=v.begin(),j=0; i!=v.end(); i++,j++)
         //cout<<"v[" << j << "] = " << *i<< endl;
         cout << *i << endl;
     return 0;
}
