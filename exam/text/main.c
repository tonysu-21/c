// 输入一个整数，将它逆序输出
// long res=0
// flag<0
// res*10+number%10

// 输入一批正整数（以零或负数为结束标志），判断每个数从高位到低位的各位数字是否按值从小到大排列
// fun(n) != 0
// cur_digit
// m = m /10;

// 输入字符'y'或'Y'，则在屏幕上输出字符串"Yes."；输入其它字符，则在屏幕上输出字符串"No."
// YesNo(ch);
// printf("Yes."); break;
// printf("No.");

// 简化的插入法排序
// (x < a[i])
// (j = n-1; j >= i; j--)
// a[i] = x;
// a[i+1] = a[i];
// a[i+1] = x;

// 输入一个正整数 n (1≤n≤10)和n 阶方阵a的元素，如果方阵a中的所有元素都沿主对角线对称，输出“Yes”, 否则，输出“No”
// a[i][k] != a[k][i]
// found = 0
// found == 0

// 字符串复制
// (str1[i] != '\0')
// str2[i] = str1[i];
// str2[i] = '\0';

// 删除字符串中的空格（使用1个数组）
// (str[i] != ' ' )
// j++;
// str[j] = '\0';

// 将给定的n个整数存入数组后，再按逆序输出数组中的元素，输出时相邻数字中间用一个空格分开，行末不得有多余空格
// (i = n-1; i >= 0; i--)

// 选择法排序：本题要求将给定的n个整数从小到大排序后输出。输出时相邻数字中间用一个空格分开，行末不得有多余空格
// k
// (i=k+1;i<n;i++)
// (a[i]<a[index])
// temp=a[index]; a[index]=a[k]; a[k]=temp;
// (i==0)

// 二分查找法
// (a[i-1]>=a[i])
// sorted=0;
// left=0,right=n-1;
// mid=(left+right)/2;
// found=1;
// right=mid-1;
// left=mid+1;

// 冒泡法排序
// (j = 0; j < n-i; j++ )
// (a[j] > a[j+1])
// temp = a[j]; a[j] = a[j+1]; a[j+1] = temp;
// (i == 0)
// printf(" %d", a[i]);

// 求一个给定的m×n矩阵各列元素之和
// (j = 0; j < n; j++)
// sum = 0;
// (i = 0; i < m; i++)

// 大小写字母转换（使用1个数组）
// (str[i] != '\0')
// str[i] = str[i]-'a'+'A';

// 删除字符串中的空格（使用2个数组）
// (str1[i] != ' ' )
// str2[j] = str1[i];
// str2[j] = '\0';

// 是负数吗？
// ((str[i] = getchar()) != '#')
// ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'b') || (str[i] >= 'A' && str[i] <= 'B'))
// (j == 0 && str[i] == '-' && flag == 0)