class A
{
    int m_v;

public:
    explicit A(int v): m_v(v){} // explicitキーワードを追加することで
                     // 暗黙のコンストラクター呼び出しを禁止できる

    int v() const{
        return m_v;
    }
};


int main()
{
    // A x = 0; // エラー。暗黙のコンストラクター呼び出しは禁止されている

    A y(42); // OK。明示的なコンストラクター呼び出し

    y.v() == 42; // true
}
