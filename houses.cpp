//in the  name of god

#include<GL/glut.h>



//http://www.cplusplus.com/forum/beginner/139208/
void init(void)
{
	glClearColor(0.0, 0.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 800, 0.0, 600);

}

void buildHouses(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

//font
glColor3ub(204,204,0);
	glRasterPos2i(200,320);
	char text[]="Graphic Class - Hoseinkhani.com";
	for(int i=0;i<(sizeof(text)/sizeof(*text));i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,
		text[i]);
//end font

//circle
	glColor3f(204,204,0);
	
int xc = 380;
int yc = 480;
int r= 70;


int r2=r*r;
	glBegin(GL_LINES);
	for(int x=0, y=r;x<=y;x++)
	{
		if(r2-x*x<y*y)
			y--;
			glVertex2i(xc+x,yc+y);
			glVertex2i(xc-x,yc+y);
			glVertex2i(xc+x,yc-y);
			glVertex2i(xc-x,yc-y);
			glVertex2i(xc+y,yc+x);
			glVertex2i(xc-y,yc+x);
			glVertex2i(xc+y,yc-x);
			glVertex2i(xc-y,yc-x);
	}	
	glEnd();

//end circle

//start house 
	glBegin(GL_POLYGON);  

	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(50, 0);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(50, 100);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2i(150, 100);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(150,0);
	glEnd();  
//end house 

//start house 2
	glBegin(GL_POLYGON);  
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(200, 0);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(200, 250);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2i(350, 250);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(350,0);
	glEnd();   
//end house2


//start house 3
	glBegin(GL_POLYGON);  
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(400, 0);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(400, 250);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2i(550, 250);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(550,0);
	glEnd();  
//end house3


//start house 4
	glBegin(GL_POLYGON);  
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(600, 0);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(600, 100);
	glColor3f(0.0, 1.0, 1.0);
	glVertex2i(700, 100);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2i(700,0);
	glEnd();  
//end house4


	
//start ceiling	
	glBegin(GL_POLYGON); 
	glColor3f(0.8, 0.0, 0.0);
	glVertex2i(50, 100);
	glColor3f(0.5, 0.0, 0.3);
	glVertex2i(150, 100);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(100, 130);
	glEnd(); 
//end ceiling

//start ceiling2
glBegin(GL_POLYGON); 
	glColor3f(0.8, 0.0, 0.0);
// parametr 2 in tavabe ta end ceiling2 baraye tanzim y hast
// parametr 1 in tavabe ta end ceiling2 baraye tanzim x hast
	glVertex2i(200, 250);
	glColor3f(0.5, 0.0, 0.3);
// in 350 baraye andaze mosalas ast
	glVertex2i(350, 250);
	glColor3f(1.0, 0.0, 0.0);
        //parametr 2 baraye saf bodan mosalat ast
	glVertex2i(280, 290);
	glEnd(); 
//end ceiling2



//start ceiling3
glBegin(GL_POLYGON); 
	glColor3f(0.8, 0.0, 0.0);
// parametr 2 in tavabe ta end ceiling2 baraye tanzim y hast
// parametr 1 in tavabe ta end ceiling2 baraye tanzim x hast
	glVertex2i(550, 250);
	glColor3f(0.5, 0.0, 0.3);
// in 350 baraye andaze mosalas ast
	glVertex2i(400, 250);
	glColor3f(1.0, 0.0, 0.0);
        //parametr 2 baraye saf bodan mosalat ast
	glVertex2i(470, 290);
	glEnd(); 
//end ceiling3



//start ceiling4
	glBegin(GL_POLYGON); 
	glColor3f(0.8, 0.0, 0.0);
	glVertex2i(600, 100);
	glColor3f(0.5, 0.0, 0.3);
	glVertex2i(700, 100);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(640, 130);
	glEnd(); 
//end ceiling4





//start door
	glBegin(GL_POLYGON);  
	glColor3f(0.3, 0.2, 0.0);
	glVertex2i(80, 0);
	glVertex2i(80, 50);
	glVertex2i(120, 50);
	glVertex2i(120,0);
	glEnd();  
//end door

//start door2
glBegin(GL_POLYGON);  
	glColor3f(0.3, 0.2, 0.0);
	glVertex2i(250, 0);
//ertefa dar parametr 2 in 2 ta paini ast
// un hai ke 250 hast baraye mogheit x dar hast
	glVertex2i(250, 50);
	glVertex2i(290, 50);
	glVertex2i(290,0);
	glEnd(); 

 //end door2



//start door3
glBegin(GL_POLYGON);  
	glColor3f(0.3, 0.2, 0.0);
	glVertex2i(450, 0);
//ertefa dar parametr 2 in 2 ta paini ast
// un hai ke 250 hast baraye mogheit x dar hast
	glVertex2i(450, 50);
	glVertex2i(490, 50);
	glVertex2i(490,0);
	glEnd(); 

 //end door2



//start door4
glBegin(GL_POLYGON);  
	glColor3f(0.3, 0.2, 0.0);
	glVertex2i(630, 0);
//ertefa dar parametr 2 in 2 ta paini ast
// un hai ke 250 hast baraye mogheit x dar hast
	glVertex2i(630, 50);
	glVertex2i(670, 50);
	glVertex2i(670,0);
	glEnd(); 

 //end door4



//start windows1
	glBegin(GL_POLYGON);  
	glColor3f(0.3, 0.2, 0.0);
	glVertex2i(90, 60);
	glVertex2i(110, 60);
	glVertex2i(110, 80);
	glVertex2i(90,80);
	glEnd();

//end window1


//start windows2
	glBegin(GL_POLYGON);  
	glColor3f(0.3, 0.2, 0.0);
	glVertex2i(220, 160);
	glVertex2i(240, 160);
	glVertex2i(240, 180);
	glVertex2i(220,180);
	glEnd();

	glBegin(GL_POLYGON);  
	glColor3f(0.3, 0.2, 0.0);
	glVertex2i(310, 160);
	glVertex2i(330, 160);
	glVertex2i(330, 180);
	glVertex2i(310,180);
	glEnd();


//end window2





//start windows3
	glBegin(GL_POLYGON);  
	glColor3f(0.3, 0.2, 0.0);
	glVertex2i(420, 160);
	glVertex2i(440, 160);
	glVertex2i(440, 180);
	glVertex2i(420,180);
	glEnd();

	glBegin(GL_POLYGON);  
	glColor3f(0.3, 0.2, 0.0);
	glVertex2i(510, 160);
	glVertex2i(530, 160);
	glVertex2i(530, 180);
	glVertex2i(510,180);
	glEnd();


//end window3



//start windows4
	glBegin(GL_POLYGON);  
	glColor3f(0.3, 0.2, 0.0);
	glVertex2i(640, 60);
	glVertex2i(660, 60);
	glVertex2i(660, 80);
	glVertex2i(640,80);
	glEnd();

//end window4


	glFlush();
}





int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(50, 100);
	glutInitWindowSize(800, 1600);
	glutCreateWindow("House Section OpenGL");
	init();
	glutDisplayFunc(buildHouses);
	glutMainLoop();
}
