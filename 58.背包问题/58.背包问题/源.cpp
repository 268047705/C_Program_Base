#include "Solution.h"
int main(void)
{
	int ary[6] = { 1, 2, 3, 4, 5, 6 };//Ҫ�ָ������
	vector<int> b(ary, ary + 6);
	Solution *sol = new Solution();
	sol->canPartition(b);

	system("pause");
	return 0;
}