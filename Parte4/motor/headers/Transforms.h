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
#include <IL/il.h>
#include <GLUT/glut.h>
#else
#include <IL/il.h>
#include <GL/glew.h>
#include <GL/glut.h>
#endif



using namespace std;
#ifndef PROJECT_TRANSFORMS_H
#define PROJECT_TRANSFORMS_H


class Transforms{
    string text; //nome da imagem que se vai buscar ao XML
    string tipo;
    Transformacao t;
    vector<Ponto> pontos;

    int pos;
    vector<Transforms> subgrupo;
    vector<Ponto> normal;
    vector<Ponto> textura;

    // VBO
    GLuint buffer[3];
    float *v, *n, *textu;
    float p_tam, n_tam, tex_tam;

    //Textura:
    unsigned int tt, width, height;
    unsigned int texID;
    unsigned char *data;

public:
    Transforms();
    Transforms(string tipo, Transformacao t, vector<Transforms> sub, vector<Ponto> pontos);
    string getText(){ return text; }
    string getTipo(){ return tipo; }
    Transformacao getTransformacao(){ return t; }
    vector<Transforms> getSubgrupo(){ return subgrupo; }
    vector<Ponto> getPontos(){ return pontos; }
    unsigned int getTexID(){ return texID;}
    void setText(string t){ text = t;}
    void setTipo(string t){ tipo = t; }
    void setTrans(Transformacao trans){ t = trans;}
    void setSubgrupo(vector<Transforms> sub){ subgrupo = sub; }
    void setPontos(vector<Ponto> p){ pontos = p;}
    void setNormal(vector<Ponto> n){ normal = n;}
    void setTextura(vector<Ponto> tex){ textura = tex;}
    void toVertex();
    void setVBO();
    void draw();
    void push_child(Transforms t){subgrupo.push_back(t);}
    void newText();
};


#endif //PROJECT_TRANSFORMS_H