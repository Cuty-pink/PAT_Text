/*
对任何一个正整数 n，如果它是偶数，那么把它砍掉一半；如果它是奇数，那么把 (3n+1) 砍掉一半。
简单地数一下，需要多少步（砍几下）才能得到 n=1？
*/
#include <iostream>
using namespace std;
int main()
{
    // cout<<"Input an integer:"<<endl;
    int n, i;
    cin >> n;

    for (i = 0;; i++)
    {
        if (n == 1)
            break;
        else
        {
            if (n % 2 == 0)
                n = n / 2;
            else
                n = (3 * n + 1) / 2;
        }
    }
    cout << i << endl;
    return 0;
}