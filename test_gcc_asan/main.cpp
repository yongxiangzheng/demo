#include <QCoreApplication>

// 内存越界
int fun0(){
    char str[4] = {0,};
    strcpy(str,"测试");
    return 0;
}

//  内存泄漏
char *fun1(char *str) {
    char *p;
    p = new char [64];
    strcpy(p,str);
    return p;
}

int fun2(){
    char *str=fun1((char*)"abcd");
    printf("str=%s\n",str);
    return 0;
}

// 非法内存
int fun3(){
    char *p = NULL;
    strcpy(p,"a");
    return 0;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //fun0();
    fun2();
    //fun3();
    //return a.exec();
}
