/*
当我们验证卡拉兹猜想的时候，为了避免重复计算，可以记录下递推过程中遇到的每一个数。
例如对 n=3 进行验证的时候，我们需要计算 3、5、8、4、2、1，则当我们对
n=5、8、4、2 进行验证的时候，就可以直接判定卡拉兹猜想的真伪，而不需要重复计算，
因为这 4 个数已经在验证3的时候遇到过了，我们称 5、8、4、2 是被 3“覆盖”的数。
我们称一个数列中的某个数 n 为“关键数”，如果 n 不能被数列中的其他数字所覆盖。
现在给定一系列待验证的数字，我们只需要验证其中的几个关键数，
就可以不必再重复验证余下的数字。你的任务就是找出这些关键数字，
并按从大到小的顺序输出它们。
对任何一个正整数 n，如果它是偶数，那么把它砍掉一半；
如果它是奇数，那么把 (3n+1) 砍掉一半。这样一直反复砍下去，最后一定在某一步得到 n=1。
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> a;
int n = 0;
int perdict(int *arr)
{
    int x;
    for (int i = 0; i < n; i++)
    {
        x = arr[i];
        while (1)
        {
            if (x == 1)
                break;
            else
            {
                if (x % 2 == 0)
                {
                    x = x / 2;
                    if (x == 1)
                        break;
                    else
                        a.push_back(x);
                }
                else
                {
                    x = (3 * x + 1) / 2;
                    a.push_back(x);
                }
            }
        }
    }
    return 0;
}
int main()
{
    cin >> n;
    vector<int> param;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    perdict(arr);
    a.push_back(0);
    for (int j = 0; j < n; j++)
    {
        if (find(a.begin(), a.end(), arr[j]) == a.end())
            param.push_back(arr[j]);
    }
    int number;
    number = param.size();
    sort(param.begin(), param.end());
    for (int k = number - 1; k >= 0; k--)
    {
        if (k != 0)
            cout << param[k] << " ";
        else
            cout << param[k];
    }
    return 0;
}