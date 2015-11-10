#include "CSCIx229.h"

void smallHouse1(double sx, double sy, double sz, double theta, double tx, double ty, double tz)
{
glPushMatrix();

printf("glTranslated(%f, %f, %f);", tx,ty,tz);
glTranslated(tx,ty,tz);
//glScaled(sx,sy,sz);
glRotated(theta,0,1,0);


glBegin(GL_QUADS);
glColor3f(0.4,0.4,0.4);

//draw front
glVertex3f(0,0,0);
glVertex3f(3,0,0);
glVertex3f(3,4,0);
glVertex3f(0,4,0);

//draw canopy
glVertex3f(0,3,0);
glVertex3f(3,3,0);
glVertex3f(3,2.4,1);
glVertex3f(0,2.4,1);

//draw right side
glVertex3f(0.5,0,0);
glVertex3f(0.5,0,-4);
glVertex3f(0.5,3,-4);
glVertex3f(0.5,3,0);

//draw left side
glVertex3f(2.5,0,0);
glVertex3f(2.5,0,-4);
glVertex3f(2.5,3,-4);
glVertex3f(2.5,3,0);

//draw back
glVertex3f(0.5,0,-4);
glVertex3f(2.5,0,-4);
glVertex3f(2.5,3,-4);
glVertex3f(0.5,3,-4);

//draw right roof
glVertex3f(1.5,5,-4);
glVertex3f(1.5,5,0);
glVertex3f(-0.5,3,0);
glVertex3f(-0.5,3,-4);

glEnd();

glPopMatrix();


}
