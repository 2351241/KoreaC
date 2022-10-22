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


INT_PTR CALLBACK DlgProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    static HBRUSH  hBrush;          // 색깔넣기 static : 함수가 끝나도 없어지지 않게끔
    static HDC hdc;
    PAINTSTRUCT ps;
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
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

        EndPaint(hDlg, &ps);
    }
    break;
    case WM_LBUTTONDOWN:
        Ellipse(hdc, 150, 150, 250, 250);
        MessageBox(hDlg, _T("내용"), _T("제목"), NULL);
        InvalidateRect(hDlg, NULL, TRUE);
        break;
    case WM_INITDIALOG:             //처음 실행할 때 불리는 메시지
        SetWindowPos(hDlg, HWND_TOP, 50, 50, 600, 600, NULL); // x1, y1, x2, y2
        hBrush = CreateSolidBrush(RGB(128, 128, 128));            // 0: 검은색, 255: 하얀색
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