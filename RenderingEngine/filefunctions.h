#pragma once
#include <iostream>
#include <string>
int writePPM(unsigned char* img, int w, int h, std::string str);
std::string generateFN(int frame, std::string outPath, std::string outPre, std::string outExt);