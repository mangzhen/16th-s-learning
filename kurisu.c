#include<stdio.h>

int main()
{
  //分支结构：if switch
  //if语句：
  /*
  if (关系表达式)
  {
    语句体;
  }
  */
  int a = 114514;

  if(a > 10)
  {
    printf("a确乎是>10\n");
  }

  printf("请输入体温(浮点！)\n");
  double temperature;
  scanf("%lf",&temperature);
  
  if(temperature > 37.5)
  {
    printf("你发烧了！\n");
  }

  int blood = 200;
  int damage;
  int restore = 100;
  printf("请输入受到伤害\n");
  scanf("%d",&damage);

  /*if(damage <= restore)
  {
    printf("你最终的生命值为%d\n",blood);
  }
  */

  int blood1 = blood - damage + restore;
  if(blood1 >= blood)
  {
    printf("你最终生命值为%d\n",blood);
  }
  /*
  细节1：在C语言中，若判断的结果是一个数字，则非0表示成立，0表示不成立
  细节2：若大括号里的语句只有一行，那么大括号可省略不写
  */
  if(1)
  printf("你无敌了");


  return 0;
}
