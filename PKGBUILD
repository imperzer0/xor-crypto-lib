pkgname="xor-crypto-lib"
epoch=1
pkgver=1
pkgrel=1
pkgdesc="xor encryption c++ library"
arch=("x86_64")
url="https://github.com/imperzer0/xor-crypto-lib"
license=('GPL')
depends=("log-console>=1.13-1")
makedepends=("cmake>=3.0")
lib_file="xor-crypt"
source=("local://$lib_file")
md5sums=("SKIP")
# install=xor-crypto-lib.install

package()
{
	install -Dm755 "./$lib_file" "$pkgdir/usr/include/$lib_file"
}
