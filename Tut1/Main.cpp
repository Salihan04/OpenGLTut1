#include <iostream>
#include <GL/glew.h>
#include <GL/freeglut.h>

using namespace std;

void renderScene() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//glClearColor(1.0f, 0.0f, 0.0f, 1.0f);	//clear red
	//glClearColor(0.0f, 0.0f, 0.0f, 1.0f);	//clear black
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f);	//clear blue

	glutSwapBuffers();
}

int main(int argc, char **argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(300, 300);	//optional
	glutInitWindowSize(400, 300);	//optional
	glutCreateWindow("OpenGL First Window");

	glewInit();

	//check OpenGL's version compatibility with graphics card
	if (glewIsSupported) {
		cout << "OpenGL Version is 4.1" << endl;
	}
	else {
		cout << "OpenGL 4.1 is not supported" << endl;
	}

	glEnable(GL_DEPTH_TEST);

	//register callbacks
	glutDisplayFunc(renderScene);

	glutMainLoop();

	return 0;
}