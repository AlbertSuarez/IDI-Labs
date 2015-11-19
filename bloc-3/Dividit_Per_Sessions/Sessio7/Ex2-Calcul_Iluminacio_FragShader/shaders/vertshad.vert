# version 330 core

in vec3 vertex;
in vec3 normal;

in vec3 matamb;
in vec3 matdiff;
in vec3 matspec;
in float matshin;

uniform mat4 proj;
uniform mat4 view;
uniform mat4 TG;
uniform vec3 colFocus;

out vec3 matambf;
out vec3 matdifff;
out vec3 matspecf;
out float matshinf;

vec3 llumAmbient = vec3(0.2, 0.2, 0.2);

out vec3 fcolor;

out vec4 vertSCO;
out vec3 normalSCO;


void main()
{
    vertSCO = (view * TG * vec4 (vertex, 1.0));
    mat3 normalMatrix = inverse (transpose (mat3 (view * TG)));
    normalSCO =  normalize(normalMatrix * normal);
    fcolor = colFocus;

    gl_Position = proj  * vertSCO;
    matambf = matamb;
    matdifff = matdiff;
    matspecf = matspec;
    matshinf = matshin;


}
