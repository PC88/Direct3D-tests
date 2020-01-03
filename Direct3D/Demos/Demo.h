#pragma once


class Demo
{
public:
	Demo();
	virtual ~Demo();

	//virtual void ProcessInput(GLFWwindow* window, int key, int scancode, int action, int mods) = 0;
	virtual void ImGuiRender() {};
	virtual void Update(double interval) {};
	virtual void Render() {};
};

