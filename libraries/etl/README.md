# Development Environment Setup
Time of writing: 2024-11-02

## Clangd
Auto-formatting and code analysis in vs-code.

Install binaries from https://github.com/clangd/clangd/releases/tag/18.1.3.
Use the file clangd-linux-18.1.3.zip.

Either extract to `.local/` or create `.local/apps/clangd/` with extracted files
and add the `bin/` directory to `PATH`.

## CMake

Install binaries from https://cmake.org/download/.
Use the file cmake-3.31.0-rc3-linux-x86_64.tar.gz.

Either extract to `.local/` or create `.local/apps/cmake/` with extracted files
and add the `bin/` directory to `PATH`.

## Conan

Install conan via python pip module:

```
python3 -m pip install conan==1.65.0
```

# References

- Track memory allocations
    - https://www.youtube.com/watch?v=sLlGEUO_EGE