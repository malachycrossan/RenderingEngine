#pragma once

#include "renderfunctions.h"
#include "vectorfunctions.h"
#include "objects.h"

float intersection(sphere s, std::vector<float> orgin, std::vector<float> direction) {
	
	float b = 2 * dot(direction, diffrence(orgin, s.pos));
	float c = length(diffrence(orgin, s.pos)) - s.radius;
	return b * b - 4 * c;
}

int render(camera c, sphere s) {
	for (int x = 0; x < c.w; x++)
	{
		for (int y = 0; y < c.h; y++) {
			float result  = intersection(
				s,
				c.pos,
				normalize(
					diffrence(
						std::vector<float>{
										0,
										c.sensor.pos[1] + (c.sensor.h / c.h) * y,
										c.sensor.pos[2] + (c.sensor.w / c.w) * x
							},
						c.pos
					)
				)
			);
			if (result > 0) c.imgBuffer[y * c.h + x];
		}
	}
	return 0;
}