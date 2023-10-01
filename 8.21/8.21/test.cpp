#include <iostream>
using namespace std;
////class A
////{
////public:
////    A() :m_iVal(0) { test(); }
////
////    virtual void func() { std::cout << m_iVal << ""; }
////
////    void test() { func(); }
////
////public:
////
////    int m_iVal;
////
////};
////
////class B : public A
////
////{
////
////public:
////
////    B() { test(); }
////
////    virtual void func()
////
////    {
////        ++m_iVal;
////        std::cout << m_iVal << " ";
////    }
////
////};
////int main(int argc, char* argv[])
////
////{
////
////    A* p = new B;
////
////    p->test();
////    
////    return 0;
////
////}
//#include  <queue>
//int main()
//
//{
//
//    priority_queue<int> a;//默认大堆
//
//    priority_queue<int, vector<int>, greater<int> > c;//小堆
//
//    priority_queue<string> b;
//
//    for (int i = 0; i < 5; i++)
//
//    {
//
//        a.push(i);
//
//        c.push(i);
//
//    }
//
//    while (!a.empty())
//
//    {
//
//        cout << a.top() << ' ';
//
//        a.pop();
//
//    }
//
//    cout << endl;
//
//    while (!c.empty())
//
//    {
//
//        cout << c.top() << ' ';
//
//        c.pop();
//
//    }
//
//    cout << endl;
//
//    b.push("abc");
//
//    b.push("abcd");
//
//    b.push("cbd");
//
//    while (!b.empty())
//
//    {
//
//        cout << b.top() << ' ';
//
//        b.pop();
//
//    }
//
//    cout << endl;
//
//    return 0;
//
//}

#include<vector>

//int main() {
//    vector<int> nums = { 2,2,2,1 };
//
//    int single = 0;
//    for (int i = 0; i < 32; i++)
//    {  int ret = 0;
//        for (auto& e : nums)
//        {  
//            ret += (e >> i) & 1;
//            //获取nums中每个数的第i个二进制位上的数，然后全部相加起来
//        }
//        //因为三个相同的数，要么是全是0，要么全是1，相加起来要么是0，要么是3，所以当只出现一次的数第i二进制位置是1时，
//           //最后的结果模3就不为0，当只出现一次的第i位置是0时，最后结果模完还是0
//        if (ret % 3 != 0)
//        {
//            //表明只出现一个数的第i位置是1
//            single = single | (1 << i);
//            //（1<<i）表示让第i位置上数字为1
//        }
//    }
//    return single;
//}

//void duplicateZeros(vector<int>& arr)
//{
//    //首先找到可以复写的最后一个数据
//    int cur = 0;
//    int dest = cur - 1;
//    //首先判断cur上的数据是什么
//    //while (dest < (int)arr.size() - 1)
//    //{
//    //    if (arr[cur])
//    //    {
//    //        //cur位置上的数据不等于0，那么dest就走1步
//    //        ++dest;
//    //        //每次dest走完后都要判断一下，走没走到尽头,如果走到尽头了就停止
//    //    }
//    //    else
//    //    {
//    //        //cur位置上的数据等于0，那么dest就要走2步
//    //        dest += 2;
//    //    }
//    //    if (dest <(int)arr.size() - 1)
//    //        cur++;
//    //}
//    while (cur < arr.size())
//    {
//        if (arr[cur])
//                {
//                    //cur位置上的数据不等于0，那么dest就走1步
//                    ++dest;
//                    //每次dest走完后都要判断一下，走没走到尽头,如果走到尽头了就停止
//                }
//                else
//                {
//                    //cur位置上的数据等于0，那么dest就要走2步
//                    dest += 2;
//                }
//        if (dest >= arr.size() - 1)
//            break;
//        cur++;
//    }
//    //找到后，cur和dest的位置都不需要改变，因为我们就是从后往前覆盖，而且cur而dest的位置正好
//    //不过要注意dest可能会越界的情况，需要特性处理
//    if (dest == arr.size())//这个就是越界情况了
//    {
//        arr[arr.size() - 1] = 0;
//        dest -= 2;
//        cur--;
//    }
//    while (dest > 0)
//    {
//        if (arr[cur])//如果cur位置上是非0，那么就将该位置覆盖到dest位置上
//        {
//            arr[dest] = arr[cur];
//            cur--;
//            dest--;
//        }
//        else
//        {
//            arr[dest--] = 0;
//            arr[dest--] = 0;
//            cur--;
//        }
//    }
//
//}


//
//void duplicateZeros(vector<int>& arr)
//{
//    //第一步找最后一个复写的数据
//    int cur = 0, dest = -1, n = arr.size();
//    while (cur < n)
//    {
//        if (arr[cur])dest++;
//        else dest += 2;
//        //dest每次走完都要判断一下是否到头
//        if (dest >= n - 1)
//            break;
//        cur++;
//    }
//    //特殊情况处理
//    if (dest == n)
//    {
//        arr[n - 1] = 0;
//        dest -= 2;
//        cur--;
//    }
//    //正常往前复写
//    while (cur >= 0)
//    {
//        if (arr[cur])
//            arr[dest--] = arr[cur--];
//        else
//        {
//            arr[dest--] = 0;
//            arr[dest--] = 0;
//            cur--;
//        }
//    }
//}
//int main()
//{
//    vector<int> arr = { 8,4,5,0,0,0,0,7 };
//    duplicateZeros(arr);
//}
//int work(int n)
//{
//    int ret = 0;
//    while (n)
//    {
//        ret += (n % 10)*(n % 10);
//        n = n / 10;
//    }
//    return ret;
//}
//bool isHappy(int n)
//{
//
//    int slow = n, fast = n;
//    //判断快慢指针相遇
//    while (slow && fast)
//    {
//        slow = work(slow);
//        //慢指针每次走1次操作
//        fast = work(work(fast));
//        //快指针每次走2次操作
//        if (fast == slow)
//        {
//            if (fast == 1)
//                return true;
//            else
//                return false;
//        }
//    }
//    return false;
//}
#include <algorithm>
//int lower(int x, int y)
//{
//    if (x < y)
//        return x;
//    else
//        return y;
//}
//int maxArea(vector<int>& height)
//{
//    vector<int> vt;
//    int left = 0, right = height.size() - 1, V = 0;
//    while (left >= right)
//    {
//        V = (right - left) * (lower(height[left], height[right]));
//        vt.push_back(V);
//        if (height[left] < height[right])
//            ++left;
//        else
//            --right;
//    }
//
//    sort(vt.begin(), vt.end());
//    return vt[vt.size() - 1];
//}
//int main()
//{
//    vector<int> v = { 1,8,6,2,5,4,8,3,7 };
//    maxArea(v);
//   
//    
//}
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target)
    {
        vector<vector<int>> vv;
        //第一步给数组排序
        sort(nums.begin(), nums.end());
        //依次固定一个数a  找target-a
        for (int i = 0; i < nums.size();)
        {
            int a = nums[i];
            //依次固定一个数b
            for (int j = i + 1; j < nums.size();)
            {
                int b = nums[j];
                long long tar = (long long)target - a - b;
                //在b后面的区间里使用双指针算法找  target-a-b
                int left = j + 1, right = nums.size() - 1;
                while (left < right)
                {
                    if (nums[left] + nums[right] < tar)
                        left++;
                    else if (nums[left] + nums[right] > tar)
                        right--;
                    else
                    {
                        vv.push_back({ a,b,nums[left],nums[right] });
                        left++;
                        right--;
                        //首先放入数组里，left和right各自走一步
                        //然后检查后面的值是否有相同的，如果是相同的那就跳过
                        while (nums[left] == nums[left - 1] && left < right)++left;
                        while (nums[right] == nums[right + 1] && left < right)--right;

                    }
                    //b也要注意后面如果有相同的也要跳过
                }
                j++;
                while (j < nums.size() && nums[j - 1] == nums[j])j++;
            }

            i++;
            while (i < nums.size() && nums[i - 1] == nums[i])i++;
        }

        return vv;
    }
};
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums)
    {
        int sum = 0, len = INT_MAX;
        for (int left = 0, right = 0; right < nums.size(); right++)
        {
            //进窗口
            sum += nums[right];

            //判断
            while (sum >= target)
            {
                //在出窗口之前先更新长度
                len = len < right - left + 1 ? len : right - left + 1;
                //出窗口
                sum -= nums[left++];
            }

        }
        return len == INT_MAX ? 0 : len;
    }
};