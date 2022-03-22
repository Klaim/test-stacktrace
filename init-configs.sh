
# must be launched from ../../myproject
bdep init -C ../build-msvc-release    @msvc   cc --options-file ./configs/msvc-release.options --wipe
bdep init -C ../build-msvc-debug      @msvcd  cc --options-file ./configs/msvc-debug.options --wipe
bdep init -C ../build-clang-release   @clang  cc --options-file ./configs/clang-release.options --wipe
bdep init -C ../build-clang-debug     @clangd cc --options-file ./configs/clang-debug.options --wipe
# WebAssembly
# bdep init -C ../build-wasm-release    @wasm   cc --options-file ./configs/wasm-release.options --wipe
# bdep init -C ../build-wasm-debug      @wasmd  cc --options-file ./configs/wasm-debug.options --wipe
