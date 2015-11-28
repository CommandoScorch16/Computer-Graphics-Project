#include "CSCIx229.h"


void calculateNormal1(double x1,double y1,double z1,double x2,double y2,double z2,double x3,double y3,double z3, double sign)
{


double r1x = x2-x1;
double r1y = y2-y1;
double r1z = z2-z1;

double r2x = x2-x3;
double r2y = y2-y3;
double r2z = z2-z3;


glNormal3f( sign*((r1y*r2z)-(r2y*r1z))  ,  sign*(-1*((r1x*r2z)-(r2x*r1z)))  ,  sign*((r1x*r2y)-(r2x*r1y)) );
}


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
calculateNormal1(0.0,0.0,0.0,3.0,0.0,0.0,3.0,4.0,0.0,-1.0);
glVertex3f(0,0,0);
glVertex3f(3,0,0);
glVertex3f(3,4,0);
glVertex3f(0,4,0);

//draw canopy
calculateNormal1(0.0,3.0,0.0,3.0,3.0,0.0,3.0,2.4,1.0,1.0);
glVertex3f(0,3,0);
glVertex3f(3,3,0);
glVertex3f(3,2.4,1);
glVertex3f(0,2.4,1);

//draw right side
calculateNormal1(0.5,0.0,0.0,0.5,0.0,-4.0,0.5,3.0,-4.0,1.0);
glVertex3f(0.5,0,0);
glVertex3f(0.5,0,-4);
glVertex3f(0.5,3,-4);
glVertex3f(0.5,3,0);

//draw left side
calculateNormal1(2.5,0.0,0.0,2.5,0.0,-4.0,2.5,3.0,-4.0,-1.0);
glVertex3f(2.5,0,0);
glVertex3f(2.5,0,-4);
glVertex3f(2.5,3,-4);
glVertex3f(2.5,3,0);

//draw back
calculateNormal1(0.5,0.0,-4.0,2.5,0.0,-4.0,2.5,3.0,-4.0,1.0);
glVertex3f(0.5,0,-4);
glVertex3f(2.5,0,-4);
glVertex3f(2.5,3,-4);
glVertex3f(0.5,3,-4);

//draw roof
calculateNormal1(2.5,3.0,0.0,0.5,3.0,0.0,0.5,3.0,-4.0,1.0);
glVertex3f(2.5,3,0);
glVertex3f(0.5,3,0);
glVertex3f(0.5,3,-4);
glVertex3f(2.5,3,-4);

glEnd();


glPopMatrix();


}

void saloon(double sx, double sy, double sz, double theta, double tx, double ty, double tz){



glTranslated(tx,ty,tz);
//glScaled(sx,sy,sz);
glRotated(theta,0,1,0);


glBegin(GL_QUADS);

glColor3f(0.9,0.0,0.0);
//draw front
glVertex3f(0,0,0);
glVertex3f(5,0,0);
glVertex3f(5,6,0);
glVertex3f(0,6,0);

//draw right side
glVertex3f(0,0,0);
glVertex3f(0,4.5,0);
glVertex3f(0,4.5,7);
glVertex3f(0,0,7);

//draw left side
glVertex3f(5,0,0);
glVertex3f(5,4.5,0);
glVertex3f(5,4.5,7);
glVertex3f(5,0,7);

//draw back
glVertex3f(0,0,7);
glVertex3f(5,0,7);
glVertex3f(5,4.5,7);
glVertex3f(0,4.5,7);

//draw roof
glVertex3f(0,4.5,0);
glVertex3f(5,4.5,0);
glVertex3f(5,4.5,7);
glVertex3f(0,4.5,7);

//draw balcony
glVertex3f(0,3,0);
glVertex3f(5,3,0);
glVertex3f(5,3,-2);
glVertex3f(0,3,-2);

//draw right balcony railing
double i;
for (i = -2.0; i < 0.0; i+=0.25)
{
glVertex3f(5,3,i);
glVertex3f(5,3,i+0.15);
glVertex3f(5,3.5,i+0.15);
glVertex3f(5,3.5,i);
}

glColor3f(0.4,0.4,0.4);
//draw front balconay railing
for (i = 5.0; i > 0.0; i-=0.25)
{
glVertex3f(i,3,-2);
glVertex3f(i-0.15,3,-2);
glVertex3f(i-0.15,3.5,-2);
glVertex3f(i,3.5,-2);
}

//draw left balcony railing
for (i = -2.0; i < 0.0; i+=0.25)
{
glVertex3f(0,3,i);
glVertex3f(0,3,i+0.15);
glVertex3f(0,3.5,i+0.15);
glVertex3f(0,3.5,i);
}



glEnd();
glPopMatrix();
}


void livery(double sx, double sy, double sz, double theta, double tx, double ty, double tz){



glTranslated(tx,ty,tz);
//glScaled(sx,sy,sz);
glRotated(theta,0,1,0);


glBegin(GL_QUADS);



glEnd();
glPopMatrix();
}

void occidentalHotel(double sx, double sy, double sz, double theta, double tx, double ty, double tz){



glTranslated(tx,ty,tz);
//glScaled(sx,sy,sz);
glScaled(1.5,1.5,1.5);
glRotated(theta,0,1,0);


glBegin(GL_QUADS);

//draw right face
calculateNormal1(0.0,0.0,2.5,7.0,0.0,0.0,7.0,5.0,0.0,-1.0);
glVertex3f(0.0,0.0,2.5);
glVertex3f(7.0,0.0,0.0);
glVertex3f(7.0,5.0,0.0);
glVertex3f(0.0,5.0,2.5);

//draw front skinny face
calculateNormal1(7.0,0.0,0.0,7.3,0.0,-1.25,7.3,5.0,-1.25,-1.0);
glVertex3f(7.0,0.0,0.0);
glVertex3f(7.4,0.0,-1.25);//-1.25);
glVertex3f(7.4,5.0,-1.25);//-1.25);
glVertex3f(7.0,5.0,0.0);

//draw left face
calculateNormal1(7.4,0.0,-1.25,2.5,0.0,-7.0,2.5,5.0,-7.0,-1.0);
glVertex3f(7.4,0.0,-1.25);
glVertex3f(2.5,0.0,-7.0);
glVertex3f(2.5,5.0,-7.0);
glVertex3f(7.4,5.0,-1.25);

//draw back
calculateNormal1(2.5,0.0,-7.0,0.0,0.0,2.5,0.0,5.0,2.5,-1.0);
glVertex3f(2.5,0.0,-7.0);
glVertex3f(0.0,0.0,2.5);
glVertex3f(0.0,5.0,2.5);
glVertex3f(2.5,5.0,-7.0);


glEnd();


glBegin(GL_TRIANGLES);
//draw roof
calculateNormal1(7.0,5.0,0.0,2.5,5.0,-7.0,0.0,5.0,2.5,-1.0);
glVertex3f(7.0,5.0,0.0);
glVertex3f(2.5,5.0,-7.0);
glVertex3f(0.0,5.0,2.5);

calculateNormal1(7.4,5.0,-1.25,2.5,5.0,-7.0,7.0,5.0,0.0,-1.0);
glVertex3f(7.4,5.0,-1.25);
glVertex3f(2.5,5.0,-7.0);
glVertex3f(7.0,5.0,0.0);

glEnd();

glBegin(GL_QUADS);

//right balcony
calculateNormal1(0.0,3.0,2.5,8.5,3.0,-.545,9.5,3.0,0.0,1.0);
glVertex3f(0.0,3.0,2.5);
glVertex3f(8.5,3.0,-.545);
//glVertex3f(7.94,3.0,-.345);
//glVertex3f(7.0,3.0,0.0);
//glVertex3f(7.0,3.0,1.0);
glVertex3f(9.5,3.0,0);
glVertex3f(0.0,3.0,3.5);



//left balcony
calculateNormal1(2.5,3.0,-7.0,8.5,3.0,-.125,9.45,3.0,0.0,-1.0);
glVertex3f(2.5,3.0,-7.0);
glVertex3f(8.5,3.0,-.125);
//glVertex3f(7.94,3.0,-.625);
glVertex3f(9.45,3.0,0);
glVertex3f(3.2,3.0,-7.7);


//balcony bondo
calculateNormal1(7.55,3.0,-2,7.0,3.0,0.0,8,3.0,-1.0,-1.0);
glVertex3f(7.55,3.0,-2);//-1.25);
glVertex3f(7.0,3.0,0.0);
glVertex3f(8,3.0,-1.0);
glVertex3f(9.3,3.0,-0.1);


//right wall
double m;
double u = 0.0;
double z1 = 3.5;
double z2 = 3.46;
for (m = 0.0; m < 24.0; m++){
calculateNormal1(u,3.0,z1,u+0.1,3.0,z2,u+0.1,3.5,z2,-1.0);
glVertex3f(u,3.0,z1);
glVertex3f(u+0.1,3.0,z2);
glVertex3f(u+0.1,3.5,z2);
glVertex3f(u,3.5,z1);

if (m != 23.0){
glVertex3f(u,3.4,z1);
glVertex3f(u+0.05,3.5,z1);
glVertex3f(u+0.51,3.2,z2);
glVertex3f(u+0.46,3.1,z2);

glVertex3f(u,3.2,z1);
glVertex3f(u+0.05,3.1,z1);
glVertex3f(u+0.51,3.4,z2);
glVertex3f(u+0.46,3.5,z2);
}

u += 0.4;
z1-=0.15;
z2-=0.15;
}

//left wall
double m1;
double x = 3.2;
double z3 = -7.7;
double z4 = -7.6;
for (m1 = 0.0; m1<24.0;m1+=1)
{

calculateNormal1(x,3.0,z3,x+0.1,3.0,z4,x+0.1,3.5,z4,1.0);
glVertex3f(x,3.0,z3);
glVertex3f(x+0.1,3.0,z4);
glVertex3f(x+0.1,3.5,z4);
glVertex3f(x,3.5,z3);


glVertex3f(x,3.4,z3);
glVertex3f(x+0.05,3.5,z3);
glVertex3f(x+0.5,3.2,z4);
glVertex3f(x+0.5,3.1,z4);


glVertex3f(x,3.2,z3);
glVertex3f(x+0.05,3.1,z3);
glVertex3f(x+0.5,3.4,z4);
glVertex3f(x+0.5,3.5,z4);

//glVertex3f(9.45,3.0,0);
x+=0.265;
z3+=0.326;
z4+=0.326;
}


//now draw the top sign

glVertex3f(7.2,5.0,-1.35);//-1.25);
glVertex3f(6.8,5.0,0.0);
glVertex3f(6.8,5.6,0.0);
glVertex3f(7.2,5.6,-1.35);


//draw right sign
glVertex3f(6.8,5.0,0.0);
glVertex3f(3.5,5.0,1.2);
glVertex3f(3.5,5.6,1.2);
glVertex3f(6.8,5.6,0.0);

//draw left sign
glVertex3f(7.2,5.0,-1.35);
glVertex3f(5,5.0,-3.9);
glVertex3f(5,5.6,-3.9);
glVertex3f(7.2,5.6,-1.35);


glEnd();

glBegin(GL_TRIANGLES);

//draw right triangle for sign
glVertex3f(3.5,5.0,1.2);
glVertex3f(3.5,5.6,1.2);
glVertex3f(3.2,5.0,1.3);
//draw left triangle for sign

glVertex3f(5,5.0,-3.9);
glVertex3f(5,5.6,-3.9);
glVertex3f(4.7,5.0,-4.25);

//draw top tirangle for sign

glVertex3f(6.8,5.6,0.0);
glVertex3f(7.2,5.6,-1.35);
glVertex3f(7.0,5.78,-.675);

glEnd();

glPopMatrix();
}



void church(double sx, double sy, double sz, double theta, double tx, double ty, double tz){



glTranslated(tx,ty,tz);
//glScaled(sx,sy,sz);
glRotated(theta,0,1,0);


glBegin(GL_QUADS);

calculateNormal1(0.0,0.0,0.0,4.0,0.0,0.0,4.0,3.0,0.0,1.0);
//draw front
glVertex3f(0.0,0.0,0.0);
glVertex3f(4.0,0.0,0.0);
glVertex3f(4.0,3.0,0.0);
glVertex3f(0.0,3.0,0.0);


calculateNormal1(0.0,0.0,0.0,0.0,0.0,7.0,0.0,3.0,7.0,-1.0);
//draw right side
glVertex3f(0.0,0.0,0.0);
glVertex3f(0.0,0.0,7.0);
glVertex3f(0.0,3.0,7.0);
glVertex3f(0.0,3.0,0.0);


calculateNormal1(4.0,0.0,0.0,4.0,0.0,7.0,4.0,3.0,7.0,1.0);
//draw left side
glVertex3f(4.0,0.0,0.0);
glVertex3f(4.0,0.0,7.0);
glVertex3f(4.0,3.0,7.0);
glVertex3f(4.0,3.0,0.0);


calculateNormal1(0.0,0.0,7.0,4.0,0.0,7.0,4.0,3.0,7.0,-1.0);
//draw back side
glVertex3f(0.0,0.0,7.0);
glVertex3f(4.0,0.0,7.0);
glVertex3f(4.0,3.0,7.0);
glVertex3f(0.0,3.0,7.0);


calculateNormal1(-0.714,2.5,7.0,2.0,4.4,7.0,2.0,4.4,0.0,-1.0);
//draw right roof
glVertex3f(-0.714,2.5,7.0);
glVertex3f(2.0,4.4,7.0);
glVertex3f(2.0,4.4,0.0);
glVertex3f(-0.714,2.5,0.0);


calculateNormal1(4.714,2.5,0.0,2.0,4.4,0.0,2.0,4.4,7.0,-1.0);
//draw left roof
glVertex3f(4.714,2.5,0.0);
glVertex3f(2.0,4.4,0.0);
glVertex3f(2.0,4.4,7.0);
glVertex3f(4.714,2.5,7.0);


//now draw cross


//draw front of cross
glVertex3f(1.9,4.0,0.45);
glVertex3f(2.1,4.0,0.45);
glVertex3f(2.1,5.9,0.45);
glVertex3f(1.9,5.9,0.45);

//draw side of cross
glVertex3f(1.4,5.5,0.45);
glVertex3f(2.6,5.5,0.45);
glVertex3f(2.6,5.3,0.45);
glVertex3f(1.4,5.3,0.45);


glEnd();


glBegin(GL_TRIANGLES);
//draw front tri
calculateNormal1(4.0,3.0,0.0,0.0,3.0,0.0,2.0,4.4,0.0,-1.0);
glVertex3f(4.0,3.0,0.0);
glVertex3f(0.0,3.0,0.0);
glVertex3f(2.0,4.4,0.0);

//draw back tri
calculateNormal1(4.0,3.0,7.0,0.0,3.0,7.0,2.0,4.4,7.0,1.0);
glVertex3f(4.0,3.0,7.0);
glVertex3f(0.0,3.0,7.0);
glVertex3f(2.0,4.4,7.0);


glEnd();
glPopMatrix();
}


/*
void halfCircle(){
float step=5.0;
            glBegin(GL_LINE_LOOP);
             for(float angle=0.0f; angle <= 360; angle+=step)
             {
               float rad  = 2*angle/180;
               x  = radius*sin(rad);
               y  = radius*cos(rad);
               glVertex3f(x,y,0.0f);

            }

            glEnd();
}*/
