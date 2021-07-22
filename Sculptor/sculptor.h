#ifndef SCULPTOR_H
#define SCULPTOR_H

#include<iostream>
#include<string>

struct Voxel{
    float r,g,b;
    float a;
    bool incluir_ou_nao;
};

class Sculptor
{
protected:

    Voxel ***v;

    int nx;

    int ny;

    int nz;

    float r;

    float g;

    float b;

    float o;

public:

    Sculptor(int _x, int _y, int _z);

    ~Sculptor();

    void setColor(float r, float g, float b, float o);

    void putVoxel(int x, int y, int z);

    void cutVoxel(int x, int y, int z);

    void putBox(int x0, int x1,int y0, int y1,int z0, int z1);

    void cutBox(int x0, int x1,int y0, int y1,int z0, int z1);

    void putSphere(int xc, int yc, int zc, int r);

    void cutSphere(int xc, int yc, int zc, int r);

    void putEllipsoid(int xc, int yc, int zc, int rx, int ry, int rz);

    void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);

    void writeOFF(char* arquivo_vizual);

};

#endif // SCULPTOR_H
