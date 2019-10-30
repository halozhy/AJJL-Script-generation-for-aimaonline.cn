#include <cstring>
#include <iostream>
#include <vector>
// #include <windows.h>
using namespace std;
const string e = "KeyPress \"Enter\", 1";
const string y = "\"";

void welcome(){

    puts("------------------------------------------------------------------");
    puts("请将你的代码粘贴到下方");
    puts("然后输入EOF并回车就可以运行程序了");
    puts("");
    puts("******************************************************************");
    puts("*注意：请多打一个回车，保证程序最后一行和EOF标记之间还有一行空行!*");
    puts("******************************************************************");
    puts("");
    puts("输出的东西将会保存在与本程序同目录下的shiyan.Q这个文件中");
    puts("然后程序将会关闭");
    puts("------------------------------------------------------------------");
}

    
int main()
{
    
    welcome();
    freopen("shiyan.Q","w",stdout);
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
    for (int i = 0; i < s.size() - 1; i++)
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

    // puts("");
    // puts("");
    // puts("-------------------------------------------------上分割线");
    for (int i = 0; i < s.size() - 1; i++)
    {

        cout << "SayString \"" + s[i] + "\"" << endl;
        cout << e << endl;
    }
    // puts("-------------------------------------------------下分割线");
    
    
    // cout << s;
    // puts("已完成！");
    // system("pause");
}

