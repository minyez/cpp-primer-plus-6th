
# 第四章 复合类型

## 概念

- C 风格字符串: 以空字符`\0`结尾的字符数组. 在用字符串常量初始化时, 空字符被自动包含. 字符串处理函数根据空字符位置来处理, 而不是数组长度.

    ```cpp
    char fish[] = "Bubbles"; // 自动计算长度
    ```

- `string`类字符串: 表示字符串的实体, 在`string`头文件中.
- 结构
- 共用体
- 枚举
- `new`和`delete`动态内存管理
- 自动存储: 函数内部定义的常规变量, 在所属函数调用时自动产生, 函数结束时消亡. **通常存储在栈 (stack) 中**, 执行代码块时依次加入, 离开时以相反顺序释放, 即后进先出 (last in, first out, LIFO).
- 静态存储: 整个程序执行期间都存在的存储方式. 两种定义方式
  - 在函数外定义
  - 在声明中使用 `static`.
- 动态存储: 用 `new` 和 `delete` 动态分配内存池的方式. 这一内存池称为自动存储空间 (free store) 或者 **堆 (heap)**.
- `new` 运算符：为指针分配内存地址，而不必声明内存对应的变量名。
- 指针
  - 声明和初始化: `int* p` 声明一个整形指针 `p`, `*p` 是整形.
    `int* p`, `int *p`, `int * p` 和 `int*p` 都是可接受的形式。
    不同的是，在 C 中 `int* p1,p2` 将声明一个整形指针 `p1` 和一个整形 `p2`. 而在 C++ 中，由于 `int*` 是一个复合类型，
    两者都会被声明为整形指针。

## 模板类

`vector`类: 基本上是使用 `new` 创建动态数组的替代品, 自由存储, 堆. 效率比数组稍低.

`array`类: 固定长度, 自动存储, 栈. 效率同数组, 但是更方便和安全. 定义方式

```cpp
array<int, 5> ai;
```


## TIPS

- 数组初始化规则: 只有在定义时才能初始化. 但可以下标赋值. C++11 允许初始化时省略等号, 空的大括号会使所有元素初始化为 0.

  ```cpp
  int cards[4] = {3, 6, 8, 10};
  float a[5] = {5.0, 2.5}; // 初始化前两个数
  short s[] = {1, 5, 3, 8}; // 编译器计算数组规模
  ```

- 区别单引号的字符常量`'S'`和双引号字符串`"S"`. 后者包含 S 和一个空字符`\0`.
- 存储字符串的数组长度不能小于`strlen(s)+1`.
- `cin`使用空白来确定字符串结束位置, 因此获取字符数组输入时只读取一个单词
- `cin.getline(s, l)`按行读取字符串, `cin.get(s, l)`作用相同但换行符被**保留**在流中.
- string 类和字符数组有相同初始化方法. string 对象可以相互赋值, `+`拼合, 用来代替 C 字符串函数: `strcpy(s1,s2)`将`s1`复制给`s2`, `strcat(s1,s2)`将`s2`拼到`s1`末尾. 同时可以避免目标数组过小的危险.
- 字符串常量/字面值前缀: `wchar_t`用`L`, `char16_t`用`u`, `char32_t`用`U`. 后两者长度的获取用`sizeof`函数.
- 原始字符串`R`需要界定符`"x(`和`)x"`, `x`是任意基本字符的组合. `R`可以与其他前缀组合, 先后无所谓.
- 结构体赋值: 先定义成员, 再声明结构体变量. 初始化类似数组, 花括号+逗号分隔值列表. 结构体变量之间的赋值运算遵循"成员赋值".
- 当数据项使用两种弄或更多种格式, 但不会同时使用时, 可用共用体 (union) 类型来节省内存.
- 指针声明只会为指针分配地址，但不会为指针所指向的数据分配内存。因此一定要给指针初始化为一个确定的、适当的地址。
- `new []` 和 `delete []` 成对使用. 不要用 `delete` 释放两次. 空指针可以 `delete`.
- 数组名通常解释为数组第一个元素的内存地址.
- `cout` 将 char 数组/指针/字符串常量解释为字符串第一个字符的地址, 传入后打印该地址字符, 并继续打印直到遇到空字符 `\0`.

## 练习

Ex01
![ex01](images/ex01.png)

Ex02
![ex02](images/ex02.png)

Ex03 and 04
![](images/ex03.png)

Ex05
![](images/ex05.png)

Ex06 and 09
![](images/ex06.png)

Ex07 and 08
![](images/ex07.png)

Ex10
![](images/ex10.png)

## Trouble shooting

在 CI 上用 `g++` 9 和 10 编译 EX09 时会出现下面的报错.

```
ex09.cpp: In function ‘int main(int, char**)’:
ex09.cpp:19:41: error: no match for ‘operator=’ (operand types are ‘CandyBar’ and ‘<brace-enclosed initializer list>’)
   19 |     snacks[0] = {"Mocha Munch", 2.3, 350};
      |                                         ^
ex09.cpp:9:8: note: candidate: ‘constexpr CandyBar& CandyBar::operator=(const CandyBar&)’
    9 | struct CandyBar {
      |        ^~~~~~~~
ex09.cpp:9:8: note:   no known conversion for argument 1 from ‘<brace-enclosed initializer list>’ to ‘const CandyBar&’
ex09.cpp:9:8: note: candidate: ‘constexpr CandyBar& CandyBar::operator=(CandyBar&&)’
ex09.cpp:9:8: note:   no known conversion for argument 1 from ‘<brace-enclosed initializer list>’ to ‘CandyBar&&’
ex09.cpp:20:37: error: no match for ‘operator=’ (operand types are ‘CandyBar’ and ‘<brace-enclosed initializer list>’)
   20 |     snacks[1] = {"Geligao", 1.1, 400};
      |                                     ^
ex09.cpp:9:8: note: candidate: ‘constexpr CandyBar& CandyBar::operator=(const CandyBar&)’
    9 | struct CandyBar {
      |        ^~~~~~~~
ex09.cpp:9:8: note:   no known conversion for argument 1 from ‘<brace-enclosed initializer list>’ to ‘const CandyBar&’
ex09.cpp:9:8: note: candidate: ‘constexpr CandyBar& CandyBar::operator=(CandyBar&&)’
ex09.cpp:9:8: note:   no known conversion for argument 1 from ‘<brace-enclosed initializer list>’ to ‘CandyBar&&’
ex09.cpp:21:38: error: no match for ‘operator=’ (operand types are ‘CandyBar’ and ‘<brace-enclosed initializer list>’)
   21 |     snacks[2] = {"Haoliyou", 0.4, 120};
      |                                      ^
ex09.cpp:9:8: note: candidate: ‘constexpr CandyBar& CandyBar::operator=(const CandyBar&)’
    9 | struct CandyBar {
      |        ^~~~~~~~
ex09.cpp:9:8: note:   no known conversion for argument 1 from ‘<brace-enclosed initializer list>’ to ‘const CandyBar&’
ex09.cpp:9:8: note: candidate: ‘constexpr CandyBar& CandyBar::operator=(CandyBar&&)’
ex09.cpp:9:8: note:   no known conversion for argument 1 from ‘<brace-enclosed initializer list>’ to ‘CandyBar&&’
make[1]: *** [Makefile:8: ex09.o] Error 1
make: *** [Makefile:8: @ch04] Error 2
make[1]: Leaving directory '/home/runner/work/cpp-primer-plus-6th/cpp-primer-plus-6th/ch04'
Error: Process completed with exit code 2.
```

用 11 在本地 (11.0.1) 和 CI (11.1.0) 上均正常编译通过.
