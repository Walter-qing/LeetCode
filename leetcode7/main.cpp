/*
����һ�� 32 λ���з������� x ������ x ��ÿλ�ϵ����ַ�ת��Ľ����
�����ת���������� 32 λ���з��������ķ�Χ [?231,  231 ? 1] ���ͷ��� 0��
���軷��������洢 64 λ�������з��Ż��޷��ţ���
 ʾ�� 1��
���룺x = 123
�����321

ʾ�� 2��
���룺x = -123
�����-321

ʾ�� 3��
���룺x = 120
�����21

ʾ�� 4��
���룺x = 0
�����0
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
                cout<<"�������ѭ��";
                if(result > MAX_VALUE / 10||(result == MAX_VALUE/10 && num >MAX_VALUE % 10)){
                    cout<<"����ѭ��"<<endl;
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
            cout<<"��ʱresult ="<<result<<endl;
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
