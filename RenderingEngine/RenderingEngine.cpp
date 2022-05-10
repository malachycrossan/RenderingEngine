// RenderingEngine.cpp

#include "header.h"
#include "filefunctions.h"
#include "renderfunctions.h"
#include "objects.h"
#include "vectorfunctions.h"

int test() {
	camera cam;
	cam.pos = std::vector<float>{-1,0,0};
	cam.w = 512; cam.h = 512;
	cam.sensor.pos = std::vector<float>{0,1,-1};
	cam.sensor.w = 2; cam.sensor.h = 2;
	sphere s; 
	s.pos = std::vector<float>{2,0,0};
	s.radius = 1;
	render(cam, s);
	return writePPM(cam.imgBuffer, cam.w, cam.h, "test1.ppm");;
}


int main() {
	return test();
}