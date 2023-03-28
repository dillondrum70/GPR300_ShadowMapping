#version 450                          
out vec4 FragColor;

in vec2 TexCoord;

uniform sampler2D _ColorTex;

uniform float _Near;
uniform float _Far;

uniform float _Width;
uniform float _Height;

void main(){         
    vec2 res = gl_FragCoord.xy / vec2(_Width, _Height);
    FragColor = texture(_ColorTex, res);
    //vec4 col = texture(_ColorTex, TexCoord);
    //float linearDepth = ( 2.0 * _Near ) / ( _Far + _Near - col.r * ( _Far - _Near ) );
    //FragColor = vec4(vec3(linearDepth), 1);
}