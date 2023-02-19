# C++教學大綱
## 授課教師：陳定宏

## 教材
* [歡迎回到 C++ (現代 C++) | Microsoft Learn](https://learn.microsoft.com/zh-tw/cpp/cpp/welcome-back-to-cpp-modern-cpp?view=msvc-170)
*	[cplusplus.com](https://cplusplus.com)
*	[cppreference.com](https://en.cppreference.com/w/)
* [现代 C++ 教程: 高速上手 C++ 11/14/17/20 - Modern C++ Tutorial: C++ 11/14/17/20 On the Fly (changkun.de)](https://changkun.de/modern-cpp/) 

# Week 1
* Teams 教學
  - 確定學生加入Teams團隊
* 說明線上教材與資源
* 說明成績評量方式
  - 作業
  - 期末上機考試
* 安裝 [Visual Studio 2022 community](https://visualstudio.microsoft.com/zh-hant/vs/community/)
  - 每個學生要安裝VS2022
* C++歷史
  -[C++ 維基百科](https://zh.wikipedia.org/zh-tw/C%2B%2B)
  ![image](https://user-images.githubusercontent.com/1496963/210729320-706ab5db-f1c3-4d7c-ab92-374d6c526116.png)
 
* Hello World
  - Bjarne Stroustrup 的Hello world 版本，它使用C++ 標準函式庫將字串寫入標準輸出
  - C++ 程式的文字是由權杖和 空格符所組成。 語彙基元是 C++ 程式中對編譯器有意義的最小項目。 C++ 剖析器會辨識這些類型的權杖：
    * 關鍵字
    * 識別碼
    * 數值、布林值和指標常值
    * 字串和字元常值
    * 使用者定義的常值
    * 運算子
    * 標點符號
  - [C++標準函式庫(C++ Standard Library)](https://zh.wikipedia.org/zh-tw/C%2B%2B%E6%A8%99%E6%BA%96%E5%87%BD%E5%BC%8F%E5%BA%AB)
```c++
#include <iostream>
using namespace std;

int main() {
  cout << "hello world" << endl;
  return 0;  
}
```
  
* [程式編譯過程](https://medium.com/@alastor0325/https-medium-com-alastor0325-compilation-to-linking-c07121e2803)
 ![image](https://user-images.githubusercontent.com/1496963/210730899-b1e5b78e-0ae0-4d75-bab5-9c3956c919a9.png)
  - **預處理 (pre-processing)**：
    在這個階段編譯器主要的工作是展開引用的外部檔案、 macro 及 define 。
    1. 刪除所有的 #define 並展開所有 macro
    2. 處理所有的預編譯條件，例如 #ifdef , #include (展開引用文件)
    3. 刪除所有 註解
    4. 增加 行號以及 文件識別名，讓編譯器在編譯失敗時可以顯示錯誤的行數
  - **編譯 (compilation)**：此階段編譯器會將展開後的程式碼轉換成組合語言。此階段又可以細分成四個小步驟，分別為 掃描 (scan)、語法分析 (parsing) 、語意分析 (semantic analysis) 與 源代碼優化 (source code optimization) 與 代碼生成與優化(code generation and optimization)。
  - **彙編 (assembly)**：將組合語言轉換成對應的機器語言
  - **鏈接 (linking)**：這個步驟是讓編譯器能夠知道代碼中外部函數或是外部變數明確的 位址 。比方說，我們在檔案 main.cpp 中引用了別的檔案 func.cpp 中的 foo() 函數。我們必須先知道這個函數到底在哪裡，才可以呼叫它。鏈結要做的事情，就是把多個不同的文件組合在一起，成為一個完整的整體。以這個例子來說，func.cpp 定義 (define) 函數 foo() ，而 main.cpp 引用 (reference) 了函數 foo()。每個被定義的變量都應該要有一個獨一無二的名稱，引用的時候才不會跟其他變量混淆。我們將變量或函數通稱為符號 (symbol)，而他們的名稱則稱為符號名 (symbol name)。在編譯期轉成組合語言時，我們已經知道代碼會呼叫哪些符號，但是我們並不知道這些符號真正的位址。當最後將代碼轉成機器語言時，我們會先賦予這些符號一個假的位址，並且用一個重定位表去記錄有哪些符號的位址是假的，之後需要再次修改。而這些資訊就會被記錄在目標文件內的符號表 (symbol table) 以及重定位表 (relocation table) 中。而在此階段，鏈結器 (linker) 便會分配符號所需的地址，並且依照符號表與重定位表來重新修改機器語言的內容。

* 申請github帳號
* Git概念
  - Git文件
  - [用Git版本控制【Git的基本介紹】 | 連猴子都能懂的Git入門指南](https://backlog.com/git-tutorial/tw/intro/intro1_1.html)
  - [Git新手入門教學- part 1 - 寫點科普Kopuchat](https://kopu.chat/2017/01/18/git%E6%96%B0%E6%89%8B%E5%85%A5%E9%96%80%E6%95%99%E5%AD%B8-part-1/)
  - [Visual Studio 中的Git 體驗](https://docs.microsoft.com/zh-tw/visualstudio/version-control/git-with-visual-studio)
