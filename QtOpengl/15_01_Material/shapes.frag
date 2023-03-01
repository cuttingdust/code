#version 120

varying vec3 v_normal;
varying vec3 v_vertex;

struct Material {
   vec3 ambient;
   vec3 diffuse;
   vec3 specular;
   float shininess;
};

struct Light {
   vec3 position;
   vec3 ambient;
   vec3 diffuse;
   vec3 specular;
};

uniform Light light;
uniform Material material;

uniform vec3 lightPos;
uniform vec3 viewPos;

void main()
{
   /// ambient
   vec3 ambient = material.ambient * light.ambient;

   // diffuse
   vec3 norm = normalize(v_normal);
   vec3 lightDir = normalize(lightPos - v_vertex);
   float diff = max(dot(norm, lightDir), 0.0);
   vec3 diffuse = diff * material.diffuse * light.diffuse;

   // specular
   vec3 viewDir = normalize(viewPos - v_vertex);
   vec3 reflectDir = reflect(-lightDir, norm);
   float spec = pow(max(dot(viewDir, reflectDir), 0.0), material.shininess);
   vec3 specular =  spec * material.specular * light.specular;

   vec3 result = ambient + diffuse + specular;

   gl_FragColor = vec4(result, 1.0);
}