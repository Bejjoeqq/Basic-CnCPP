#include <windows.h>

#include "string.h"

#include <gl/wglew.h>

// ----------------------------------------------------------------------------------------------------------------------------

#pragma comment(lib, "opengl32.lib")
#pragma comment(lib, "glu32.lib")
#pragma comment(lib, "glew32.lib")

// ----------------------------------------------------------------------------------------------------------------------------

extern CString ErrorLog;

// ----------------------------------------------------------------------------------------------------------------------------

class COpenGLRenderer
{
protected:
    int Width, Height;

public:
    COpenGLRenderer();
    ~COpenGLRenderer();

    bool Init();
    void Render(float FrameTime);
    void Resize(int Width, int Height);
    void Destroy();
};

// ----------------------------------------------------------------------------------------------------------------------------

class COpenGLView
{
protected:
    char *Title;
    int Width, Height;
    HWND hWnd;
    HGLRC hGLRC;

public:
    COpenGLView();
    ~COpenGLView();

    bool Init(HINSTANCE hInstance, char *Title, int Width, int Height);
    void Show(bool Maximized = false);
    void MessageLoop();
    void Destroy();

    void OnPaint();
    void OnSize(int Width, int Height);
};
