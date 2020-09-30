# A simple openGL template

Following the course on Udemy: **Computer Graphics with Modern OpenGL and C++**

https://www.udemy.com/course/graphics-with-modern-opengl/

- Configuration: (in VS 2019)

	- in Project > Properties > Configuration Properties > Linker > Additional Library Directories
  
		- $(SolutionDir)/../../External Libs C++/GLEW/lib/Release/Win32
			(http://glew.sourceforge.net/)
		- $(SolutionDir)/../../External Libs C++/GLFW/lib-vc2019
			(https://www.glfw.org/)

- Need **glew32.dll** in project directory