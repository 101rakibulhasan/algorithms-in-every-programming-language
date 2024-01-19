#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
//    vector<int> arr1;
//    vector<int> arr2 (5,20);
//    vector<int> arr3 = {1,2,3,4,5};
//    vector<int> arr4 {1,2,3,4,5};
//
//    arr2[3] = 10;
//    arr2.at(3) = 10;

    vector<int> vec;
    //vec.reserve(16);
    for(int i=0; i<32; ++i)
    {
        vec.push_back(i);
        cout << vec.size() << " " << vec.capacity() << endl;
    }
    return 0;
}
