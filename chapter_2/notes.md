#  第二章 c++ 概述

**关于指针**

> const char * name  = "Thanos"

**指向常量的指针** 可以改变指向的位置，不能改变指向对象的value
name = "stark "  这个是ok的
name[3] == 'a' 这个报错

> char * const name = 'Thanos'

**常指针**
name[3] = 's' 这个是ok的
name = 'stark' 这个报错 不能改变指向的位置

**2.3.6 函数**

看ex4_func.cpp

**2.3.10 作用域 '::'**

看ex5_loc_glo.cpp

**2.3.13 new and delete**

> int *p;
>
> p = new int;

delete
> delete p 

**2.3.14 引用**

> int i = 5;
> 
> int &j = i;


**Exercise**
