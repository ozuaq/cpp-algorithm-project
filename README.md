git clone https://github.com/microsoft/vcpkg.git
./vcpkg/bootstrap-vcpkg.sh

プロジェクト作成時に実施(このプロジェクトをgit cloneした場合、不要)
./vcpkg/vcpkg new --name algorithm-project --version 0.1.0

./vcpkg/vcpkg add port gtest

ここまで

macos
参考：https://learn.microsoft.com/en-us/vcpkg/concepts/supported-hosts
引用：
macOS: Xcode Command Line Tools, tar, git, zip, unzip, and curl. Most ports also need pkg-config. We recommend installing these dependencies via Homebrew, such as via a terminal command brew install zip unzip curl pkgconfig.

xcode-select --install
clang++ --version
brew install pkg-config


brew install --formula cmake
brew install ninja
