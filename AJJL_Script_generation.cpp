#include <cstring>
#include <iostream>
#include <vector>
// #include <windows.h>
using namespace std;
const string e = "KeyPress \"Enter\", 1";
const string y = "\"";

void welcome(){

    puts("------------------------------------------------------------------");
    puts("�뽫��Ĵ���ճ�����·�");
    puts("Ȼ������EOF���س��Ϳ������г�����");
    puts("");
    puts("******************************************************************");
    puts("*ע�⣺����һ���س�����֤�������һ�к�EOF���֮�仹��һ�п���!*");
    puts("******************************************************************");
    puts("");
    puts("����Ķ������ᱣ�����뱾����ͬĿ¼�µ�shiyan.Q����ļ���");
    puts("Ȼ����򽫻�ر�");
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
    // puts("-------------------------------------------------�Ϸָ���");
    for (int i = 0; i < s.size() - 1; i++)
    {

        cout << "SayString \"" + s[i] + "\"" << endl;
        cout << e << endl;
    }
    // puts("-------------------------------------------------�·ָ���");
    
    
    // cout << s;
    // puts("����ɣ�");
    // system("pause");
}

