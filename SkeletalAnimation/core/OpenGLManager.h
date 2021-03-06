#pragma once

#include <GL/freeglut.h>
#include "Scene.h"

#define WINDOW_XPOS 50
#define WINDOW_YPOS 50

using namespace std;

class OpenGLManager
{
public:
	static void run(int, char**, vector<Scene*>);

private:
	static void windowDisplayCallback();
	static void displayRefreshCallback(int);
	static void windowReshapeCallback(GLint, GLint);
	static void specialKeypressCallback(int, int, int);
	static void mouseClickCallback(int, int, int, int);
	static void keypressCallback(unsigned char, int, int);
};

