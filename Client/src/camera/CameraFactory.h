#pragma once

#include "Camera.h"

class CameraFactory
{
public:
	Camera* buildCamera(int width, int height);
};

