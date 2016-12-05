#pragma once

// Add all needed librarys
#pragma comment(lib, "opencv_calib3d2413.lib")
#pragma comment(lib, "opencv_calib3d2413d.lib")
#pragma comment(lib, "opencv_core2413.lib")
#pragma comment(lib, "opencv_core2413d.lib")
#pragma comment(lib, "opencv_highgui2413.lib")
#pragma comment(lib, "opencv_highgui2413d.lib")
#pragma comment(lib, "opengl32.lib")
#pragma comment(lib, "glu32.lib")
#pragma comment(lib, "glew32.lib")
#pragma comment(lib, "glfw3.lib")

#include "stdafx.h"
#include <stdio.h>  
#include <stdlib.h>  
#include <Windows.h>
#include <iostream>
#include <functional>
#include <vector>

#include "OpenGLRenderer.h"
#include "Camera.h"
#include "Object3d.h"

class LwAR
{

public:

	LwAR(Renderer* renderer);
	~LwAR();
	void AddObject(Object3d * object);
	void Start();
	std::function<void()> onUpdate;

private:

	int _width = 640;
	int _height = 480;
	bool _running;
	Renderer* _renderer;
	Camera _cam;
	cv::Mat gradientTexture;
	std::vector<Object3d *> _objects;
};
