pkgname="xor-crypto-lib"
pkgver=1.10
pkgrel=1
pkgdesc="xor encryption c++ library"
author="imperzer0"
url="https://github.com/$author/$pkgname"
arch=("x86_64")
license=('GPL3')
depends=("log-console>=1.18-1")
makedepends=()

_srcprefix="local:/"
_libfiles=("xor-crypt" "xor-crypt-defs")

for _libfile in ${_libfiles[@]}
{
    source=(${source[@]} "$_srcprefix/$_libfile.hpp")
}

for _libfile in ${_libfiles[@]}
{
    md5sums=(${md5sums[@]} "SKIP")
}

package()
{
    for _libfile in ${_libfiles[@]}
    {
        install -Dm644 "./$_libfile.hpp" "$pkgdir/usr/include/$_libfile"
    }
}
