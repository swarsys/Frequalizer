/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#pragma once

namespace FFAudioData
{
    extern const char*   LogoFF_png;
    const int            LogoFF_pngSize = 57997;

    extern const char*   FBlogo_png;
    const int            FBlogo_pngSize = 4248;

    extern const char*   GitHublogo_png;
    const int            GitHublogo_pngSize = 4268;

    extern const char*   Inlogo_png;
    const int            Inlogo_pngSize = 2295;

    extern const char*   FFtext_png;
    const int            FFtext_pngSize = 36300;

    // Points to the start of a list of resource names.
    extern const char* namedResourceList[];

    // Number of elements in the namedResourceList array.
    const int namedResourceListSize = 5;

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding data and its size (or a null pointer if the name isn't found).
    const char* getNamedResource (const char* resourceNameUTF8, int& dataSizeInBytes) throw();
}
