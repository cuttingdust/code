//#version 120
//attribute vec3 a_vertex;

#version 410 core
layout (location = 0) in vec3 a_vertex;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;
void main()
{
    gl_Position = projection * view * model * vec4(a_vertex, 1.0);
}