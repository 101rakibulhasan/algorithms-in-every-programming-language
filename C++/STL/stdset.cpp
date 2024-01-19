#include<iostream>
#include<algorithm>
#include<set>
#include<functional>

using namespace std;

int main()
{
    //set <int,greater<int>> Set= {3,4,2,1,5,5,7,1,2,4,3};
    //set <int,less<int>> Set= {3,4,2,1,5,5,7,1,2,4,3};
    set <int> Set= {3,4,2,1,5,5,7,1,2,4,3};
    for(const auto& e:Set)
    {
        cout << e << endl;
    }
    return 0;
}
