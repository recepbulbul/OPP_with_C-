#include <iostream>
#include <conio.h>
using namespace std;

class tollBooth{
    public:
        unsigned int araba;
        double para;
        tollBooth(){
            araba = 0;
            para = 0;
        }
        void payingCar(){
            araba++;
            para+=0.5;
        }
        void nopayCar(){
            araba++;
        }
        void display(){
            cout << "\nArac Sayisi: " << araba << "\n" << "Kazanilan Para: " << para << "\n";
        }

};

int main(){
    char secim;
    tollBooth gise;
    while (true)
    {
        cout << "Secim Yapin(1 = PayCar / 2 = NoPayCar / 3 = Kasa / ESC = Exit)\n";
        secim = getch();
        switch (secim)
        {
        case 49:
            gise.payingCar();
            break;
        case 50:
            gise.nopayCar();
            break;
        case 51:
            gise.display();
            break;
        default:
            break;
        }
        if (secim == 27)
        {
            gise.display();
            break;

        }
        

    }
    
    return 0;
}