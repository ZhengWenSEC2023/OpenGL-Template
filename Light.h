#pragma once

#include <GL/glew.h>
#include <glm/glm.hpp>

class Light
{
public:
	Light();
	Light(GLfloat red, GLfloat Green, GLfloat blue, GLfloat aIntensity);

	void useLight(GLfloat ambientIntensityLocation, GLfloat ambientColourLocation);
	~Light();

private:
	glm::vec3 colour;
	GLfloat ambientIntensity;
};

