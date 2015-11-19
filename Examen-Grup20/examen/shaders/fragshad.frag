#version 330 core

in vec3 fcolor;
out vec4 FragColor;

void main()
{
    FragColor = vec4(fcolor,1);

    // PINTA A FRANGES

    //if ((int(gl_FragCoord.y) % 20) <= 10) FragColor= vec4(1.0, 1.0, 1.0, 1.0);
    //else FragColor= vec4(0, 0, 0, 1.0);
}
