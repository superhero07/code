#include <stdio.h>
//找零计算器
/*int main()
{
	int price = 0;
	int bill = 0;
	//读入金额和面值
	printf("请输入金额\n");
	scanf("%d",&price);
	printf("请输入面值\n");
	scanf("%d",&bill);
	if(bill<price)
	{
		printf("面值不足\n");
	}
	else 
	{
		printf("应该找您：%d\n",bill-price);
	}

    return 0;
}*/

//比较两个数的大小
/*int main()
{
	int a,b;
	int max;
	printf("请输入两个数：");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		max=a;
	}
	else
	{
		max=b;
	}
	printf("最大的数为：%d",max);
	return 0;
}*/
//计算薪水
/*int main()
{
	const double RATE=8.5;
	const double STANDARD=40.5;
	double pay=0.0;
	int hours;
	printf("请输入工作时间：\n");
	scanf("%f",&hours);
	if(hours>STANDARD)
	{
		pay=(hours-STANDARD)*10.5+STANDARD*RATE;
	}
	else{
		pay=STANDARD*RATE;
	}
	printf("您的工资为：%lf",pay);
	return 0;
}*/
//判断成绩
int main()
{
	const int pass=60;
	int grade;
	printf("请输入你的分数：");
	scanf("%d",&grade);
	if(grade>=60)
	{
		printf("恭喜你，通过考试了！");
	}else
	{
		printf("很遗憾，你未通过考试");
	}
	return 0;
}