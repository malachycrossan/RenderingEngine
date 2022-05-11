#pragma once

#include <vector>
#include "objects.h"

float intersection(sphere s, std::vector<float> orgin, std::vector<float> direction);
int render(camera c, sphere s);