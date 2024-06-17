# 数据结构

## 文件结构

- main.c 测试用主程序
- xx.h 数据结构头文件
- xx.c 数据结构源文件
- CMakeLists.txt CMake文件
- build/build.sh 编译脚本, 
    ```bash
    cd ./build
    ./build.sh [CMake文件所在目录]
    ```
- build/clean.sh 清除build文件夹中内容
    ```bash
    cd ./build
    ./clean.sh
    ```

## List(线性表)

- singleLinkList(单链表)
- loopLinkList(单循环链表)
- doubleLinkList(双链表)
- doubleLoopLinkList(双循环链表)
- stack(栈)
- queue(队列)
队列的补充内容