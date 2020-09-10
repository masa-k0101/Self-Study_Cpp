// 配列ベース出力を使った例
#include<iostream>
#include<strstream>

main()
{
    char buf[255];      // 出力バッファ

    std::ostrstream ostr(buf, sizeof buf);   // 出力配列をオープン

    ostr << "Array-based I/O uses stream just like ";
    ostr << "'normal' I/O\n" << 100;
    ostr << ' ' << 123.23 << '\n';

    // マニュピレータも使える
    ostr << std::hex << 100 << ' ';
    // 書式フラグも使える
    ostr << ostr.setf(std::ios::scientific) << 123.23 << '\n';
    ostr << std::ends;       // バッファがヌル終了していることを確かめる

    // 結果の文字列を表示
    std::cout << buf;

    return 0;
}