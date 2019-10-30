#include <cstring>
#include <iostream>
#include <vector>
// #include <windows.h>
using namespace std;
const string e = "KeyPress \"Enter\", 1";
const string y = "\"";

void welcome()
{

    puts("------------------------------------------------------------------");
    puts("请将你的代码粘贴到下方");
    puts("然后回车并输入EOF（Ctrl+Z）就可以运行程序了");
    puts("");
    puts("输出的东西还请自行复制到按键精灵中哦");
    puts("------------------------------------------------------------------");
}

int main()
{

    welcome();
    vector<string> s;
    string t;
    while (cin.peek() != EOF)
    {
        getline(cin, t);
        s.push_back(t);
    }

    int len;
    string temp;
    int tag = 0;
    for (int i = 0; i < s.size(); i++)
    {
        len = s[i].size();
        temp = "";
        int j = 0;
        for (int l = 0; l < len; l++)
        {
            if (s[i][l] == '\"')
            {
                tag = 1;
            }
        }

        if (tag == 1)
        {
            temp = s[i];
            for (j = 0; j < len; j++)
            {
                if (temp[j] == '\"')
                {
                    temp.insert(j, y);
                    // cout << j << endl << temp << endl;
                    j++;
                }
            }
            s[i] = temp;
        }
    }
    puts("");
    puts("");
    puts("已完成！");
    puts("请将上下分割线中间的内容复制到按键精灵的脚本中哦");
    puts("-------------------------------------------------上分割线");
    puts("");
    for (int i = 0; i < s.size(); i++)
    {

        cout << "SayString \"" + s[i] + "\"" << endl;
        cout << e << endl;
    }
    puts("");
    puts("-------------------------------------------------下分割线");

    // cout << s;

    system("pause");
}
