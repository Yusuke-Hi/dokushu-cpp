
#include <cstdio>
class long_name_class{
    using ct = int; 
    public:
        ct get_id(){
            return 100;
        }
        void set_id(ct new_id){
            id = new_id;
        }

    private:
        ct id;
};

using lnc = long_name_class;
int main (){
    lnc c;
    c.set_id(50);
    printf("%d\n", c.get_id());
}