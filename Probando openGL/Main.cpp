#include "Precompiled.h"

int main(void){

	GLFWwindow* window;

	if ( !glfwInit() )
		return -1;


	glfwWindowHint( GLFW_RESIZABLE, GL_FALSE );
	glfwWindowHint( GLFW_DOUBLEBUFFER, GL_TRUE );
	
	window = glfwCreateWindow( 800, 600, "OpenGL Game", NULL, NULL );
	
	if ( !window )
	{
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent( window );

	while ( !glfwWindowShouldClose( window ) )
	{

		glClear( GL_COLOR_BUFFER_BIT );


		glfwSwapBuffers( window );
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}