#include "motor.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

using namespace std;
using namespace tinyxml2;

struct Point {
    float x;
    float y;
    float z;
};

float lx = 5.0f, ly = 5.0f, lz = 5.0f; //coordenadas para o lookAt
float xx = 0.0f, yy = 0.0f, zz = 0.0f; // coordenadas para a camara
float angleY = 0.0f, angleX = 0.0f; //TODO: ver se é 1 ou 0
int draw = GL_LINE;
vector<Point> vertexes; //vertices lidos do ficheiro
//maneira de desenhi: linhas, pontos, preenchido

void renderScene(void){
    // clear buffers
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // set the camera
    glLoadIdentity();
    gluLookAt(lx,ly,lz, //todo: alterar aqui
              0.0,0.0,0.0,
              0.0f,1.0f,0.0f);

    //draw instructions
    glPolygonMode(GL_FRONT_AND_BACK,draw);
    glTranslatef(xx, yy, zz);
    glRotatef(angleY, 0.0, 1.0, 0.0);
    glRotatef(angleX, 1.0, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
    glColor3f(1,1,1);

    for(int i =0; i< vertexes.size(); i++)
        glVertex3f(vertexes[i].x, vertexes[i].y, vertexes[i].z);


    glEnd();
    //End of frame
    glutSwapBuffers();
}
void reshape(int w, int h){
    // Prevent a divide by zero, when window is too short
    // (you cant make a window with zero width).
    if(h == 0)
        h = 1;
    float ratio = w *1.0 / h;
    // Set the projection matrix as current
    glMatrixMode(GL_PROJECTION);
    // Load Identity Matrix
    glLoadIdentity();

    // Set the viewport to be the entire window
    glViewport(0, 0, w, h);

    // Set perspective
    gluPerspective(45.0f ,ratio, 1.0f ,1000.0f);

    // return to the model view matrix mode
    glMatrixMode(GL_MODELVIEW);
}
void keyboardspecial(int key, int x , int y){
    switch(key){
        case GLUT_KEY_UP:
            yy+=1;
            break;
        case GLUT_KEY_DOWN:
            yy-=1;
            break;
        case GLUT_KEY_LEFT:
            xx-=1;
            break;
        case GLUT_KEY_RIGHT:
            xx+=1;
            break;
    }
    glutPostRedisplay();
}

void keyboard(unsigned char key, int a, int b) {
    switch (key) {
        case 'a':
        case 'A':
            angleY -= 10;

            break;
        case 'd':
        case 'D':
            angleY += 10;
            break;

        case 'p':
        case 'P':
            draw = GL_POINT;
            break;

        case 'l':
        case 'L':
            draw = GL_LINE;
            break;

        case 'f':
        case 'F':
            draw = GL_FILL;
            break;

        case '-':
            gluLookAt(lx+=2,ly+=2,lz+=2,0.0,0.0,0.0,0.0f,1.0f,0.0f);
            break;

        case '+':
            gluLookAt(lx-=2,ly-=2,lz-=2,0.0,0.0,0.0,0.0f,1.0f,0.0f);
            break;
    }
    glutPostRedisplay();
}
//método para ler o ficheiro e preencher vetor

void readFile(string fich){
	string linha;
    string novo;
    string delimiter = ",";
    int pos;
    float xx,yy,zz;
    Point p ;

    ifstream file(fich);

    if(file.is_open()){

        while(getline (file,linha)) {

            pos = linha.find(delimiter);
            novo = linha.substr(0, pos);
            xx = atof(novo.c_str());
            linha.erase(0, pos + delimiter.length());
            p.x = xx;

            pos = linha.find(delimiter);
            novo = linha.substr(0, pos);
            yy = atof(novo.c_str());
            linha.erase(0, pos + delimiter.length());
            p.y = yy;

            pos = linha.find(delimiter);
            novo = linha.substr(0, pos);
            zz = atof(novo.c_str());
            linha.erase(0, pos + delimiter.length());
            p.z = zz;

            vertexes.push_back(p);

        }

        file.close();


        }
        else {

        cout << "ERRO AO LER FICHEIRO" << endl;
    }
}

//método para ler ficheiro xml

void lerXML(string fich) {
    XMLDocument doc;
    XMLElement *root;

    if (!(doc.LoadFile(fich.c_str()))) {
        root = doc.FirstChildElement();
        for (XMLElement *elem = root->FirstChildElement(); elem != NULL; elem = elem->NextSiblingElement()) {
            string ficheiro = elem->Attribute("file");
            cout << "Ficheiro:" << ficheiro << "lido com sucesso" << endl;
            readFile(ficheiro);
        }
    } else {
        cout << "Ficheiro XML não foi encontrado" << endl;
    }
}



int main(int argc, char** argv){

	    if (argc > 1){
        lerXML(argv[1]);
}

//init glut and the window
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(800,800);
    glutCreateWindow("CG_Project");

// put callback registration here
    glutDisplayFunc( renderScene );
    glutReshapeFunc( reshape );
    glutIdleFunc( renderScene);

// OpenGL settings
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_CULL_FACE);

// enter GLUT's main loop
    glutMainLoop();

    return 1;

}
#pragma clang diagnostic pop