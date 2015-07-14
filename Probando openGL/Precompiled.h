#ifndef _PRECOMPILED_H_
#define _PRECOMPILED_H_

//If the compiler defines one of these items we can assume that it is windows running
#if defined(__WIN32__) || defined(_WIN32) || defined(WIN32) || defined(__WINDOWS__) || defined(__TOS_WIN__)
//so we will standardize on WIN32 for windows specific code
#ifndef WIN32
#define WIN32
#endif
#endif

#ifdef WIN32
#include <Windows.h>
#endif

#undef min
#undef max

//incluir clases


//incluir librerias
#include <string>
#include <cstring> // strlen, memcpy, etc.
#include <cstdlib> // exit
#include <cfloat>  // FLT_MAX
#include <vector>
#include <math.h>
#include <gl\GL.h>
#include <gl\GLU.h>
#include <gl\glfw3.h>
#include <gl\glut.h>

#pragma comment(lib,"glfw3.lib")
#pragma comment(lib,"opengl32.lib")
#pragma comment(lib,"glu32.lib")


#endif // PRECOMPILED_H