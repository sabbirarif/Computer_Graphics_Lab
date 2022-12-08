#include<windows.h>
#include<GL\glut.h>
#include <GL/glu.h>
#include<math.h>
#include <stdlib.h>
#include<stdio.h>
#define PI 3.1416


GLfloat B=0;
GLfloat C=0;

float theta;

void init(void)
{
	glClearColor(.40, .110, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glOrtho(0, 1920, 0, 1080, -10.0, 10.0);
}

void All_cloud_Model(){
    // 1st cloud

	glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(100+47*cos(theta),1000+47*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(187+52*cos(theta),1000+52*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(273+61*cos(theta),1006+61*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(143+39*cos(theta),945+39*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(207+36*cos(theta),942+36*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(250+37*cos(theta),950+37*sin(theta));
    }
	glEnd();



	// 2nd cloud

	glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1035+25*cos(theta),1040+25*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1080+29*cos(theta),1044+29*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1059+27*cos(theta),1023+27*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1107+25*cos(theta),1011+25*sin(theta));
    }
	glEnd();

	// 3rd cloud

	glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1292+46*cos(theta),995+46*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1341+41*cos(theta),1002+41*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1407+47*cos(theta),1003+47*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1462+48*cos(theta),995+48*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1345+33*cos(theta),962+33*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1407+42*cos(theta),967+42*sin(theta));
    }
	glEnd();

}

void boat_model_two(){

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(1040,580);
	glVertex2i(1059,556);
    glVertex2i(1179,556);
	glVertex2i(1200,580);
	glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2i(1060,580);
	glVertex2i(1188,580);
    glVertex2i(1171,620);
	glVertex2i(1072,620);
	glEnd();

	glBegin(GL_QUADS);
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
    glVertex2i(1100,672);
	glVertex2i(1139,668);
    glVertex2i(1139,635);
	glVertex2i(1100,640);
	glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.1f, 0.1f);
    glVertex2i(1119,619);
	glVertex2i(1127,619);
    glVertex2i(1125,690);
	glVertex2i(1119,690);
	glEnd();
    glPopMatrix();


}

void Behind_Boat(){

    //sky

    glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(0,0);
	glVertex2i(1920,0);
	glVertex2i(1920,1080);
	glVertex2i(0,1080);
	glEnd();

	// sun draw
	glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.5f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(865+91*cos(theta),964+91*sin(theta));
    }
	glEnd();

	//river
	glBegin(GL_QUADS);
    glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
    glVertex2i(0,0);
	glVertex2i(1920,0);
	glVertex2i(1920,700);
	glVertex2i(0,700);
	glEnd();

	//village field
	glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2i(0,0);
	glVertex2i(900,0);
	glVertex2i(900,500);
	glVertex2i(0,500);
	glEnd();


	//well draw

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.5f, 0.5f);
    glVertex2i(350,200);
	glVertex2i(450,200);
	glVertex2i(450,139);
	glVertex2i(350,139);
	glEnd();

	glBegin(GL_POLYGON);
    glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
    glVertex2i(301,225);
	glVertex2i(350,250);
	glVertex2i(450,250);
	glVertex2i(498,225);
	glVertex2i(450,200);
	glVertex2i(350,200);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.5f, 0.5f);
    glVertex2i(301,225);
	glVertex2i(350,200);
	glVertex2i(350,139);
	glVertex2i(300,150);
	glEnd();


    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.5f, 0.5f);
    glVertex2i(450,200);
	glVertex2i(498,225);
	glVertex2i(500,150);
	glVertex2i(450,139);
	glEnd();

    glLineWidth(3);
	glBegin(GL_LINES);
    glColor3f(1.0f, 0.5f, 0.5f);

    glVertex2i(301,225);
	glVertex2i(350,250);

	glVertex2i(350,250);
    glVertex2i(450,250);

    glVertex2i(450,250);
    glVertex2i(498,225);


    glEnd();

	//bucket draw

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2i(500,280);
	glVertex2i(560,280);
	glVertex2i(560,255);
	glVertex2i(500,255);
	glEnd();

	glBegin(GL_POLYGON);
    glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
    glVertex2i(479,290);
	glVertex2i(500,300);
	glVertex2i(560,300);
	glVertex2i(578,290);
	glVertex2i(560,280);
	glVertex2i(500,280);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2i(479,290);
	glVertex2i(500,280);
	glVertex2i(500,254);
	glVertex2i(480,260);
	glEnd();


    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2i(560,280);
	glVertex2i(578,290);
	glVertex2i(580,260);
	glVertex2i(560,255);
	glEnd();

    glLineWidth(3);
	glBegin(GL_LINES);
    glColor3f(1.0f, 0.5f, 0.0f);

    glVertex2i(479,290);
	glVertex2i(500,300);

	glVertex2i(500,300);
    glVertex2i(560,300);

    glVertex2i(560,300);
    glVertex2i(578,290);


    glEnd();

    glLineWidth(3);
	glBegin(GL_LINES);
    glColor3f(0.5f, 0.5f, 0.5f);

    glVertex2i(535,320);
	glVertex2i(520,240);

	glVertex2i(520,240);
    glVertex2i(538,231);

    glVertex2i(538,231);
    glVertex2i(609,241);

    glVertex2i(479,290);
	glVertex2i(500,320);

	glVertex2i(500,320);
    glVertex2i(560,320);

    glVertex2i(560,320);
    glVertex2i(578,290);

    glEnd();


	//grass

    glLineWidth(3);
	glBegin(GL_LINES);
    glColor3f(0.0f, 0.6f, 0.0f);

    glVertex2i(250,10);
	glVertex2i(202,29);

	glVertex2i(250,10);
    glVertex2i(226,39);

    glVertex2i(250,10);
    glVertex2i(265,45);

    glVertex2i(250,10);
    glVertex2i(298,33);

    glVertex2i(510,10);
	glVertex2i(484,27);

	glVertex2i(510,10);
    glVertex2i(503,32);

    glVertex2i(510,10);
    glVertex2i(522,33);

    glVertex2i(510,10);
    glVertex2i(540,31);

    glVertex2i(374,51);
	glVertex2i(319,98);

    glVertex2i(374,51);
	glVertex2i(346,93);

	glVertex2i(374,51);
	glVertex2i(377,108);

	glVertex2i(374,51);
	glVertex2i(406,93);

	glVertex2i(374,51);
	glVertex2i(450,100);

    glVertex2i(374,51);
	glVertex2i(346,93);

	glVertex2i(813,140);
	glVertex2i(773,164);

	glVertex2i(813,140);
	glVertex2i(810,171);

	glVertex2i(813,140);
	glVertex2i(845,168);

	glVertex2i(826,251);
	glVertex2i(782,279);

	glVertex2i(826,251);
	glVertex2i(826,293);

	glVertex2i(826,251);
	glVertex2i(879,282);


    glEnd();

	 //1st tree

    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.6f, 0.1f);
    glVertex2i(80,65);
	glVertex2i(101,65);
	glVertex2i(101,0);
	glVertex2i(80,0);
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(100+22*cos(theta),80+22*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(80+22*cos(theta),80+22*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(74+24*cos(theta),91+24*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(97+25*cos(theta),94+25*sin(theta));
    }
	glEnd();

	//2nd tree

    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.6f, 0.1f);
    glVertex2i(192,0);
	glVertex2i(192,178);
	glVertex2i(234,178);
	glVertex2i(234,0);
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(220+35*cos(theta),200+35*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(200+35*cos(theta),220+35*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(209+35*cos(theta),239+35*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(179+35*cos(theta),233+35*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(172+36*cos(theta),187+36*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(255+35*cos(theta),244+35*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(261+30*cos(theta),208+30*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(249+35*cos(theta),188+35*sin(theta));
    }
	glEnd();

	//3rd tree


    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.6f, 0.1f);
    glVertex2i(609,80);
	glVertex2i(642,80);
	glVertex2i(642,0);
	glVertex2i(609,0);
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(620+35*cos(theta),90+35*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(650+35*cos(theta),90+35*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(630+35*cos(theta),120+35*sin(theta));
    }
	glEnd();

	//flower circle

	glBegin(GL_POLYGON);
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(881+12*cos(theta),283+12*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(825+12*cos(theta),298+12*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.5f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(778+12*cos(theta),283+12*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
     glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(773+12*cos(theta),164+12*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.5f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(810+12*cos(theta),171+12*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(845+12*cos(theta),168+12*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(319+12*cos(theta),98+12*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(2.0f, 0.5f, 1.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(377+12*cos(theta),108+12*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor4f(1.0f, 0.5f, 0.0f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(450+12*cos(theta),100+12*sin(theta));
    }
	glEnd();

	//city field
	glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2i(1300,0);
	glVertex2i(1920,0);
	glVertex2i(1920,700);
	glVertex2i(1300,700);
	glEnd();

	// city tree

	glBegin(GL_QUADS);
    glColor3f(0.5f, 0.6f, 0.1f);
    glVertex2i(1320,0);
	glVertex2i(1320,80);
	glVertex2i(1340,80);
	glVertex2i(1340,0);
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1320+30*cos(theta),80+30*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1344+35*cos(theta),95+35*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1325+30*cos(theta),117+30*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1351+25*cos(theta),119+25*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1303+25*cos(theta),106+25*sin(theta));
    }
	glEnd();

	// city 2nd tree
	glBegin(GL_QUADS);
    glColor3f(0.5f, 0.6f, 0.1f);
    glVertex2i(1420,60);
	glVertex2i(1440,60);
	glVertex2i(1440,120);
	glVertex2i(1420,120);
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1438+25*cos(theta),129+25*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1412+25*cos(theta),125+25*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1404+25*cos(theta),142+25*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1421+25*cos(theta),152+25*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1448+18*cos(theta),152+18*sin(theta));
    }
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 0.6f, 0.1f);
    glVertex2i(1700,70);
	glVertex2i(1720,70);
	glVertex2i(1720,149);
	glVertex2i(1700,149);
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1700+30*cos(theta),150+30*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1724+30*cos(theta),154+30*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1707+25*cos(theta),175+25*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1727+28*cos(theta),165+28*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1694+25*cos(theta),164+25*sin(theta));
    }
	glEnd();

	// city tree


	glBegin(GL_QUADS);
    glColor3f(0.5f, 0.6f, 0.1f);
    glVertex2i(1850,0);
	glVertex2i(1850,100);
	glVertex2i(1874,100);
	glVertex2i(1874,0);
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1844+25*cos(theta),110+25*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1871+25*cos(theta),108+25*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1859+25*cos(theta),126+25*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1877+25*cos(theta),136+25*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1835+25*cos(theta),132+25*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1858+25*cos(theta),149+25*sin(theta));
    }
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 0.6f, 0.1f);
    glVertex2i(1320,350);
	glVertex2i(1320,400);
	glVertex2i(1340,400);
	glVertex2i(1340,350);
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1327+30*cos(theta),410+30*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1350+25*cos(theta),418+25*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1315+25*cos(theta),415+25*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1322+25*cos(theta),439+25*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1344+25*cos(theta),438+25*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1309+25*cos(theta),427+25*sin(theta));
    }
	glEnd();

	// city grass

    glLineWidth(3);
	glBegin(GL_LINES);
    glColor3f(0.0f, 0.6f, 0.0f);
	glVertex2i(1460,15);
	glVertex2i(1460,37);

	glVertex2i(1460,15);
	glVertex2i(1490,30);

	glVertex2i(1580,15);
	glVertex2i(1560,24);

	glVertex2i(1580,15);
	glVertex2i(1581,26);

	glVertex2i(1580,15);
	glVertex2i(1606,24);

	glVertex2i(1670,15);
	glVertex2i(1650,24);

	glVertex2i(1670,15);
	glVertex2i(1660,25);

	glVertex2i(1670,15);
	glVertex2i(1670,27);

	glVertex2i(1670,15);
	glVertex2i(1682,26);

	glVertex2i(1763,21);
	glVertex2i(1745,39);

	glVertex2i(1763,21);
	glVertex2i(1763,41);

	glVertex2i(1763,21);
	glVertex2i(1780,43);

	glVertex2i(1885,20);
	glVertex2i(1868,26);

	glVertex2i(1885,20);
	glVertex2i(1877,30);

	glVertex2i(1885,20);
	glVertex2i(1890,34);

	glVertex2i(1885,20);
	glVertex2i(1900,34);


    glEnd();


	//river side
    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2i(900,500);
	glVertex2i(940,396);
	glVertex2i(900,328);
    glEnd();

    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3f(0.7f, 0.6f, 0.2f);
    glVertex2i(944,394);
	glVertex2i(904,327);

    glVertex2i(941,322);
	glVertex2i(904,283);

    glVertex2i(940,154);
	glVertex2i(904,159);

    glVertex2i(904,159);
	glVertex2i(802,121);

	glVertex2i(904,154);
	glVertex2i(843,75);


    glEnd();



    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2i(900,328);
	glVertex2i(937,324);
	glVertex2i(900,284);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2i(900,271);
	glVertex2i(936,269);
	glVertex2i(936,158);
	glVertex2i(900,158);
	glEnd();

    glBegin(GL_TRIANGLES);
    glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
    glVertex2i(900,158);
	glVertex2i(820,122);
	glVertex2i(900,100);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
    glVertex2i(900,100);
	glVertex2i(840,77);
	glVertex2i(900,25);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2i(900,25);
	glVertex2i(841,0);
	glVertex2i(900,0);
    glEnd();

    //1st boat
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(1020,238);
	glVertex2i(1048,275);
	glVertex2i(1083,238);
    glEnd();



    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(966,238);
	glVertex2i(1128,238);
	glVertex2i(1100,200);
	glVertex2i(1000,200);
	glEnd();

    glBegin(GL_QUADS);
    glColor4f(1.0f, 0.5f, 0.0f, 0.0f);
    glVertex2i(1010,200);
	glVertex2i(1086,200);
	glVertex2i(1108,230);
	glVertex2i(988,230);
	glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(1010,200);
	glVertex2i(1086,200);
	glVertex2i(1084,189);
	glVertex2i(1009,189);
	glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(1000,200);
	glVertex2i(1010,200);
	glVertex2i(1009,189);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(1086,200);
	glVertex2i(1100,200);
	glVertex2i(1084,189);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(914,251);
	glVertex2i(913,250);
    glVertex2i(967,240);
	glVertex2i(967,238);

	glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(913,259);
	glVertex2i(923,259);
    glVertex2i(923,236);
	glVertex2i(913,236);

	glEnd();

}
void Infront_Boat(){
    //house

    glBegin(GL_POLYGON);
    glColor3f(0.8f, 0.6f, 0.4f);
    glVertex2i(60,360);
	glVertex2i(300,360);
	glVertex2i(300,420);
	glVertex2i(260,480);
	glVertex2i(120,480);
	glVertex2i(60,420);
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2i(120,480);
	glVertex2i(160,420);

	glVertex2i(160,420);
	glVertex2i(300,420);

	glVertex2i(300,420);
	glVertex2i(260,480);

	glVertex2i(260,480);
	glVertex2i(120,480);

	glVertex2i(120,480);
	glVertex2i(60,420);

	glVertex2i(60,420);
	glVertex2i(300,420);

	glVertex2i(60,420);
	glVertex2i(60,360);

	glVertex2i(60,360);
	glVertex2i(300,360);

	glVertex2i(300,360);
	glVertex2i(300,420);

	glVertex2i(160,360);
	glVertex2i(160,420);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.1f, 0.1f);
    glVertex2i(200,360);
	glVertex2i(233,360);
    glVertex2i(233,400);
	glVertex2i(200,400);
	glEnd();

    glLineWidth(3);

	glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2i(200,360);
	glVertex2i(200,400);

	glVertex2i(200,400);
    glVertex2i(233,400);

    glVertex2i(233,400);
    glVertex2i(233,360);

    glVertex2i(215,400);
    glVertex2i(215,360);


	glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.1f, 0.1f);
    glVertex2i(80,380);
	glVertex2i(120,380);
    glVertex2i(120,408);
	glVertex2i(80,408);
	glEnd();

    glLineWidth(3);
	glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2i(80,380);
	glVertex2i(120,380);

	glVertex2i(120,380);
    glVertex2i(120,408);

    glVertex2i(120,408);
    glVertex2i(80,408);

    glVertex2i(80,408);
    glVertex2i(80,380);

    glVertex2i(80,392);
    glVertex2i(120,392);

    glVertex2i(100,408);
    glVertex2i(100,380);


	glEnd();

 //hay stacks

    glBegin(GL_QUADS);
    glColor4f(1.0f, 0.8f, 0.1f, 0.1f);
    glVertex2i(730,350);
	glVertex2i(850,350);
	glVertex2i(850,450);
	glVertex2i(730,450);
	glEnd();

    glBegin(GL_TRIANGLES);
    glColor4f(1.0f, 0.8f, 0.1f, 0.1f);
    glVertex2i(730,450);
	glVertex2i(850,450);
	glVertex2i(797,513);
    glEnd();



    glBegin(GL_LINES);
    glColor4f(1.0f, 0.8f, 0.1f, 0.1f);

    glVertex2i(730,350);
	glVertex2i(850,350);

	glVertex2i(850,350);
    glVertex2i(850,450);

    glVertex2i(850,450);
    glVertex2i(730,450);

    glVertex2i(730,450);
    glVertex2i(730,350);
    glEnd();



    glBegin(GL_LINES);
    glColor4f(1.0f, 0.8f, 0.1f, 0.1f);

    glVertex2i(730,350);
	glVertex2i(850,350);

	glVertex2i(850,350);
    glVertex2i(850,450);

    glVertex2i(850,450);
    glVertex2i(730,450);

    glVertex2i(730,450);
    glVertex2i(730,350);

	glEnd();

    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2i(797,513);
	glVertex2i(797,540);


    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2i(250,370);
	glVertex2i(280,370);
	glVertex2i(280,390);
	glVertex2i(250,390);
	glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f, 1.0f);

    glVertex2i(250,370);
	glVertex2i(280,370);

	glVertex2i(280,370);
    glVertex2i(280,390);

    glVertex2i(280,390);
    glVertex2i(250,390);

    glVertex2i(250,390);
    glVertex2i(250,370);

	glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f, 1.0f);

    glVertex2i(265,370);
	glVertex2i(265,390);
	glEnd();


    //2nd house

    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.6f, 0.4f);
    glVertex2i(336,353);
	glVertex2i(526,353);
	glVertex2i(527,500);
	glVertex2i(333,500);
	glEnd();

	glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2i(336,353);
	glVertex2i(526,353);

	glVertex2i(526,353);
    glVertex2i(527,500);

    glVertex2i(527,500);
    glVertex2i(333,500);

    glVertex2i(333,500);
    glVertex2i(336,353);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.6f, 0.4f);
    glVertex2i(526,353);
	glVertex2i(700,353);
	glVertex2i(700,500);
	glVertex2i(527,500);
	glEnd();

	glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2i(526,353);
	glVertex2i(700,353);

	glVertex2i(700,353);
    glVertex2i(700,500);

    glVertex2i(700,500);
    glVertex2i(527,500);

    glVertex2i(527,500);
    glVertex2i(526,353);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.6f, 0.4f);
    glVertex2i(333,500);
	glVertex2i(527,500);
	glVertex2i(600,600);
	glVertex2i(400,600);
	glEnd();

	glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2i(333,500);
	glVertex2i(527,500);

	glVertex2i(527,500);
    glVertex2i(600,600);

    glVertex2i(600,600);
    glVertex2i(400,600);

    glVertex2i(400,600);
    glVertex2i(333,500);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor4f(1.0f, 0.6f, 0.0f, 0.0f);
    glVertex2i(527,500);
	glVertex2i(700,500);
	glVertex2i(600,600);
    glEnd();

    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2i(527,500);
	glVertex2i(700,500);

	glVertex2i(700,500);
    glVertex2i(600,600);

    glVertex2i(600,600);
    glVertex2i(527,500);

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2i(591,588);
	glVertex2i(678,500);
    glEnd();

    glBegin(GL_QUADS);
    glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
    glVertex2i(400,400);
	glVertex2i(480,400);
	glVertex2i(480,460);
	glVertex2i(400,460);
	glEnd();

    glLineWidth(3);
	glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2i(400,400);
	glVertex2i(480,400);

	glVertex2i(480,400);
    glVertex2i(480,460);

    glVertex2i(480,460);
    glVertex2i(400,460);

    glVertex2i(400,460);
    glVertex2i(400,400);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2i(400,430);
	glVertex2i(480,430);
	glEnd();

	glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2i(440,400);
	glVertex2i(440,460);
	glEnd();

	glBegin(GL_QUADS);
    glColor4f(1.0f, 1.0f, 0.5f, 0.0f);
    glVertex2i(600,353);
	glVertex2i(660,353);
	glVertex2i(660,460);
	glVertex2i(600,460);
	glEnd();

    glLineWidth(3);
	glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2i(600,353);
	glVertex2i(660,353);

	glVertex2i(660,353);
    glVertex2i(660,460);

    glVertex2i(660,460);
    glVertex2i(600,460);

    glVertex2i(600,460);
    glVertex2i(600,353);
    glEnd();

    glLineWidth(3);
	glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2i(630,353);
	glVertex2i(630,460);
	glEnd();

	//1st building

	glBegin(GL_QUADS);
    glColor3f(0.8f, 0.6f, 0.4f);
    glVertex2i(1399,350);
	glVertex2i(1502,350);
	glVertex2i(1502,500);
	glVertex2i(1400,500);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(1420,490);
	glVertex2i(1450,490);
	glVertex2i(1450,470);
	glVertex2i(1420,470);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(1470,490);
	glVertex2i(1502,490);
	glVertex2i(1502,470);
	glVertex2i(1470,470);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(1420,450);
	glVertex2i(1450,450);
	glVertex2i(1450,430);
	glVertex2i(1420,430);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(1420,450);
	glVertex2i(1450,450);
	glVertex2i(1450,430);
	glVertex2i(1420,430);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(1470,450);
	glVertex2i(1502,450);
	glVertex2i(1502,429);
	glVertex2i(1470,430);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(1420,410);
	glVertex2i(1450,410);
	glVertex2i(1450,390);
	glVertex2i(1420,390);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(1470,410);
	glVertex2i(1502,409);
	glVertex2i(1502,390);
	glVertex2i(1470,390);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(1420,370);
	glVertex2i(1450,370);
	glVertex2i(1450,350);
	glVertex2i(1420,350);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(1470,370);
	glVertex2i(1502,370);
	glVertex2i(1502,350);
	glVertex2i(1470,350);
	glEnd();

	// 2nd building

	glBegin(GL_QUADS);
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2i(1502,350);
	glVertex2i(1705,350);
	glVertex2i(1705,680);
	glVertex2i(1502,680);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(1520,660);
	glVertex2i(1580,660);
	glVertex2i(1580,620);
	glVertex2i(1520,620);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(1620,660);
	glVertex2i(1680,660);
	glVertex2i(1680,620);
	glVertex2i(1620,620);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(1520,600);
	glVertex2i(1580,600);
	glVertex2i(1580,560);
	glVertex2i(1520,560);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(1620,600);
	glVertex2i(1680,600);
	glVertex2i(1680,560);
	glVertex2i(1620,560);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(1520,540);
	glVertex2i(1580,540);
	glVertex2i(1580,500);
	glVertex2i(1520,500);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(1620,540);
	glVertex2i(1680,540);
	glVertex2i(1680,500);
	glVertex2i(1620,500);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(1520,480);
	glVertex2i(1580,480);
	glVertex2i(1580,440);
	glVertex2i(1520,440);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(1620,480);
	glVertex2i(1680,480);
	glVertex2i(1680,440);
	glVertex2i(1620,440);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(1520,420);
	glVertex2i(1580,420);
	glVertex2i(1580,380);
	glVertex2i(1520,380);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(1620,420);
	glVertex2i(1680,420);
	glVertex2i(1680,380);
	glVertex2i(1620,380);
	glEnd();

	//3rd building

	glBegin(GL_QUADS);
    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
    glVertex2i(1705,350);
	glVertex2i(1901,350);
	glVertex2i(1901,637);
	glVertex2i(1705,637);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(1705,620);
	glVertex2i(1760,620);
	glVertex2i(1760,580);
	glVertex2i(1705,580);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(1800,620);
	glVertex2i(1880,620);
	glVertex2i(1880,580);
	glVertex2i(1800,580);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(1705,540);
	glVertex2i(1760,540);
	glVertex2i(1760,500);
	glVertex2i(1705,500);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(1800,540);
	glVertex2i(1880,540);
	glVertex2i(1880,500);
	glVertex2i(1800,500);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(1705,460);
	glVertex2i(1760,460);
	glVertex2i(1760,420);
	glVertex2i(1705,420);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(1800,460);
	glVertex2i(1880,460);
	glVertex2i(1880,420);
	glVertex2i(1800,420);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(1705,380);
	glVertex2i(1760,380);
	glVertex2i(1760,350);
	glVertex2i(1705,350);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(0.5f, 1.0f, 1.0f);
    glVertex2i(1800,380);
	glVertex2i(1880,380);
	glVertex2i(1880,350);
	glVertex2i(1800,350);
	glEnd();


	//road

	glBegin(GL_QUADS);
    glColor3f(0.5f, 0.5f, 0.5f);
    glVertex2i(1300,200);
	glVertex2i(1920,200);
	glVertex2i(1920,350);
	glVertex2i(1300,350);
	glEnd();

	glLineWidth(5);
	glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2i(1300,290);
	glVertex2i(1339,290);

	glVertex2i(1359,290);
    glVertex2i(1400,290);

    glVertex2i(1421,290);
    glVertex2i(1458,290);

    glVertex2i(1479,290);
    glVertex2i(1519,290);

    glVertex2i(1539,290);
    glVertex2i(1581,290);

	glVertex2i(1599,290);
    glVertex2i(1639,290);

    glVertex2i(1658,290);
    glVertex2i(1699,290);

    glVertex2i(1719,290);
	glVertex2i(1760,290);

	glVertex2i(1779,290);
    glVertex2i(1818,290);

    glVertex2i(1840,290);
    glVertex2i(1879,290);

    glVertex2i(1899,290);
    glVertex2i(1920,290);


    glEnd();

    glLineWidth(5);
	glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2i(1300,270);
	glVertex2i(1317,270);

	glVertex2i(1334,270);
    glVertex2i(1371,270);

    glVertex2i(1387,270);
    glVertex2i(1426,270);

    glVertex2i(1441,270);
    glVertex2i(1484,270);

    glVertex2i(1507,270);
    glVertex2i(1549,270);

	glVertex2i(1570,270);
    glVertex2i(1619,270);

    glVertex2i(1647,270);
    glVertex2i(1688,270);

    glVertex2i(1708,270);
	glVertex2i(1749,270);

	glVertex2i(1770,270);
    glVertex2i(1808,270);

    glVertex2i(1829,270);
    glVertex2i(1859,270);

    glVertex2i(1880,270);
    glVertex2i(1908,270);


    glEnd();

    // city tree

	glBegin(GL_QUADS);
    glColor3f(0.5f, 0.6f, 0.1f);
    glVertex2i(1560,100);
	glVertex2i(1560,160);
	glVertex2i(1583,160);
	glVertex2i(1583,100);
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1574+25*cos(theta),170+25*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1595+25*cos(theta),196+25*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1568+30*cos(theta),210+30*sin(theta));
    }
	glEnd();

	glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
    for (int i=0;i<360;i++)
    {
        theta=i*3.142/180;
        glVertex2f(1543+25*cos(theta),193+25*sin(theta));
    }
	glEnd();




    //protector

    glLineWidth(3);
	glBegin(GL_LINES);
    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);

    glVertex2i(0,420);
	glVertex2i(60,420);

	glVertex2i(0,404);
    glVertex2i(60,404);

    glVertex2i(0,390);
    glVertex2i(60,390);

    glVertex2i(0,376);
    glVertex2i(60,376);

    glVertex2i(0,420);
	glVertex2i(60,420);

	glVertex2i(19,428);
    glVertex2i(19,367);

    glVertex2i(38,428);
    glVertex2i(38,367);



	glEnd();

}

void Hills(){

//hill

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2i(0,700);
	glVertex2i(200,900);
	glVertex2i(400,700);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2i(202,841);
	glVertex2i(496,841);
	glVertex2i(398,939);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2i(400,700);
	glVertex2i(496,841);
	glVertex2i(202,841);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2i(400,700);
	glVertex2i(551,924);
	glVertex2i(897,700);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2i(900,700);
	glVertex2i(1200,1000);
	glVertex2i(1500,700);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2i(1300,700);
	glVertex2i(1600,1000);
	glVertex2i(1920,700);
    glEnd();

glEnd();
}


void Boat_two(){
    glPushMatrix();
    glTranslatef(B,0,0);
    boat_model_two();
    glPopMatrix();

}
void All_cloud(){
    glPushMatrix();
    glTranslatef(C,0,0);
    All_cloud_Model();
    glPopMatrix();

}


void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 1.0);


	Behind_Boat();


    Boat_two();
    Infront_Boat();
    All_cloud();
    Hills();



	glFlush();
}



void move_right(){

    B = B + -.05;
    C = C + .1;

    if(B>1000){
        B =0;
    }
     if(C>1000){
        C =0;
    }

    glutPostRedisplay();
}



void mouse(int key, int state, int x, int y){
    switch (key)
    {
    case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN)
        {
            glutIdleFunc(move_right);
        }
        break;
    case GLUT_MIDDLE_BUTTON:
    case GLUT_RIGHT_BUTTON:
        if (state == GLUT_DOWN)
        {
            glutIdleFunc(NULL);
        }
        break;
        default:
        break;
    }
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(1900, 1080);
	glutCreateWindow("Village and Cityscape");
	init();
	glutDisplayFunc(display);
    glutMouseFunc(mouse);
	glutMainLoop();
}
