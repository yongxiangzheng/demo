#include <QCoreApplication>

// 内存越界
int fun0(){
    char str[4] = {0,};
    strcpy(str,"测试");
    return 0;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    fun0();
    return a.exec();
}
