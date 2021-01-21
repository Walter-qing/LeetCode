/*
给你一个 32 位的有符号整数 x ，返回 x 中每位上的数字反转后的结果。
如果反转后整数超过 32 位的有符号整数的范围 [?231,  231 ? 1] ，就返回 0。
假设环境不允许存储 64 位整数（有符号或无符号）。
 示例 1：
输入：x = 123
输出：321

示例 2：
输入：x = -123
输出：-321

示例 3：
输入：x = 120
输出：21

示例 4：
输入：x = 0
输出：0
*/
#include <iostream>

using namespace std;
class Solution {
public:
    int MAX_VALUE=2147483647;
    int MIN_VALUE=-2147483648;

    int reverse(int x){
        int result = 0;
        while(x!=0){
            int num = x%10;
            cout<<"result="<<result<<endl;
            if(result>0){
                cout<<"进入大于循环";
                if(result > MAX_VALUE / 10||(result == MAX_VALUE/10 && num >MAX_VALUE % 10)){
                    cout<<"进入循环"<<endl;
                    return 0;
                }
            }else if(result<0){
                if(result < MIN_VALUE / 10||(result == MIN_VALUE/10 && num <MIN_VALUE % 10)){
                    return 0;
                }
            }

            cout<<"result="<<result<<endl;
            int a =result*10;
            cout<<"a="<<a<<endl;
            cout<<"num="<<num<<endl;
            result = a+num;
            cout<<"此时result ="<<result<<endl;
            x /=10;
            cout<<x<<endl;

        }
        return result;

    }
};
int main()
{
    Solution s;
    int num = s.reverse(123);//-2147483648

    cout<<num<<endl;

    system("pause");
    return 0;
}
