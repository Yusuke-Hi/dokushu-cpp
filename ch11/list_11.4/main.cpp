#include <iostream>

int main()
{
    const char* message = "Hello, C-style cast";

    // OK�BC�`���L���X�g��const�C���q�𖳎������L���X�g���ł���
    void* ptr = (void*)message;

    std::cout << (char*)ptr << std::endl;
}
