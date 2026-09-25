#include<stdio.h>
int main()
{
  //if的第二种写法
  int satisfy = 0;//这里旨在提前放一个保底值，否则后面输非数字会冒-858993460

  
  printf("请输入好感度(please don't input float!お願いだから！)\n");

  //scanf("%d",&satisfy);一次scanf是拿一次值，故这里只能写一个！
  if(scanf("%d",&satisfy)!= 1)
  {
  printf("你输入的不是数字,バカ！\n");
  return 1;
  }
  if(satisfy >= 200)
  {
    printf("好き好き大好き!!!\n");
  }
  else
  {
   printf("バカ!うるせぇ！\n");
  }
  int a;
  scanf("%d",&a);

  printf("不是，你为什么要输入浮点数！？a = %d\n",a);
  //好玩的来了，现在两个scanf，理论上你可以输入浮点数，但是会发生很怪异的事
  //你输入200.4，第二个scanf会直接录入下一个字符，但由于下一个字符是小数点，所以就直接失败了，最终输出a = 0
  return 0;
}
