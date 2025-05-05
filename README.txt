git clone https://github.com/microsoft/vcpkg.git
./vcpkg/bootstrap-vcpkg.sh

configファイルがある場合、不要
./vcpkg/vcpkg new --application

./vcpkg/vcpkg add port gtest

xcode-select --install
clang++ --version

brew install --formula cmake
brew install ninja
