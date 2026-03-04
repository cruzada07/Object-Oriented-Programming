#include <iostream>
using namespace std;

class Persona{
    private:
        int edad;
    public:
        void setEdad(int e){
            if(e>=0){
                edad=e;
            }else{
                cout<<"Error\n";
            }
        }
        int getEdad(){
            return edad;
        }

};

int main(){
    Persona p1;
    p1.setEdad(21);
    cout<<"La edad de la persona es: "<<p1.getEdad()<<"\n";

    return 0;
}