#include <iostream>
#include <vector>
#include "core/OpenGLManager.h"
#include "core/scenes/NormScene.h"
#include "core/scenes/BoneScene.h"

using namespace std;

int main(int argc, char* argv[]) {
	cout << "Skeletel Animation" << endl
		<< "-------------------------------" << endl
		<< "Animates .bvh and .x files using Assimp and OpenGL." << endl
		<< "Author\t\tMatthew Knox" << endl
		<< "Date\t\t2016-10-08" << endl
		<< "License\t\tMIT" << endl
		<< endl
		<< "This program and its source code will be avalible at" << endl
		<< "http://github.com/mrkno/SkeletelAnimation when marking" << endl
		<< "is complete." << endl << endl;

	vector<Scene*> scenes;
	scenes.push_back(new NormScene());
	scenes.push_back(new BoneScene());

	try {
		OpenGLManager::run(argc, argv, scenes);
	}
	catch(string e)
	{
		cerr << e << endl;
	}
	catch(void*)
	{
		cerr << "An unknown error occurred (code/compilation/dependency error?)" << endl;
	}
	return 0;
}