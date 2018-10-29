/*******************************************************************************

Based on NeHe Lesson 2
http://nehe.gamedev.net/tutorial/your_first_polygon/13002/

Compile with:
gcc opengl_demo1.c -lGL -lglut

*******************************************************************************/

#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>

void init(GLvoid)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glEnable(GL_DEPTH_TEST);
    glShadeModel(GL_SMOOTH);
}

void display(GLvoid)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    
    glTranslatef(-1.5f, 0.0f, -20.0f);
    
    glBegin(GL_TRIANGLES);
    {
        glVertex3f(0.0f, 1.0f, 0.0f);
        glVertex3f(-1.0f, -1.0f, 0.0f);
        glVertex3f(1.0f, -1.0f, 0.0f);
    }
    glEnd();
    
    glTranslatef(3.0f, 0.0f, 0.0f);
    
    glBegin(GL_QUADS);
    {
        glVertex3f(-1.0f, 1.0f, 0.0f);
        glVertex3f(1.0f, 1.0f, 0.0f);
        glVertex3f(1.0f, -1.0f, 0.0f);
        glVertex3f(-1.0f, -1.0f, 0.0f);
    }
    glEnd();
    
    glutSwapBuffers();
}

void reshape(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-0.1, 0.1, -(float)(h) / (10.0 * (float)(w)), (float)(h) / (10.0 * (float)(w)), 0.5, 1000.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    
    glutInitWindowSize(1280, 720);
    
    glutInitWindowPosition(0, 0);
    
    glutCreateWindow("Hello!");
    
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutIdleFunc(display);
    
    init();
    
    glutMainLoop();
    
    return 0;
}

