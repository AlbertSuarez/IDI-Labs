#version 330 core
out vec4 FragColor;

void main()
{

  FragColor=vec4(1.);

  if((int(gl_FragCoord.y) % 28) <= 14){
    if(gl_FragCoord.y<400 && gl_FragCoord.x<400)
      FragColor= vec4(1.,1.,0.,1.);
    else if(gl_FragCoord.y<400 && gl_FragCoord.x>=400)
      FragColor= vec4(0.,1.,0.,1.);
    else if(gl_FragCoord.y>=400 && gl_FragCoord.x>=400)
      FragColor= vec4(0.,0.,1.,0.);
    else if(gl_FragCoord.y>=400 && gl_FragCoord.x<400)
      FragColor= vec4(1.,0.,0.,1.);
    }
    else FragColor= vec4(0.5, 0.7, 1.0, 1.0);
    
}