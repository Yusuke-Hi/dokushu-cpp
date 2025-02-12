#include <iostream>

class vector3d{
  public:
    using type = int;
    type get_x(){
      return x;
    }
    type get_y(){
      return y;
    }
    type get_z(){
      return z;
    }
    void set_x(type new_x){
      x = new_x;
    }
    void set_y(type new_y){
      x = new_y;
    }
    void set_z(type new_z){
      x = new_z;
    }

    vector3d set(type x_, type y_, type z_ = 0){
      vector3d v;
      v.set_x(x_);
      v.set_y(y_);
      v.set_z(z_);
      return v;
    }

  private:
    type x;
    type y;
    type z;
};

int main(){
  vector3d v;
  v.set_x(1);
  v.set_y(2);
  v.set_z(3);

  vector3d u = v.set(4, 5, 6);
} 