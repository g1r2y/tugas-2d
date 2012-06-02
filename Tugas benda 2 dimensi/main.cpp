#include <cstdlib>
#include <iostream>
#include <GL/glut.h>
#include <math.h>
#include <cmath>

/*
Nama Anggota Kelompok :
     Rizal Rismawan	        10108389
     Muzaki Fadhi	   	    10108414
     Wanda			        10108419
     Giri Supangkat	        10108423
     Ringga Anggiat S	    10107569
*/

void display(){
     
//membersihkan buffer
glClear(GL_COLOR_BUFFER_BIT);
glFlush();

//gambar 1  persegi panjang
glColor3f (0.7, 0.7, 5.0);
glBegin(GL_POLYGON);
glVertex3f (0.01, 0.01, 0.0);
glVertex3f (0.25, 0.01, 0.0);
glVertex3f (0.25, 0.25, 0.0);
glVertex3f (0.01, 0.25, 0.0);
glEnd();

//gambar 2 silang
glColor3f (1.0, 0.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.34, 0.01, 0.0);
glVertex3f (0.42, 0.01, 0.0);
glVertex3f (0.54, 0.25, 0.0);
glVertex3f (0.46, 0.25, 0.0);
glEnd();

glColor3f (3.0, 2.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.46, 0.01, 0.0);
glVertex3f (0.54, 0.01, 0.0);
glVertex3f (0.42, 0.25, 0.0);
glVertex3f (0.34, 0.25, 0.0);
glEnd(); 

//gambar 3  segitiga
glColor3f (0.0, 0.0, 0.7);
glBegin(GL_TRIANGLES);
glVertex3f (0.62, 0.01, 0.0);
glVertex3f (0.90, 0.01, 0.0);
glVertex3f (0.76, 0.25, 0.0);
glEnd(); 

//gambar 4 segienam
glColor3f(1.0, 0.0, 6.0); 
glBegin(GL_TRIANGLES);
glVertex3f (0.01, 0.36, 0.0);
glVertex3f (0.31, 0.36, 0.0);
glVertex3f (0.16, 0.65, 0.0);
glEnd(); 

glColor3f(1.0, 0.0, 4.0);  
glBegin(GL_TRIANGLES);
glVertex3f (0.01, 0.60, 0.0);
glVertex3f (0.31, 0.60, 0.0);
glVertex3f (0.16, 0.31, 0.0);
glEnd(); 

//gambar 5 ga tw
glColor3f (0.0, 1.0, 0.0);
glBegin(GL_POLYGON);
glVertex3f (0.38, 0.60, 0.0);
glVertex3f (0.60, 0.38, 0.0);
glVertex3f (0.38, 0.90, 0.0);
glVertex3f (0.60, 0.70, 0.0);
glEnd();

//gambar 6 persegi
glBegin(GL_POLYGON);
glColor3f (2.0, 1.0, 0.0);
glVertex3f (0.65, 0.35, 0.0);
glVertex3f (0.90, 0.35, 0.0);
glVertex3f (0.90, 0.65, 0.0);
glVertex3f (0.65, 0.65, 0.0);
glEnd();

  glFlush();
}


void init (void)
{
// Membuat warna background
glClearColor (0.0, 0.0, 0.0, 0.0);
/* inisialisasi nilai tampilan (viewing values) */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}


int main(int argc, char *argv[]){

glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (200, 100);
glutCreateWindow ("");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
