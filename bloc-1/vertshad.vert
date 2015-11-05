#version 330 core

in vec3 vertex;
uniform mat4 TG;

void main () {
  gl_Position = TG*vec4(vertex, 1.0);
}
 
