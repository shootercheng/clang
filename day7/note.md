2018年 10月 19日 星期五 21:24:07 CST

### C作用域规则
	作用域时程序中定义的变量所存在的区域,超过该区域变量就不能被访问。C语言中有三个地方
可以声明变量
	1.在函数或块内部的局部变量
	2.在所有函数外部的局部变量
	3.在形式参数的函数参数定义

### C中数据结构类型

#### 数组
	存储一个固定大小***相同类型***元素的顺序集合。

```
	int n[10];
	n[0] = 1;
	...
	n[9] = 10;
```

#### enum(枚举)
