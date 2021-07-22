#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "sculptor.h"

using namespace std;

int main(){

            Sculptor *vm;
            int a=200, b=200, c=200;

            vm = new Sculptor(a,b,c);

            vm->setColor(  105, 105, 105, 1);
            vm->putEllipsoid(25,10,15,1,5,180);

            vm->setColor(0,0,0,0);
            vm->putEllipsoid(25,10,15,1,5,165);

            vm->setColor(  105, 105, 105, 1);
            vm->putEllipsoid(25,10,15,1,5,140);

            vm->setColor(0,0,0,0);
            vm->putEllipsoid(25,10,15,1,5,110);

            vm->setColor(  105, 105, 105, 1);
            vm->putEllipsoid(25,10,15,1,5,65);

            vm->setColor(0,0,0,0);
            vm->putEllipsoid(25,10,15,1,5,45);

            vm->setColor(  105, 105, 105, 1);
            vm->putEllipsoid(25,10,15,1,5,25);

            vm->setColor(0,0,0,1);
            vm->putEllipsoid(25,10,15,1,5,15);



            vm->setColor(220,157,40,0.8);
            vm->putSphere(25,10,15,10);//sol

            vm->setColor(196,20,40,0.8);
            vm->putSphere(25,25,15,2);//mercurio

            vm->setColor(50,180,150,0.8);
            vm->putSphere(25,35,20,2);//venus

            vm->setColor(0,50,150,0.5);//ok
            vm->putSphere(25,51,35,3);//terra

            vm->setColor(250, 20, 40, 0.8);//ok
            vm->putSphere(25,25,78,2);//marte

            vm->setColor(255, 140, 0, 1);
            vm->putSphere(25,91,90,6);//jupter

            vm->setColor(120, 125, 15, 0.8);
            vm->putSphere(25,146,50,5);//saturno

            vm->setColor(130, 200, 200, 0.8);
            vm->putSphere(25,62,172,4);//uranio

            vm->setColor(0,0,25,0.5);
            vm->putSphere(25,75,183,4);//neturno





            vm->writeOFF("escultura.off");
    return 0;
}
