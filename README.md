# NumGen
An integer generator made in C++

### Information
Compiled (on Ubuntu 20.04.2 LTS 64-Bit) with -Os optimization to reduce filesize and maybe increase speed :D<br>

Commands used:<br>
Windows x64: x86_64-w64-mingw32-g++ NumGen.cpp -static-libstdc++ -static-libgcc -o NumGen_Windows64 -Os<br>
Windows x86: i686-w64-mingw32-g++ NumGen.cpp -static-libstdc++ -static-libgcc -o NumGen_Windows32 -Os<br>
Linux x64: g++ NumGen.cpp -o NumGen_Linux64 -Os<br>
Linux x86: g++ NumGen.cpp -o NumGen_Linux32 -Os -m32<br><br>

Linked (Windows) libraries:<br>
[-static-libstdc++ -static-libgcc]

## Features (default, cannot be changed right now)
- Save generated numbers on a file

## Also...
I make Linux and Windows builds, but I usually only test on Linux and for Windows just the surface.<br>
If there's an issue on Windows binary builds, please tell me. :D<br><br>
COMPILATION FOR LINUX 32-BIT DROPPED SINCE 2.0

### OUTDATED SNAP VERSION
[![Get it from the Snap Store](https://snapcraft.io/static/images/badges/en/snap-store-black.svg)](https://snapcraft.io/numgen)