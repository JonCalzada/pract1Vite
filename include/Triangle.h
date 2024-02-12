#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <glad/glad.h> // holds all OpenGL type declarations

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include "Vertex.h"
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
using namespace std;
using namespace glm;

class Triangle {
public:
	Triangle(float size) {
		buildVertices(size);
		buildIndices();
	}

	~Triangle() {
		vertices.clear();
		indices.clear();
	}

	vector<Vertex>       vertices;
	vector<unsigned int> indices;

private:

	void buildVertices(float size) {

		Vertex v1, v2, v3,v4;

		//Triangulo 1
		v1.Position.x = 0.5f; v1.Position.y = -0.25f; v1.Position.z = 0.0f;
		v2.Position.x = 0.5f; v2.Position.y = 0.25f; v2.Position.z = 0.0f;
		v3.Position.x = -0.5f; v3.Position.y = 0.25f; v3.Position.z = 0.0f;
		v4.Position.x = -0.5f; v4.Position.y = -0.25f; v4.Position.z = 0.0f;


		v1.Color.x = 1.0f; v1.Color.y = 0.0f; v1.Color.z = 0.0f; // red
		v2.Color.x = 1.0f; v2.Color.y = 1.0f; v2.Color.z = 0.0f; // yellow
		v3.Color.x = 0.0f; v3.Color.y = 1.0f; v3.Color.z = 0.0f; // green
		v4.Color.x = 0.0f; v4.Color.y = 1.0f; v4.Color.z = 0.0f; // green
		
		
		// Truangulo 2

		//v1.Position.x = 0.0f; v1.Position.y = 1.0f; v1.Position.z = 0.0f;
		//v2.Position.x = -1.0f; v2.Position.y = -1.0f; v2.Position.z = 0.0f;
		//v3.Position.x = 1.0f; v3.Position.y = -1.0f; v3.Position.z = 0.0f;
		//

		//v1.Color.x = 1.0f; v1.Color.y = 1.0f; v1.Color.z = 0.0f; // red
		//v2.Color.x = 0.0f; v2.Color.y = 1.0f; v2.Color.z = 1.0f; // yellow
		//v3.Color.x = 1.0f; v3.Color.y = 0.0f; v3.Color.z = 1.0f; // green
		//

		vertices.push_back(v1);
		vertices.push_back(v2);
		vertices.push_back(v3);
		vertices.push_back(v4);
	}

	void buildIndices() {
		
		// Indexed connections
		indices.push_back(0);
		indices.push_back(1);
		indices.push_back(2);
		
		indices.push_back(0);
		indices.push_back(2);
		indices.push_back(3);
	}
};

#endif