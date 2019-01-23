<p align="center">
	<br>
	<img src="https://cdn.abranhe.com/projects/open/logo.svg">
	<br>
	<b>opener</b>: Open URLs in C (Cross-Platform)
	<br>
</p>

<p align="center">
	<!-- <a href="https://travis-ci.org/abranhe/opener">
		<img src="https://img.shields.io/travis/abranhe/opener.svg?logo=travis"/>
	</a> -->
	<a href="https://github.com/abranhe"><img src="https://abranhe.com/badge.svg"></a>
	<a href="https://cash.me/$abranhe"><img src="https://cdn.abranhe.com/badges/cash-me.svg"></a>
	<a href="https://patreon.com/abranhe"><img src="https://cdn.abranhe.com/badges/patreon.svg" /></a>
	<a href="https://github.com/abranhe/opener/blob/master/license"><img src="https://img.shields.io/github/license/abranhe/opener.svg" /></a>
  <br>
  <br>
</p>


## Installation

*Using [Clib](https://github.com/clibs/clib)*

```sh
$ clib install abranhe/opener
```

## Usage

```c
#include "opener.h"

int main()
{
	opener("https://abranhe.com");
	return 0;
}
```

### Run [example](example.c)

```
$ make run-example
```

## API

#### `int opener(const char *link);`

*Open a URL on the default browser.*

###### Params:

- `link`: The url you whish to be openered

## Related

- [opener-cli][opener-cli]: CLI tool written in C for this package.
- [os.c][os.c]: C library to know your operating system.

## Team

|[![Carlos Abraham Logo][abranhe-img]][abranhe]|
| :-: |
| [Carlos Abraham][abranhe] |

## License

[MIT][license] License © [Carlos Abraham][abranhe]

<!-------------------- Links ------------------------>
[abranhe]: https://github.com/abranhe
[abranhe-img]: https://avatars3.githubusercontent.com/u/21347264?s=50
[license]: https://github.com/abranhe/opener/blob/master/license
[os.c]: https://github.com/abranhe/os.c
[opener-cli]: https://github.com/abranhe/opener-cli
