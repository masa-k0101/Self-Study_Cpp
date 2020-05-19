// 継承の簡単な例

#include<iostream>

namespace A
{
    //　基本クラスの定義
    class B
    {
        private:
            int i;
        public:
            void set_i(int n);
            int get_i();
    };

    // 派生クラスの定義
    class D : public B
    {
        private:
            int j;
        public:
            void set_j(int n);
            int mul();
    };

    // 値iをオブジェクトにセーブ
    void B::set_i(int n)
    {
        i = n;
    }

    //基本オブジェクトのiの値を返す
    int B::get_i()
    {
        return i;
    }

    // 派生オブジェクトの値jをセット
    void D::set_j(int n)
    {
        j = n;
    }

    //基本オブジェクトのiの派生オブジェクトのj倍を返す
    int D::mul()
    {
        return j*get_i();
    }
}

main()
{
    A::D ob;

    ob.set_i(10);
    ob.set_j(4);

    std::cout << ob.mul();
    return 0;
}

