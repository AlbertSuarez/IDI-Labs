#version 330 core
in vec3 vertex;
in vec3 col;
out vec4 coli;
uniform mat4 mati;
void main()
{

  gl_Position= mati*vec4(vertex, 1.0);
  coli=vec4(col,1.0);
}