#version 450                          
layout (location = 0) in vec3 vPos;  
layout (location = 1) in vec3 vNormal;
layout (location = 2) in vec2 vTexCoord;
layout (location = 3) in vec3 vTangent;

out vec2 TexCoord;

uniform vec2 _Offset;

void main()
{
	gl_Position = vec4(vPos.x + _Offset.x, vPos.y + _Offset.y, 0, 1);
	TexCoord = vTexCoord;
}