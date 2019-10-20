emcc \
-std=c++17 \
-I deps/fmod-2.00.05/api/core/inc \
-I src/audio \
-I src/graphics \
-I src/engine \
src/example/Example.cpp \
src/audio/*.cpp \
src/graphics/*.cpp \
src/engine/*.cpp \
deps/fmod-2.00.05/api/core/lib/bitcode/fmod.bc \
--bind \
-s WASM=1 \
-s EXTRA_EXPORTED_RUNTIME_METHODS=cwrap \
-o react-proj/public/engine.js \
-s ENVIRONMENT=web \
--embed-file media \
-s ASSERTIONS=1 \
-O3