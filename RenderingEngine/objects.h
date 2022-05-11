#pragma once

#include <vector>

class plane {
public:
	std::vector<float> pos;
	float w, h;
};

class camera {
public:
	std::vector<float> pos;
	plane sensor;
	int w, h;
	unsigned char* imgBuffer;
};

class sphere {
public:
	std::vector<float> pos;
	float radius;
};