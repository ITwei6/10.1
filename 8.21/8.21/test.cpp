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
//    priority_queue<int> a;//Ĭ�ϴ��
//
//    priority_queue<int, vector<int>, greater<int> > c;//С��
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
//            //��ȡnums��ÿ�����ĵ�i��������λ�ϵ�����Ȼ��ȫ���������
//        }
//        //��Ϊ������ͬ������Ҫô��ȫ��0��Ҫôȫ��1���������Ҫô��0��Ҫô��3�����Ե�ֻ����һ�ε�����i������λ����1ʱ��
//           //���Ľ��ģ3�Ͳ�Ϊ0����ֻ����һ�εĵ�iλ����0ʱ�������ģ�껹��0
//        if (ret % 3 != 0)
//        {
//            //����ֻ����һ�����ĵ�iλ����1
//            single = single | (1 << i);
//            //��1<<i����ʾ�õ�iλ��������Ϊ1
//        }
//    }
//    return single;
//}

//void duplicateZeros(vector<int>& arr)
//{
//    //�����ҵ����Ը�д�����һ������
//    int cur = 0;
//    int dest = cur - 1;
//    //�����ж�cur�ϵ�������ʲô
//    //while (dest < (int)arr.size() - 1)
//    //{
//    //    if (arr[cur])
//    //    {
//    //        //curλ���ϵ����ݲ�����0����ôdest����1��
//    //        ++dest;
//    //        //ÿ��dest�����Ҫ�ж�һ�£���û�ߵ���ͷ,����ߵ���ͷ�˾�ֹͣ
//    //    }
//    //    else
//    //    {
//    //        //curλ���ϵ����ݵ���0����ôdest��Ҫ��2��
//    //        dest += 2;
//    //    }
//    //    if (dest <(int)arr.size() - 1)
//    //        cur++;
//    //}
//    while (cur < arr.size())
//    {
//        if (arr[cur])
//                {
//                    //curλ���ϵ����ݲ�����0����ôdest����1��
//                    ++dest;
//                    //ÿ��dest�����Ҫ�ж�һ�£���û�ߵ���ͷ,����ߵ���ͷ�˾�ֹͣ
//                }
//                else
//                {
//                    //curλ���ϵ����ݵ���0����ôdest��Ҫ��2��
//                    dest += 2;
//                }
//        if (dest >= arr.size() - 1)
//            break;
//        cur++;
//    }
//    //�ҵ���cur��dest��λ�ö�����Ҫ�ı䣬��Ϊ���Ǿ��ǴӺ���ǰ���ǣ�����cur��dest��λ������
//    //����Ҫע��dest���ܻ�Խ����������Ҫ���Դ���
//    if (dest == arr.size())//�������Խ�������
//    {
//        arr[arr.size() - 1] = 0;
//        dest -= 2;
//        cur--;
//    }
//    while (dest > 0)
//    {
//        if (arr[cur])//���curλ�����Ƿ�0����ô�ͽ���λ�ø��ǵ�destλ����
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
//    //��һ�������һ����д������
//    int cur = 0, dest = -1, n = arr.size();
//    while (cur < n)
//    {
//        if (arr[cur])dest++;
//        else dest += 2;
//        //destÿ�����궼Ҫ�ж�һ���Ƿ�ͷ
//        if (dest >= n - 1)
//            break;
//        cur++;
//    }
//    //�����������
//    if (dest == n)
//    {
//        arr[n - 1] = 0;
//        dest -= 2;
//        cur--;
//    }
//    //������ǰ��д
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
//    //�жϿ���ָ������
//    while (slow && fast)
//    {
//        slow = work(slow);
//        //��ָ��ÿ����1�β���
//        fast = work(work(fast));
//        //��ָ��ÿ����2�β���
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
        //��һ������������
        sort(nums.begin(), nums.end());
        //���ι̶�һ����a  ��target-a
        for (int i = 0; i < nums.size();)
        {
            int a = nums[i];
            //���ι̶�һ����b
            for (int j = i + 1; j < nums.size();)
            {
                int b = nums[j];
                long long tar = (long long)target - a - b;
                //��b�����������ʹ��˫ָ���㷨��  target-a-b
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
                        //���ȷ��������left��right������һ��
                        //Ȼ��������ֵ�Ƿ�����ͬ�ģ��������ͬ���Ǿ�����
                        while (nums[left] == nums[left - 1] && left < right)++left;
                        while (nums[right] == nums[right + 1] && left < right)--right;

                    }
                    //bҲҪע������������ͬ��ҲҪ����
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
            //������
            sum += nums[right];

            //�ж�
            while (sum >= target)
            {
                //�ڳ�����֮ǰ�ȸ��³���
                len = len < right - left + 1 ? len : right - left + 1;
                //������
                sum -= nums[left++];
            }

        }
        return len == INT_MAX ? 0 : len;
    }
};