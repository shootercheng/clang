2018年 10月 16日 星期二 22:37:05 CST
## C运算符
>运算符是一种编译器能识别的数学或逻辑操作符号。C中的大多数运算符和Java中用法一样

1.算数运算符号

2.关系运算符

3.逻辑运算符

4.位运算符

5.赋值运算符

6.杂项运算符


### 算数运算符
	C语言支持的所有算数运算符，假设变量a的值为10，假设变量b的值为20,a,b为int类型

|运算符|描述|实例|C结果|Java结果|
|:--:|:--:|:--:|:--:|:--:|
|+|两个操作数相加|a+b|20|20|
|-|第一个减去第二个|a-b|10|10|
|*|两个操作数相乘|a*b|200|200|
|/|第一个操作数除以第二个操作数|b/a|2|2|
|%|第一个操作除以第二个操作数取余数|b%a|0|0|
|++|自增运算符，整数值增加1|a++|11|11|
|--|自减运算符，整数值减少1|a--|9|9|

### 关系运算符

|运算符|描述|实例|C结果|Java结果|注意|
|:--:|:--:|:--:|:--:|:--:|:--:|
|==|检查两个数值是否相等，返回布尔类型结果|a==b|false|false|Java中包装类Integer、String等不能用==|
|!=|检查两个数值是否不相等，返回布尔类型结果|a!=b|ture|true|同上|
|>|检查左操作数是否大于右边操作数，返回布尔|a>b|false|false|...|
|<|................小于..........,返回布尔|a<b|true|true|...|
|>=|...............大于等于...............|a>=b|false|false|...|
|<=|...............小于等于...............|a<=b|false|false|...|



### 逻辑运算符

|运算符|描述|实例|C结果|Java结果|注意|
|:--:|:--:|:--:|:--:|:--:|:--:|
|&&|逻辑与运算符|1&&1 true&&true|true|true|Java中还有&|
||||逻辑或运算符|1||0 |true|true|....|
|!|逻辑非运算符|!0 !false|true|true|...|


### 赋值运算符

### 杂项运算符

### C中运算符优先级

