#pragma once

#include "filefunctions.h"

FILE* stream;

int writePPM(unsigned char* img, int w, int h, std::string str) {
    const char* fn = str.c_str();
    errno_t fp = fopen_s(&stream, fn, "w"); // open file into file pointer
    if (stream) {
        fprintf(stream, "P6\n%d %d %d\n", w, h, 0xff); // write PGM header
        fwrite(img, sizeof(unsigned char), w * h, stream); // write PGM data
        fp = fclose(stream);
        return 0; // No error
    }
    else {
        return 1; // File oppening Error
    }
}

std::string generateFN(int frame, std::string outPath, std::string outPre, std::string outExt) {
    std::string str = std::to_string(frame) + outExt;
    //for (int i = 0; i < 7 - str.length(); i++) {
        //str = "0" + str;
    //}
    str = outPath + outPre + str;
    return str;
}