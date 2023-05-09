## CCTYPE
```cpp
#include <cctype>  
using namespace std;

string str;

isspace(str[2]);	//判断是否为空格
```



# STL

## cstring

```cpp
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std；
    
string str;


getline(cin, str);	//输入一整行


str.substr(4, 5);  //从4位置开始向后截取5个字符


//查找子串的第一次和最后一次出现的位置，查找最后一次位置用.rfind()
int result = str.find(sub);
if (result != string::npos) {  //找不到会返回string::npos
    cout << result << endl;
} else {
    cout << "-1" << endl;
}


//判断是否回文数
bool isPalindrome(int n) {
    string str = to_string(n);  //可以直接把整数转化为字符串的形式
    string reversed_str = str;  //复制一份，接下来操作副本，再与原字符串比较
    reverse(reversed_str.begin(), reversed_str.end());

    return str == reversed_str;
}
```

