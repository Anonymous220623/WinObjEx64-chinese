/*******************************************************************************
*
*  (C) COPYRIGHT AUTHORS, 2015 - 2025
*
*  TITLE:       UI.H
*
*  VERSION:     2.10
*
*  DATE:        03 Oct 2025
*
*  Common header file for the user interface.
*
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
* ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
*******************************************************************************/
#pragma once

#define SplitterSize                3
#define SplitterMargin              80

#define DefaultSystemDpi            96

#define SCALE_DPI_VALUE(Value, CurrentDPI) MulDiv(Value, CurrentDPI, DefaultSystemDpi)

#define TreeListDumpObjWndPosX      12
#define TreeListDumpObjWndPosY      20
#define TreeListDumpObjWndScaleSub  3


//
// Main ListView column count
//
#define MAIN_OBJLIST_COLUMN_COUNT 3

typedef	struct _OE_LIST_ITEM {
    struct _OE_LIST_ITEM *Prev;
    HTREEITEM TreeItem;
} OE_LIST_ITEM, *POE_LIST_ITEM;

typedef HWND(WINAPI *pfnHtmlHelpW)(
    _In_opt_ HWND hwndCaller,
    _In_ LPCWSTR pszFile,
    _In_ UINT uCommand,
    _In_ DWORD_PTR dwData
    );

#define PROGRAM_MAJOR_VERSION       2
#define PROGRAM_MINOR_VERSION       1
#define PROGRAM_REVISION_NUMBER     0
#define PROGRAM_BUILD_NUMBER        2510

#ifdef _USE_OWN_DRIVER
#define PROGRAM_NAME            L"Windows Object Explorer 64-bit (Non-public version)"
#else 
#define PROGRAM_NAME            L"Windows 对象管理器 64 位"
#endif
#define PROFRAM_NAME_AND_TITLE  L"Windows 7/8/8.1/10/11 上的对象管理器"
#define WINOBJEX64_WNDCLASS     L"WinObjEx64Class"
#define WINOBJEX64_PSLISTCLASS  L"WinObjEx64PsListClass"

#define T_COPY_OBJECT_NAME      L"复制名称(&C)"
#define T_COPY_OBJECT_NAME_BIN  L"复制名称 (二进制)"

#define T_PROPERTIES            L"属性...\tEnter"
#define T_GOTOLINKTARGET        L"跳转至链接目标\tCtrl+->"
#define T_VIEWSD                L"查看安全描述符..."
#define T_RUNASADMIN            L"以管理员身份运行(&U)"
#define T_RUNASSYSTEM           L"以 SYSTEM 身份运行(&U)"
#define T_EXPORTTOFILE          L"导出列表"
#define T_JUMPTOFILE            L"跳转至文件"
#define T_VIEW_REFRESH          L"刷新\tF5"
#define T_VIEW_PLUGINS          L"查看扩展"
#define T_EMPTY                 L" "
#define T_MSG_SETTINGS_CHANGE   L"wobjSettingsChange"

#define T_CSV_FILE_FILTER       TEXT("CSV 文件\0*.csv\0\0")
#define T_LIST_EXPORT_SUCCESS   TEXT("列表导出 - 完成")
#define T_RICHEDIT_LIB          TEXT("RICHED32.DLL")

#define MAX_TEXT_CONVERSION_ULONG64 32

//
// Main menu initialization id's
//

// File
#define IDMM_FILE   0

// View
#define IDMM_VIEW   1

// Object
#define IDMM_OBJECT 2

// Find
#define IDMM_FIND   3

// Extras
#define IDMM_EXTRAS 4

// Help
#define IDMM_HELP   5

typedef struct _TL_SUBITEMS_FIXED {
    ULONG       Count;
    ULONG       ColorFlags;
    COLORREF    BgColor;
    COLORREF    FontColor;
    PVOID       UserParam;
    LPTSTR      CustomTooltip;
    LPTSTR      Text[2];
} TL_SUBITEMS_FIXED, *PTL_SUBITEMS_FIXED;

typedef struct _VALUE_DESC {
    LPWSTR lpDescription;
    DWORD dwValue;
} VALUE_DESC, *PVALUE_DESC;

typedef struct _LVCOLUMNS_DATA {
    LPWSTR Name;
    INT Width;
    INT Format;
    INT ImageIndex;
} LVCOLUMNS_DATA, *PLVCOLUMNS_DATA;

//
// Constants
//
// 
// Display simple "N/A" if no info available
#define T_CannotQuery       TEXT("N/A")
#define T_NotAssigned       T_CannotQuery

// Value is not defined
#define T_None              TEXT("无")
#define T_NoneValue         TEXT("(无)")

// Value is invalid
#define T_Invalid           TEXT("未知")
#define T_InvalidValue      TEXT("(无效)")

// Display for unknown type value
#define T_UnknownType       TEXT("未知类型")

// Display for unknown flag value
#define T_UnknownFlag       TEXT("未知标志")

// Display for unknown process
#define T_UnknownProcess    TEXT("未知进程")

// Display for unknown value
#define T_Unknown           TEXT("未知")

// Empty string
#define T_EmptyString       TEXT("")

// prop used by sheets
#define T_PROPCONTEXT       TEXT("propContext")

// prop used by prop dialog
#define T_DLGCONTEXT        TEXT("dlgContext")

// prop used by ipc dialogs
#define T_IPCDLGCONTEXT     TEXT("IpcDlgContext")

#define INIT_NO_ERROR               0
#define INIT_ERROR_NOCRT            1
#define INIT_ERROR_NOHEAP           2
#define INIT_ERROR_NOTEMP           3
#define INIT_ERROR_NOWINDIR         4
#define INIT_ERROR_NOSYS32DIR       5
#define INIT_ERROR_NOPROGDIR        6
#define INIT_ERROR_NOCLASS          7
#define INIT_ERROR_NOMAINWND        8
#define INIT_ERROR_NOICCX           9
#define INIT_ERROR_NOLISTWND        10
#define INIT_ERROR_NOTREEWND        11
#define INIT_ERROR_NOTLBARWND       12
#define INIT_ERROR_NOSPLITTERWND    13
#define INIT_ERROR_UNSPECIFIED      14

#define T_WOBJINIT_NOCRT TEXT("无法初始化 CRT，中止")

#define ErrShadowWin32kNotFound             1
#define ErrShadowMemAllocFail               2
#define ErrShadowWin32uLoadFail             3
#define ErrShadowWin32kLoadFail             4
#define ErrShadowApiSetNotFound             5
#define ErrShadowW32pServiceLimitNotFound   6
#define ErrShadowWin32uMismatch             7
#define ErrShadowW32pServiceTableNotFound   8
#define ErrShadowApiSetSchemaVerUnknown     9
#define ErrShadowWin32kGlobalsNotFound      10
#define ErrShadowWin32kOffsetNotFound       11
#define ErrShadowWin32kGetStateNotFound     12

//
// Common Dialog handlers.
//
VOID FindDlgCreate(
    VOID);

VOID ShowSysInfoDialog(
    _In_ HWND hwndParent);

VOID SDViewDialogCreate(
    _In_ WOBJ_OBJECT_TYPE ObjectType);

INT_PTR CALLBACK AboutDialogProc(
    _In_ HWND hwndDlg,
    _In_ UINT uMsg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam);

VOID ShowStatsDialog(
    VOID);
