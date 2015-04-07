// // 模拟一个解密过程，首先将第1个数删除，紧接着将第2个数放到这串数的末尾。。。以此类推

// #include <stdio.h>

// int main()
// {
// 	int q[100] = { 6, 3, 1, 7, 5, 8, 9, 2, 4 };
// 	int head, tail;  //队首，队尾的下一个位置

// 	head = 0;
// 	tail = 9; //队列中已经有9个元素了，tail指向队尾的后一个位置
// 	while (head < tail) //当队列不为空时执行循环。（规定队首和队尾重合时，队列为空）
// 	{	
// 		//打印队首并将队首出队
// 		printf("%d  ", q[head]);
// 		head++;

// 		//将新队首的数添加到队尾
// 		q[tail] = q[head];
// 		tail++;

// 		//再将队首出队
// 		head++;
// 	}

// 	printf("\n");
// 	return 0;
// }

//////////////////////////////////////

#include <stdio.h>

struct queue
{
	int data[100]; //队列的主体，用来存储内容
	int head; //队首
	int tail; //队尾
};

int main()
{
	struct queue q;
	int i;

	q.head = 0;
	q.tail = 0;
	for (i=0; i<9; i++) 
	{
		scanf("%d", &q.data[q.tail]);
		q.tail++;
	}

	while (q.head < q.tail)
	{
		printf("%d ", q.data[q.head]);
		q.head++;

		q.data[q.tail] = q.data[q.head];
		q.tail++;

		q.head++;
	}
	printf("\n");
	return 0;
}


