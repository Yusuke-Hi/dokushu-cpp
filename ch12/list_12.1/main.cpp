int main()
{
    int size = 1000; // �v�f��
    int* darray = new int[size];

    // �c�c

    // �v�f��size��new_size�ɕύX����
    {
        int* tmp = new int[new_size];
        int copy_size = (size < new_size) ? size : new_size;
        for (int i = 0; i < copy_size; i++)
        {
        tmp[i] = darray[i];
        }
        delete[] darray; // ���̈��j��
        darray = tmp; // �V�̈�ɍ����ւ�
        size = new_size; // �v�f����ύX
    }
    
    // �c�c
    
    delete[] darray;
}
