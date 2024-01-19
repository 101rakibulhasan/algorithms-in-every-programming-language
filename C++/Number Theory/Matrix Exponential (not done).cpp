#include <iostream>
using namespace std;

using ll = long long;

const ll N = 3;
ll ar[N][N], I[N][N]={0};

// void mul(ll A[][N], ll B[][N], ll n)
// {

// }

void power_2darray(ll A[][N], ll n, ll p)
{
    ll i,j;
    
    for(i=1;i<=n;j++)
    {
        
    }
}

int main()
{
    ll arr_length, power; cin >> arr_length >> power;
    ll arr[arr_length][arr_length];
    for(ll i = 0; i < arr_length; i++)
    {
        for (ll j = 0; j < arr_length; j++)
        {
            cin >> arr[i][j];
        }   
    }       

    power_2darray(arr,arr_length,power);

    for(ll i = 0; i < arr_length; i++)
    {
        for (ll j = 0; j < arr_length; j++)
        {
            cout << arr[i][j] << " ";
        }   
        cout << endl;
    }

    

    return 0;
}