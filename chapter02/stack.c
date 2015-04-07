//判断字符串是否为回文

#include <stdio.h>
#include <string.h>

int main()
{
	char a[100], s[100];
	int i, len, mid, next, top;

	gets(a);
	len = strlen(a);
	printf("length = %d\n", len);
	mid = len/2 - 1;

	top = -1;

	for(i=0; i<=mid; i++)
	{
		s[++top] = a[i];
	}

	//判断字符串的长度是奇数还是偶数，并找出需要进行字符匹配的起始下标
	if(len%2 == 0)
	{
		next = mid + 1;
	}
	else
	{
		next = mid + 2;
	}

	//开始匹配
	for(i=next; i<=len-1; i++)
	{
		if(a[i] != s[top])
			break;
		top--;
	}

	if (top == -1)
		printf("YES");
	else
		printf("NO");

	printf("\n");
	return 0;

}

// 栈还可以用来进行验证括号的匹配。
// 比如输入一行只包含“()[]{}”的字符串，判断形如“([{}()])”或者“{()[]{}}”是否可以正确匹配