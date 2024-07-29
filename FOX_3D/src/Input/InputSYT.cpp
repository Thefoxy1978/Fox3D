#include "InputSYT.h"
#include <GLFW/glfw3.h>

int Inp()
{
	return 0;
}

void P_Inp(GLFWwindow* window)
{
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}
