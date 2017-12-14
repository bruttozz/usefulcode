#include <iostream>
#include <vector>
using namespace std;
int main(void){
     vector<int> v;
     v.push_back(11);
     v.push_back(22);
     v.push_back(33);
     v.push_back(44);
     v.push_back(55);
     //v.erase(v.begin()+1);
     v.erase(v.begin()+2,v.begin()+5);
     vector<int>::iterator i;
     int j;
     for(i=v.begin(),j=0; i!=v.end(); i++,j++)
         cout<<"v[" << j << "] = " << *i<< endl;
     v.clear();
     cout << "vector clear()!" << endl;
     return 0;
}
