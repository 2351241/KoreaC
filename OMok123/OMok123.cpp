#include "framework.h"
#include "OMok123.h"

#define X_COUNT                 19      // X선 개수
#define Y_COUNT                 19      // Y선 개수
#define X_VOID                  50      // 가로 여백
#define Y_VOID                  50      // 세로 여백
#define RADIUS                  13      // 바둑돌 반지름
#define INTERVAL                26      // 바둑돌 지름
#define XPOS(x)(X_VOID + (x)*INTERVAL)         // 바둑돌 공간x
#define YPOS(y)(Y_VOID + (y)*INTERVAL)         // 바둑돌 공간y

//바둑돌 위치를 기억할 전역변수
int g_dol[Y_COUNT][X_COUNT];            // 0: 돌없음, 1: 검은돌, 2:흰색돌
int g_step;                     //0이면 검은돌, 1이면 흰색돌



INT_PTR CALLBACK DlgProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    static HBRUSH  hBrush;          // 색깔넣기 static : 함수가 끝나도 없어지지 않게끔
    static HDC hdc;
    PAINTSTRUCT ps;
    int a_x = LOWORD(lParam);
    int a_y = HIWORD(lParam);
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_CTLCOLORDLG:
        return (INT_PTR)hBrush;
    case WM_PAINT: // 화면그리기 
    {
        hdc = BeginPaint(hDlg, &ps);

        // 그림을 그림
        for (int x = 0; x < X_COUNT; x++) {
            MoveToEx(hdc, XPOS(x), YPOS(0), NULL);
            LineTo(hdc, XPOS(x), YPOS(Y_COUNT - 1));
        }

        for (int y = 0; y < Y_COUNT; y++) {
            MoveToEx(hdc, XPOS(0), YPOS(y), NULL);
            LineTo(hdc, XPOS(X_COUNT-1), YPOS(y));
        }

        //바둑돌 그리기
        for (int y = 0; y < Y_COUNT; y++) {
            for (int x = 0; x < X_COUNT; x++) {
                if (g_dol[y][x] > 0) {
                    if (g_dol[y][x] == 1) {
                        SelectObject(hdc, GetStockObject(BLACK_BRUSH));         //내 페인트색 검은색으로
                    }
                    else {
                        SelectObject(hdc, GetStockObject(WHITE_BRUSH));         //내 페인트색 하얀색으로
                    }
                    Ellipse(hdc, XPOS(x) - RADIUS, YPOS(y) - RADIUS, XPOS(x) + RADIUS, YPOS(y) + RADIUS);
                }
            }
        }

        EndPaint(hDlg, &ps);
    }
    break;
    case WM_LBUTTONDOWN:
        // 마우스가 클릭된 공간을 바둑돌 범위로 체크
        if (a_x > (XPOS(0) - RADIUS) &&
            a_y > (YPOS(0) - RADIUS) &&
            a_x < (XPOS(X_COUNT-1)+RADIUS) &&
            a_y < (YPOS(Y_COUNT-1)+RADIUS)) 
        {
            int x = (a_x - X_VOID + RADIUS) / INTERVAL;
            int y = (a_y - Y_VOID + RADIUS) / INTERVAL;
            if (g_dol[y][x] == 0) {
                g_dol[y][x] = g_step + 1;
                g_step = !g_step;
                InvalidateRect(hDlg, NULL, TRUE);
            }
        }
        break;
    case WM_INITDIALOG:             //처음 실행할 때 불리는 메시지
        SetWindowPos(hDlg, HWND_TOP, 50, 50, 600, 600, NULL); // x1, y1, x2, y2
        hBrush = CreateSolidBrush(RGB(244, 176, 77));            // 0: 검은색, 255: 하얀색
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}

int APIENTRY _tWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    DialogBox(hInstance, MAKEINTRESOURCE(IDD_DIALOG1), nullptr, DlgProc);

    return 0;
    }