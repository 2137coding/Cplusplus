#include <windows.h>
#include <string>
#include <sstream>

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    static HWND hwndEdit1, hwndEdit2, hwndButton, hwndOutput;
    static int one, two;

    switch (uMsg) {
        case WM_CREATE: {
            hwndEdit1 = CreateWindow("EDIT", "", WS_CHILD | WS_VISIBLE | WS_BORDER, 10, 10, 100, 20, hwnd, NULL, NULL, NULL);
            hwndEdit2 = CreateWindow("EDIT", "", WS_CHILD | WS_VISIBLE | WS_BORDER, 120, 10, 100, 20, hwnd, NULL, NULL, NULL);
            hwndButton = CreateWindow("BUTTON", "Generate", WS_CHILD | WS_VISIBLE, 230, 10, 80, 20, hwnd, (HMENU)1, NULL, NULL);
            hwndOutput = CreateWindow("STATIC", "", WS_CHILD | WS_VISIBLE, 10, 40, 300, 200, hwnd, NULL, NULL, NULL);
            break;
        }
        case WM_COMMAND: {
            if (LOWORD(wParam) == 1) {
                char buffer1[10], buffer2[10];
                GetWindowText(hwndEdit1, buffer1, 10);
                GetWindowText(hwndEdit2, buffer2, 10);
                one = std::stoi(buffer1);
                two = std::stoi(buffer2);

                std::ostringstream oss;
                for (int i = 0; i < one; ++i) {
                    for (int j = 0; j < two; ++j) {
                        oss << "*";
                    }
                    oss << "\n";
                }
                SetWindowText(hwndOutput, oss.str().c_str());
            }
            break;
        }
        case WM_DESTROY: {
            PostQuitMessage(0);
            break;
        }
        default: {
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
        }
    }
    return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    const char CLASS_NAME[] = "Sample Window Class";

    WNDCLASS wc = {};
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;

    RegisterClass(&wc);

    HWND hwnd = CreateWindowEx(
        0,
        CLASS_NAME,
        "Asterisk Grid Generator",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 350, 300,
        NULL,
        NULL,
        hInstance,
        NULL
    );

    if (hwnd == NULL) {
        return 0;
    }

    ShowWindow(hwnd, nCmdShow);

    MSG msg = {};
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}
