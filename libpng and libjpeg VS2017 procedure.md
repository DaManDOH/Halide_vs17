1. Download jpegsr9c.zip from www.ijg.org (http://www.ijg.org/files/jpegsr9c.zip)
1. Extract
1. Copy makefile.vs to MAKEFILE
1. From Developer Command Prompt for VS 2017, execute "nmake setup-v15" in extracted jpegsr9c.zip directory
1. Open resulting jpeg.sln of libjpeg in Visual Studio
1. Add x64 as a solution platform and set it active platform
1. Rebuild
1. Download & extract libpng from https://github.com/winlibs/libpng
1. Download & extract zlib from https://github.com/winlibs/zlib to the projects\vstudio2017\zlib directory of libpng, keeping the zlib.vcxproj project file
1. Open projects\vstudio2017\vstudio.sln of libpng in Visual Studio
1. Change the Linker -> Additional Dependencies properties of Release config of pngtest and pngvalid projects to target libpng.lib (not necessary if the libpng devs have updated their project files)
1. Rebuild libpng with whichever configuration is needed; Release (not "Release Library") is recommended
1. To Halide tutorial projects needing libpng, add libpng.lib as an additional dependency, the directory with libpng.lib as a library directory, and the directory with png.h as an include directory
1. To Halide tutorial projects needing libjpeg, add jpeg.lib as an additional dependency, the directory with jpeg.lib as a library directory, and the directory with jpeglib.h as an include directory
1. Before running, ensure all necessary .dll files (ex. libpng.dll/libpng_debug.dll, Halide.dll) are in the same directory as the target (this may be worth adding a Post-Build Event to the projects for)

**NB:** the tutorial projects will likely all need the following preprocessor directives to prevent Visual Studio's "unsafe function" errors:

```cpp
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif //_MSC_VER
```

Alternatively, `_CRT_SECURE_NO_WARNINGS` could be added to the Preprocessor Definition property of each project.