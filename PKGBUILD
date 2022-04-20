pkgname=qt5-polkit-agent
pkgver=1
pkgrel=1
pkgdesc="lxqt-policykit without the libs of lxqt"
arch=("x86_64")
license=("GPL2")

depends=("qt5-base" "polkit-qt5")
makedepends=("git" "cmake" "qt5-tools")

provides=("$pkgname")
conflicts=("$pkgname")

source=("git+https://github.com/git-fal7/$pkgname.git")
sha256sums=('SKIP')


pkgver() {
  cd "$srcdir/$pkgname"
  git describe --always | sed "s/-/./g"
}

build() {
  mkdir -p build
  cd build
  cmake "$srcdir/$pkgname" \
    -DCMAKE_INSTALL_PREFIX=/usr
  make
}

package() {
  cd build
  make DESTDIR="$pkgdir" install
}
