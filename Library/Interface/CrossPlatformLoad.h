#ifndef _CROSSPLATFORMLOAD_H_
#define _CROSSPLATFORMLOAD_H_

#if defined(_WIN32)
    #include <windows.h>
    typedef HMODULE  MODULE_HANDLE;
    MODULE_HANDLE hModule = LoadLibrary("CrossPlatformLib.dll");
#else
    #include <dlfcn.h>
    typedef void *  MODULE_HANDLE;
    MODULE_HANDLE hModule = dlopen("./libCrossPlatformLib.so", RTLD_NOW | RTLD_GLOBAL);
#endif

void *gdl_GetProc(const char *pfname)
{
   if(hModule)
   {
#if defined(_WIN32)
        return (void *)GetProcAddress(hModule, pfname);
#else
        return dlsym(hModule,pfname);
#endif
    }
    return 0;
};

#endif
