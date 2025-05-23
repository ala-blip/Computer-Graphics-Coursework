#include <common/maths.hpp>

glm::mat4 Maths::translate(const glm::vec3& v)//define transaltion method
{
    glm::mat4 translate(1.0f);
    translate[3][0] = v.x, translate[3][1] = v.y, translate[3][2] = v.z;
    return translate;
}
