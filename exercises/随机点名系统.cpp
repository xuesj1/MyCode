#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
void print()
{
    cout << R"( /$$$$$$$                            /$$                                                   /$$ /$$                           /$$ /$$
| $$__  $$                          | $$                                                  | $$| $$                          | $$| $$
| $$  \ $$  /$$$$$$  /$$$$$$$   /$$$$$$$  /$$$$$$  /$$$$$$/$$$$         /$$$$$$   /$$$$$$ | $$| $$        /$$$$$$$  /$$$$$$ | $$| $$
| $$$$$$$/ |____  $$| $$__  $$ /$$__  $$ /$$__  $$| $$_  $$_  $$       /$$__  $$ /$$__  $$| $$| $$       /$$_____/ |____  $$| $$| $$
| $$__  $$  /$$$$$$$| $$  \ $$| $$  | $$| $$  \ $$| $$ \ $$ \ $$      | $$  \__/| $$  \ $$| $$| $$      | $$        /$$$$$$$| $$| $$
| $$  \ $$ /$$__  $$| $$  | $$| $$  | $$| $$  | $$| $$ | $$ | $$      | $$      | $$  | $$| $$| $$      | $$       /$$__  $$| $$| $$
| $$  | $$|  $$$$$$$| $$  | $$|  $$$$$$$|  $$$$$$/| $$ | $$ | $$      | $$      |  $$$$$$/| $$| $$      |  $$$$$$$|  $$$$$$$| $$| $$
|__/  |__/ \_______/|__/  |__/ \_______/ \______/ |__/ |__/ |__/      |__/       \______/ |__/|__/       \_______/ \_______/|__/|__/)"
         << endl
         << endl;
}
void menu()
{
    cout << "*************************************************************" << endl;
    cout << "*                十六(石榴)班随机点名系统                   *" << endl;
    cout << "*    Sixteen (Pomegranate) Class Random Roll Call System    *   " << endl;
    cout << "*                 版本1.0   Version 1.1                     *" << endl;
    cout << "*************************************************************" << endl;
}
void loading()
{
    string ch = "█";
    for (int i = 0; i < 100; i++)
    {
        if (i < 100 - 1)
        {
            printf("\r读取中[%.2lf%%]:", i * 100.0 / (100 - 1));
        }
        else
        {
            printf("\r读取完成[%.2lf%%]:", i * 100.0 / (100 - 1));
        }
        int show_num = i * 40 / 100;
        for (int j = 1; j <= show_num; j++)
        {
            cout << "█";
        }
    }
    cout << endl;
}
int main()
{
    int n;
    mt19937 myran(time(0));
    uniform_int_distribution<> distrib(0, 51);
    string s[55] = {"王晗路", "贾梦垚", "戴嘉怡", "穆合塔拜尔·木合塔尔", "王一航", "杨奕晨", "王照普", "戈相澎", "熊梦涵", "权朝瑞", "贺嘉俊", "马铭瑄", "张懿轩", "邓宇涵",
                    "秦栋科", "张梓浩", "安麒翰", "王嘉钰", "李佳妮", "李子豪", "代博雅", "母嘉艺", "李霖翰", "李烨开", "张硕航", "杨潇童", "吴柯言", "朱梓宁",
                    "徐诺言", "万璟萱", "杨冉喆", "宋俊泽", "聂雨菡", "宁莹莹", "蒋浦妍", "刚婧萱", "李奕霏", "杨凯乐", "王滨汉", "刘明哲", "百合·阿不来提",
                    "晁煜杰", "郭芯妤", "刘瀚屿", "唐曦源", "杨佳怡", "吕济桐", "付沛祺", "张怡晨", "凌墨函", "陈雨辰", "谢振宇"};
    system("title 十六班随机点名系统");
    print();
    menu();
    cout << "欢迎使用点名系统" << endl;
    while (1)
    {
        cout << "输入1开始(重来),输入0结束" << endl;
        cin >> n;
        if (n == 1)
        {
            int ran = distrib(myran);
            system("cls");
            print();
            cout << "让我们看看是哪位幸运儿？" << endl;
            loading();
            cout << "恭喜-> " << ran + 1 << '.' << s[ran] << endl;
            Sleep(1000);
        }
        else if (n == 0)
        {
            cout << "欢迎下次使用" << endl;
            Sleep(2000);
            return 0;
        }
        else
            cout << "输入不合法" << endl;
    }
    return 0;
}
