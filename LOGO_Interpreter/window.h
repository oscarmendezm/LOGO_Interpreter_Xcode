//
//  window.h
//  LOGO_Interpreter
//
//  Created by Oscar Alejandro Mendez Maldonado on 01/12/2012.
//  Copyright (c) 2012 Oscar Alejandro Mendez Maldonado. All rights reserved.
//

#ifndef LOGO_Interpreter_window_h
#define LOGO_Interpreter_window_h

#ifdef __APPLE__
    #include <GLUT/glut.h>
#else
    #include <GL/gl.h>     // The GL Header File
    #include <GL/glut.h>   // The GL Utility Toolkit (Glut) Header
#endif
#include <stdlib.h>

static void draw(void);

class window {
public:
	static window* Instance(void);
	static window* Instance(int argc, char** argv);
	static void Destroy();
    
	static void reshape(int w,int h);
	static void keyboard ( unsigned char key, int x, int y );
	static void display();
private:
	window(){};
	window(int argc, char** argv);                                 // Private constructor
	window(const window&);                 // Prevent copy-construction
	window& operator=(const window&);      // Prevent
	~window(){};
	static window* _instance;
};

window* window::_instance = 0;

window* window::Instance(int argc, char** argv)
{
	if (_instance == 0)
	{
		_instance = new window(argc, argv);
	}
	return _instance;
}

window* window::Instance()
{
    //	if (_instance == 0)
    //	{
    //		_instance = new window;
    //	}
	return _instance;
}

window::window(int argc, char** argv)
{
#ifdef __APPLE__
	glutInit( &argc, argv );
    //glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glutInitWindowSize  ( 500, 500 );
	glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
	glutCreateWindow    ( "ODD assignment" );
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);
	glShadeModel(GL_SMOOTH);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glEnable(GL_COLOR_MATERIAL );
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
	glutReshapeFunc     ( reshape );
	glutDisplayFunc     ( display );
	glutKeyboardFunc    ( keyboard );
	glutMainLoop        ( );
#else
    glutInit( &argc, argv );
	glShadeModel(GL_SMOOTH);
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);
    glEnable(GL_COLOR_MATERIAL );
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
	glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
	glutInitWindowSize  ( 500, 500 );
	glutCreateWindow    ( "ODD assignment" );
	glutDisplayFunc     ( display );
	glutReshapeFunc     ( reshape );
	glutKeyboardFunc    ( keyboard );
	glutMainLoop        ( );
#endif
}

void window::Destroy()
{
	delete _instance;
	_instance = 0;
}
void window::reshape ( int w, int h )
{
    glViewport     ( 0, 0, w, h );
    glMatrixMode   ( GL_PROJECTION );
    glLoadIdentity ( );
    if ( h==0 )
        gluPerspective ( 80, ( float ) w, 1.0, 5000.0 );
    else
        gluPerspective ( 80, ( float ) w / ( float ) h, 1.0, 5000.0 );
    glMatrixMode   ( GL_MODELVIEW );
    glLoadIdentity ( );
}

void window::keyboard( unsigned char key, int x, int y )
{
    switch ( key ) {
        case 27:
            exit ( 0 );
            break;
        default:
            break;
    }
}

void window::display()
{
	glLoadIdentity();
	glTranslatef(0.0f,0.0f,-6.0f);
	glColor3f(1,1,1);
	draw();
	glutSwapBuffers ( );
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

#endif /* LOGO_Interpreter_window_h */
