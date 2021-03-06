//
// Created by 87 Dolly on 28/03/2018.
//
#include <vector>
#include "Transformacao.h"
#include "Ponto.h"
#include <fstream>
#include <iostream>
#include <string>

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif



using namespace std;
#ifndef PROJECT_TRANSFORMS_H
#define PROJECT_TRANSFORMS_H

#endif //PROJECT_TRANSFORMS_H

class Transforms{
    string tipo;
    Transformacao t;
    vector<Transforms> subgrupo;
    vector<Ponto> pontos;

public:
    Transforms();
    Transforms(string tipo, Transformacao t, vector<Transforms> sub, vector<Ponto> pontos);
    string getTipo(){ return tipo; }
    Transformacao getTransformacao(){ return t; }
    vector<Transforms> getSubgrupo(){ return subgrupo; }
    vector<Ponto> getPontos(){ return pontos; }
    void setTipo(string t){ tipo = t; }
    void setTrans(Transformacao trans){ t = trans;}
    void setSubgrupo(vector<Transforms> sub){ subgrupo = sub; }
    void setPontos(vector<Ponto> p){ pontos = p;}
};