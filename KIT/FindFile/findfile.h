#include <windows.h>  

//BeaconPrintToStreamW + BeaconOutputStreamW
#define MAX_STRING 8192
INT g_iGarbage = 1;
LPSTREAM g_lpStream = (LPSTREAM)1;
LPWSTR g_lpwPrintBuffer = (LPWSTR)1;
DECLSPEC_IMPORT HRESULT WINAPI OLE32$CreateStreamOnHGlobal(HGLOBAL hGlobal, BOOL fDeleteOnRelease, LPSTREAM *ppstm);
WINBASEAPI void *__cdecl MSVCRT$calloc(size_t number, size_t size);
WINBASEAPI int __cdecl MSVCRT$_vsnwprintf_s(wchar_t *buffer, size_t sizeOfBuffer, size_t count, const wchar_t *format, va_list argptr);
WINBASEAPI size_t __cdecl MSVCRT$wcslen(const wchar_t *_Str);
WINBASEAPI void __cdecl MSVCRT$memset(void *dest, int c, size_t count);
WINBASEAPI HANDLE WINAPI KERNEL32$GetProcessHeap();
WINBASEAPI LPVOID WINAPI KERNEL32$HeapAlloc(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes);
WINBASEAPI void __cdecl MSVCRT$free(void *memblock);
WINBASEAPI BOOL WINAPI KERNEL32$HeapFree(HANDLE, DWORD, PVOID);
DECLSPEC_IMPORT int WINAPI KERNEL32$MultiByteToWideChar(UINT CodePage, DWORD dwFlags, _In_NLS_string_(cbMultiByte)LPCCH lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar);

//SearchFileForKeyword + keywordMatches
WINBASEAPI int WINAPI MSVCRT$strcmp(const char* str1, const char* str2);
WINBASEAPI FILE* WINAPI MSVCRT$fopen(const char* filename, const char* mode);
WINBASEAPI int __cdecl MSVCRT$fseek(FILE *_File, long _Offset, int _Origin);
WINBASEAPI long __cdecl MSVCRT$ftell(FILE *_File);
WINBASEAPI size_t __cdecl MSVCRT$fread(void * _DstBuf, size_t _ElementSize, size_t _Count, FILE * _File);
WINBASEAPI int __cdecl MSVCRT$fclose(FILE *_File);
WINBASEAPI char* WINAPI MSVCRT$strstr(const char* haystack, const char* needle);
WINBASEAPI void *__cdecl MSVCRT$malloc(size_t _Size);
//WINBASEAPI void __cdecl MSVCRT$free(void *_Memory);
WINBASEAPI char* WINAPI MSVCRT$_strdup(const char* str);
WINBASEAPI int WINAPI MSVCRT$tolower(int c);
WINBASEAPI size_t WINAPI MSVCRT$strlen(const char* str);
WINBASEAPI int WINAPI MSVCRT$strncmp(const char* str1, const char* str2, size_t n);
WINBASEAPI char* WINAPI MSVCRT$strncpy(char* dest, const char* src, size_t n);
DECLSPEC_IMPORT char* WINAPI MSVCRT$strtok(char* str, const char* delimiters);

//SearchFilesRecursive
DECLSPEC_IMPORT HANDLE WINAPI KERNEL32$FindFirstFileA(LPCSTR lpFileName, LPWIN32_FIND_DATAA lpFindFileData);
DECLSPEC_IMPORT BOOL WINAPI KERNEL32$FindNextFileA(HANDLE hFindFile, LPWIN32_FIND_DATAA lpFindFileData);
DECLSPEC_IMPORT DWORD WINAPI KERNEL32$GetLastError(void);
DECLSPEC_IMPORT BOOL WINAPI KERNEL32$FindClose(HANDLE hFindFile);
//DECLSPEC_IMPORT int WINAPI KERNEL32$MultiByteToWideChar(UINT CodePage, DWORD dwFlags, LPCSTR lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar);
WINBASEAPI char* WINAPI MSVCRT$strcpy(char* dest, const char* src);
WINBASEAPI char* WINAPI MSVCRT$strcat(char* dest, const char* src);
WINBASEAPI int WINAPI MSVCRT$sprintf(char* buffer, const char* format, ...);
