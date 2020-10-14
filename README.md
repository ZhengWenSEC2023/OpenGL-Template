# A simple openGL template

Following the course on Udemy: **Computer Graphics with Modern OpenGL and C++**

https://www.udemy.com/course/graphics-with-modern-opengl/

- Configuration: (in VS 2019)

	- in Project > Properties > Configuration Properties > Linker > Additional Library Directories
  
		- $(SolutionDir)/../../External Libs C++/GLEW/lib/Release/Win32
			(http://glew.sourceforge.net/)
		- $(SolutionDir)/../../External Libs C++/GLFW/lib-vc2019
			(https://www.glfw.org/)
	- in Project > Properties > Configuration Properties > Linker > Additional Library Directories
		
		- $(SolutionDir)/../../External Libs C++/ASSIMP/include
			(https://www.assimp.org/)

- Need **glew32.dll** in project directory

- Only tested on Assimp 3.3.1. Use the following command to build the .sln file
	- cmake -A Win32
	- Note that the compile may not pass one time. If **gtest.lib** not found, change the configuration of project unit to the exact path of gtest.lib, then compile again. The **gtest.lib** will not occur once the file has been built once. 
