// 共有資源の例
#include<iostream>
#include<cstring>

class output
{
        static char outbuf[255];    // これが共有資源
        static int inuse;           // 0ならバッファが利用可、そうでなければ不可
        static int oindex;          // 出力バッファのインデクス
        char str[80];
        int i;                      // str内の次のインデクス
        int who;                    // オブジェクトの識別、0より大でなければならない
    public:
        output(int w, char *s)  { strcpy(str, s); i = 0; who = w; }

        /* この関数はバッファを持っているなら-1を返し、出力が終わっていれば0を返し、
           まだバッファを使っているならwhoを返す
        */

       int putbuf()
       {
           if(!str[i])
           {
               // 出力終了
               inuse = 0;   // バッファ解放
               return 0;    // シグナル終了
           }
           if(!inuse)   inuse = who;        // バッファを得る
           if(inuse != who)
           {    
               std::cout << "Process " << who << " sendingchar\n";
               return -1;   // どこかで使われている
           }

           if(str[i])
           {
               outbuf[oindex] = str[i];
               std::cout << "Process " << who << " sending char\n";
               i++; oindex++;
               outbuf[oindex] = '\0';       // ヌルになっている　終了
               return 1;
           } 
       }
       void show()  { std::cout << outbuf << '\0'; }
};

char output::outbuf[255];   // これが共有資源
int output::inuse = 0;      // 0ならバッファが利用可、そうでなければ不可
int output::oindex = 0;     // 出力バッファのインデクス

main()
{
    output o1(1, "This is a test"), o2(2, " of statics");

    while(o1.putbuf()) | o2.putbuf());  // 文字出力

    o1.show();

    return 0;
}