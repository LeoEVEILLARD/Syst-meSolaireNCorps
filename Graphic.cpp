#include "Graphic.hpp"
#include <GL/glut.h>

Graphic::Graphic(System & system, int hauteur, int largeur, int RatioAffichage, bool test, int argc, char **argv): system_(system){

    
    
    glutInit(&argc, argv);
    
    /*Setting up  The Display
     /    -RGB color model + Alpha Channel = GLUT_RGBA
     */
    glutInitDisplayMode(GLUT_RGBA|GLUT_SINGLE);
    
    //Configure Window Postion
    glutInitWindowPosition(50, 25);
    
    //Configure Window Size
    glutInitWindowSize(hauteur, largeur);
    
    //Create Window
    glutCreateWindow("Hello OpenGL");
    
    
    //Call to the drawing function
    glutDisplayFunc(draw);
    
    // Loop require by OpenGL
    glutMainLoop();



}


void draw(System system) {
    
    
   // std::cout << system.vecAstre_[0].nom_ << std::endl;
    
    // Black background
    glClearColor(0.0f,0.0f,0.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    
    //glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    //glColor3f(1.0f, 1.0f, 1.0f); // Red
    // glVertex2f(-0.5f, -0.5f);    // x, y
    // glVertex2f( 0.5f, -0.5f);
    //glVertex2f( 0.5f,  0.5f);
    //glVertex2f(-0.5f,  0.5f);
    // glEnd();
    //Draw i
    
    for(int i = 0; i<6; i++) circle(0,2*i/10.,0.1,70);
    
    glFlush();
    
}


void circle(float x, float y, float r, int segments)
{
    glBegin( GL_TRIANGLE_FAN );
    glVertex2f(x, y);
    for( int n = 0; n <= segments; ++n ) {
        float const t = 2 * M_PI * (float)n / (float)segments;
        glVertex2f(x + sin(t) * r, y + cos(t) * r);
    }
    glEnd();
}
