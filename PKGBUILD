pkgname="xor-crypto-lib"
pkgver=1.10
pkgrel=3
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
    source=(${source[@]} "$_srcprefix/$_libfile")
}

for _libfile in ${_libfiles[@]}
{
    md5sums=(${md5sums[@]} "SKIP")
}

package()
{
    for _libfile in ${_libfiles[@]}
    {
        install -Dm644 "./$_libfile" "$pkgdir/usr/include/$_libfile"
    }
}
