#version 330 core
in vec3 vertex;
in vec3 col;
out vec4 coli;
void main()
{

  gl_Position= vec4(vertex*0.5, 1.0);
  coli=vec4(col,1.0);
}