/*���ڷǸ����� X ���ԣ�X ��������ʽ��ÿλ���ְ������ҵ�˳���γɵ����顣���磬��� X = 1231����ô��������ʽΪ [1,2,3,1]��
  �����Ǹ����� X ��������ʽ A���������� X+K ��������ʽ��
ʾ�� 1��
���룺A = [1,2,0,0], K = 34
�����[1,2,3,4]
���ͣ�1200 + 34 = 1234
ʾ�� 2��
���룺A = [2,7,4], K = 181
�����[4,5,5]
���ͣ�274 + 181 = 455
ʾ�� 3��
���룺A = [2,1,5], K = 806
�����[1,0,2,1]
���ͣ�215 + 806 = 1021
ʾ�� 4��
���룺A = [9,9,9,9,9,9,9,9,9,9], K = 1
�����[1,0,0,0,0,0,0,0,0,0,0]
���ͣ�9999999999 + 1 = 10000000000
��ʾ��
1 <= A.length <= 10000
0 <= A[i] <= 9
0 <= K <= 10000
��� A.length > 1����ô A[0] != 0

*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        int digit = A.size();
        vector<int> ret;
        for(int i=digit-1;i>0;i--){
            int sum = A[i]+K%10;
            K /= 10;
            if(sum >= 10){
                sum -= 10;
                K++;
            }
            ret.push_back(sum);
        }
        for(;K>0;K /=10){
            ret.push_back(K%10);
        }
        reverse(ret.begin(),ret.end());
        return ret;
    }
};


int main()
{
    int a[5]={1,2,3,4,5};
    vector<int> v(a,a+5);

    Solution s;

    v=s.addToArrayForm(v,55);
    for(vector<int>::iterator it= v.begin();it !=v.end();it++){
        cout<<*it<<endl;
    }
    return 0;
}
