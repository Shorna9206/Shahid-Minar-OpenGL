#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void init(void) {
    glClearColor(0.0, 0.0, 0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 1.8, 0.0, 1.8);
}
void lineSegment(void) {


    float theta;
    float posX = .9;
    float posY = .85;
    float radio = .25;


    //green field
    glColor3f(0.3, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.5);
    glVertex2f(1.8,0.5);
    glVertex2f(1.8, 0.8);
    glVertex2f(0.0, 0.8);
    glEnd();
    //sky
    glColor3f(0.3, 0.6, 0.8);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.8);
    glVertex2f(1.8,0.8);
    glVertex2f(1.8, 1.8);
    glVertex2f(0.0, 1.8);
    glEnd();


    //clouds

    float theta0;
    float posX0 = 1.35;
    float posY0 = 1.6;
    float radio0 = .085;
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++){
        theta0 = i*3.1416/180;
        glVertex2f(posX0 + radio0*cos(theta0), posY0 + radio0*sin(theta0));
    }
    glEnd();
    //sun
    float theta1;
    float posX1 = 1.3;
    float posY1 = 1.50;
    float radio1 = .12;
    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++){
        theta1 = i*3.1416/180;
        glVertex2f(posX1 + radio1*cos(theta1), posY1 + radio1*sin(theta1));
    }
     glEnd();
    float theta2;
    float posX2 = 1.49;
    float posY2 = 1.6;
    float radio2 = .1;
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++){
        theta2 = i*3.1416/180;
        glVertex2f(posX2 + radio2*cos(theta2), posY2 + radio2*sin(theta2));
    }
    glEnd();
    float theta3;
    float posX3 = 1.48;
    float posY3 = 1.49;
    float radio3 = .1;
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++){
        theta3 = i*3.1416/180;
        glVertex2f(posX3 + radio3*cos(theta3), posY3 + radio3*sin(theta3));
    }
    glEnd();
    float theta4;
    float posX4 = 1.6;
    float posY4 = 1.56;
    float radio4 = .1;
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++){
        theta4 = i*3.1416/180;
        glVertex2f(posX4 + radio4*cos(theta4), posY4 + radio4*sin(theta4));
    }
    glEnd();





    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++){
        theta = i*3.1416/180;
        glVertex2f(posX + radio*cos(theta), posY + radio*sin(theta));
    }
    glEnd();




    //bottom part
    glColor3f(0.8, 0.6, 0.5);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.0);
    glVertex2f(1.8, 0.0);
    glVertex2f(1.8,0.5);
    glVertex2f(0.0, 0.5);
    glEnd();
    glColor3f(0.3, 0.1, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.04);
    glVertex2f(1.8, 0.04);
    glVertex2f(1.8,0.07);
    glVertex2f(0.0, 0.07);
    glEnd();
    glColor3f(0.3, 0.1, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.14);
    glVertex2f(1.8, 0.14);
    glVertex2f(1.8,0.17);
    glVertex2f(0.0, 0.17);
    glEnd();
    glColor3f(0.3, 0.1, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.24);
    glVertex2f(1.8, 0.24);
    glVertex2f(1.8,0.27);
    glVertex2f(0.0, 0.27);
    glEnd();
    glColor3f(0.3, 0.1, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.34);
    glVertex2f(1.8, 0.34);
    glVertex2f(1.8,0.37);
    glVertex2f(0.0, 0.37);
    glEnd();


//middle piller

    //lines
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.76, 1.08);
    glVertex2f(1.04, 1.08);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.76, 0.62);
    glVertex2f(1.04, 0.62);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.82, 0.40);
    glVertex2f(0.82, 1.27);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.85, 0.40);
    glVertex2f(0.85, 1.08);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.79, 0.40);
    glVertex2f(0.79, 1.08);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.85, 1.08);
    glVertex2f(0.86, 1.27);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.79, 1.08);
    glVertex2f(0.78, 1.27);
    glEnd();


    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.98, 0.40);
    glVertex2f(0.98, 1.27);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(1.01, 0.40);
    glVertex2f(1.01, 1.08);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.95, 0.40);
    glVertex2f(0.95, 1.08);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(1.01, 1.08);
    glVertex2f(1.02, 1.27);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.95, 1.08);
    glVertex2f(0.94, 1.27);
    glEnd();

    //white part
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0.88, 0.40);
    glVertex2f(0.92, 0.40);
    glVertex2f(0.92,1.1);
    glVertex2f(0.88, 1.1);
    glEnd();
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0.88, 1.1);
    glVertex2f(0.92,1.1);
    glVertex2f(0.91, 1.28);
    glVertex2f(0.89, 1.28);
    glEnd();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0.73, 0.40);
    glVertex2f(0.76, 0.40);
    glVertex2f(0.76,1.1);
    glVertex2f(0.73, 1.1);
    glEnd();
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0.76,1.1);
    glVertex2f(0.73, 1.1);
    glVertex2f(0.71, 1.28);
    glVertex2f(0.74, 1.28);
    glEnd();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(1.07, 0.40);
    glVertex2f(1.04, 0.40);
    glVertex2f(1.04,1.1);
    glVertex2f(1.07, 1.1);
    glEnd();
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(1.04,1.1);
    glVertex2f(1.07, 1.1);
     glVertex2f(1.09, 1.28);
    glVertex2f(1.06, 1.28);
    glEnd();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0.71, 1.27);
    glVertex2f(1.09, 1.27);
    glVertex2f(1.09,1.30);
    glVertex2f(0.71, 1.30);
    glEnd();


    //left piller01
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0.58, 0.40);
    glVertex2f(0.61, 0.40);
    glVertex2f(0.61,1.05);
    glVertex2f(0.58, 1.05);
    glEnd();
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0.40, 0.40);
    glVertex2f(0.43, 0.40);
    glVertex2f(0.43,1.02);
    glVertex2f(0.40, 1.02);
    glEnd();
    //leftpiller01 strait line
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.45, 0.40);
    glVertex2f(0.45, 1.03);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.49, 0.40);
    glVertex2f(0.49, 1.03);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.53, 0.40);
    glVertex2f(0.53, 1.03);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.57, 0.40);
    glVertex2f(0.57, 1.03);
    glEnd();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0.40, 1.03);
    glVertex2f(0.61, 1.06);
    glVertex2f(0.61,1.03);
    glVertex2f(0.40, 1.0);
    glEnd();
    //left piller 01 line
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.43, 0.62);
    glVertex2f(0.58, 0.62);
    glEnd();

    //left piller02
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0.30, 0.40);
    glVertex2f(0.33, 0.40);
    glVertex2f(0.33, 0.95);
    glVertex2f(0.30, 0.95);
    glEnd();
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0.12, 0.40);
    glVertex2f(0.15, 0.40);
    glVertex2f(0.15, 0.92);
    glVertex2f(0.12, 0.92);
    glEnd();
    //leftpiller02 strait line
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.17, 0.40);
    glVertex2f(0.17, 0.93);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.21, 0.40);
    glVertex2f(0.21, 0.93);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.25, 0.40);
    glVertex2f(0.25, 0.93);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.29, 0.40);
    glVertex2f(0.29, 0.93);
    glEnd();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0.12, 0.93);
    glVertex2f(0.33, 0.96);
    glVertex2f(0.33, 0.93);
    glVertex2f(0.12, 0.9);
    glEnd();
    //left piller02 line
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0.15, 0.62);
    glVertex2f(0.30, 0.62);
    glEnd();

    //right piller01
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(1.19, 0.40);
    glVertex2f(1.22, 0.40);
    glVertex2f(1.22,1.05);
    glVertex2f(1.19, 1.05);
    glEnd();
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(1.37, 0.40);
    glVertex2f(1.40, 0.40);
    glVertex2f(1.40,1.02);
    glVertex2f(1.37, 1.02);
    glEnd();
    //rightpiller01 strait line
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(1.24, 0.40);
    glVertex2f(1.24, 1.03);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(1.28, 0.40);
    glVertex2f(1.28, 1.03);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(1.32, 0.40);
    glVertex2f(1.32, 1.03);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(1.36, 0.40);
    glVertex2f(1.36, 1.03);
    glEnd();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(1.19, 1.06);
    glVertex2f(1.40, 1.03);
    glVertex2f(1.40,1.0);
    glVertex2f(1.19, 1.03);
    glEnd();
    //right piller01 line
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(1.22, 0.62);
    glVertex2f(1.37, 0.62);
    glEnd();

    //right piller02
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(1.47, 0.40);
    glVertex2f(1.50, 0.40);
    glVertex2f(1.50,0.95);
    glVertex2f(1.47, 0.95);
    glEnd();
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(1.65, 0.40);
    glVertex2f(1.68, 0.40);
    glVertex2f(1.68,0.92);
    glVertex2f(1.65, 0.92);
    glEnd();
    //rightpiller02 strait line
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(1.52, 0.40);
    glVertex2f(1.52, 0.93);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(1.56, 0.40);
    glVertex2f(1.56, 0.93);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(1.60, 0.40);
    glVertex2f(1.60, 0.93);
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(1.64, 0.40);
    glVertex2f(1.64, 0.93);
    glEnd();


    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(1.47, 0.96);
    glVertex2f(1.68, 0.93);
    glVertex2f(1.68,0.90);
    glVertex2f(1.47, 0.93);
    glEnd();
    //right piller02 line
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(1.50, 0.62);
    glVertex2f(1.65, 0.62);
    glEnd();


        glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(800,700);
    glutCreateWindow("Shorna: 171-15-9206");
    init();
    glutDisplayFunc(lineSegment);
    glutMainLoop();
}
