// ���̃\�[�X�̓R���p�C���ł��܂���

class Base
{
protected:
    // ���z�֐��e�[�u��
    struct
    {
        // ���z�֐��ւ̃|�C���^�[
        vfunc - pointer foo_vfunc;
    } vtable;

public:
    // ���z�֐���Base�ɂ�����{��
    void foo_body() { �c�c }
    void foo()
    {
        // ���z�֐����g�����{�̂̌Ăяo��
        vtable.foo_vfunc();
    }
    Base()
    {
        vtable.foo_vfunc = &foo_body; // Base::foo_body�ւ̃A�h���X��ݒ肷��
    }
};
class Derived : public Base
{
public:
    // ���z�֐���Derived�ɂ�����{��
    void foo_body() { �c�c }
    Derived()
    {
        vtable.foo_vfunc = &foo_body; // Derived::foo_body�ւ̃A�h���X�ŏ㏑������
    }
};
int main()
{
    Derived d;
    d.foo(); // ���z�֐��Ăяo��
}
