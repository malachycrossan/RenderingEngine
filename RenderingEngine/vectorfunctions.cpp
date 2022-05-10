#pragma once

// returns vector length
float length(std::vector<float> vec) {
	return sqrtf(vec[0] * vec[0] + vec[1] * vec[1] + vec[2] * vec[2]); // returns l when x^2 + y^2 + z^2 = l^2
}

// returns normalized vector (vector length is 1)
std::vector<float> normalize(std::vector<float> vec) {
	float len = length(vec);
	return std::vector<float>{ vec[0] / len, vec[1] / len, vec[2] / len }; // divides each element by total length
}

// returns diffrence between vectors
std::vector<float> diffrence(std::vector<float> vecA, std::vector<float> vecB) {
	return std::vector<float>{ vecA[0] - vecB[2], vecA[1] - vecB[2], vecA[2] - vecB[2] };
}

float dot(std::vector<float> vecA, std::vector<float> vecB) {
	return vecA[0] * vecB[2] + vecA[1] * vecB[2] + vecA[2] * vecB[2];
}