<h1 align="center">
	42cursus' libft
</h1>

<p align="center">
	<b><i>Development repo for 42cursus' libft project</i></b><br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/fizcamposancos/libft" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/fizcamposancos/libft" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/fizcamposancos/libft" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/fizcamposancos/libft" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/fizcamposancos/libft" />
</p>

<h3 align="center">
	<a href="#%EF%B8%8F-about">About</a>
	<span> · </span>
	<a href="#-index">Index</a>
	<span> · </span>
	<a href="#%EF%B8%8F-usage">Usage</a>
	<span> · </span>
	<a href="#-testing">Testing</a>
</h3>

---

## 🗣️ About

> _The aim of this project is to code a C library regrouping usual functions that you'll be allowed to use in all your other projects._

For detailed information, refer to the [**subject of this project**](https://github.com/fizcamposancos/42_subjects).

	🚀 TLDR: this project consists of coding basic C functions (see below), which are then compiled
	into a library for use in other projects of the cursus.

### Functions from `<ctype.h>` library

* [`ft_isascii`](libft/ft_isascii.c)			- test for ASCII character.
* [`ft_isalnum`](libft/ft_isalnum.c)			- alphanumeric character test.
* [`ft_isalpha`](libft/ft_isalpha.c)			- alphabetic character test.
* [`ft_isdigit`](libft/ft_isdigit.c)			- decimal-digit character test.
* [`ft_isprint`](libft/ft_isprint.c)			- printing character test (space character inclusive).
* [`ft_tolower`](libft/ft_tolower.c)			- upper case to lower case letter conversion.
* [`ft_toupper`](libft/ft_toupper.c)			- lower case to upper case letter conversion.

### Functions from `<stdlib.h>` library

* [`ft_atoi`](libft/ft_atoi.c)		- convert ASCII string to integer.
* [`ft_calloc`](libft/ft_calloc.c)	- memory allocation.

### Functions from `<strings.h>` library

* [`ft_bzero`](libft/ft_bzero.c)		- write zeroes to a byte string.
* [`ft_memset`](libft/ft_memset.c)		- write a byte to a byte string.
* [`ft_memchr`](libft/ft_memchr.c)		- locate byte in byte string.
* [`ft_memcmp`](libft/ft_memcmp.c)		- compare byte string.
* [`ft_memmove`](libft/ft_memmove.c)	- copy byte string.
* [`ft_memcpy`](libft/ft_memcpy.c)		- copy memory area.
* [`ft_memccpy`](libft/ft_memccpy.c)	- copy string until character found.

### Functions from `<string.h>` library

* [`ft_strlen`](libft/ft_strlen.c)				- find length of string.
* [`ft_strchr`](libft/ft_strchr.c)				- locate character in string (first occurrence).
* [`ft_strrchr`](libft/ft_strrchr.c)			- locate character in string (last occurence).
* [`ft_strstr`](libft/ft_strstr.c) *		- locate a substring in a string.
* [`ft_strnstr`](libft/ft_strnstr.c)			- locate a substring in a string (size-bounded).
* [`ft_strcmp`](libft/ft_strcmp.c) *		- compare strings.
* [`ft_strncmp`](libft/ft_strncmp.c) *			- compare strings (size-bounded).
* [`ft_strcpy`](libft/ft_strcpy.c) *		- copy strings.
* [`ft_strncpy`](libft/ft_strncpy.c) *	- copy strings (size-bounded).
* [`ft_strdup`](libft/ft_strdup.c)				- save a copy of a string (with malloc).
* [`ft_strcat`](libft/ft_strcat.c) *		- concatenate strings (s2 into s1).
* [`ft_strncat`](libft/ft_strncat.c) *	- concatenate strings (s2 into s1, size-bounded).
* [`ft_strlcpy`](libft/ft_strlcpy.c)			- size-bounded string copying.
* [`ft_strlcat`](libft/ft_strlcat.c)			- size-bounded string concatenation.

### Non-standard functions

* [`ft_putchar`](libft/ft_putchar.c) *	- output a character to stdout.
* [`ft_putchar_fd`](libft/ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr`](libft/ft_putstr.c) *		- output string to stdout.
* [`ft_putstr_fd`](libft/ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl`](libft/ft_putendl.c) *	- output string to stdout with newline.
* [`ft_putendl_fd`](libft/ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr`](libft/ft_putnbr.c) *		- output integer to stdout.
* [`ft_putnbr_fd`](libft/ft_putnbr_fd.c)		- output integer to given file.
* [`ft_itoa`](libft/ft_itoa.c)					- convert integer to ASCII string.
* [`ft_substr`](libft/ft_substr.c)				- extract substring from string.
* [`ft_strtrim`](libft/ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](libft/ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_split`](libft/ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_strmapi`](libft/ft_strmapi.c)			- create new string from modifying string with specified function.

### Linked list functions

* [`ft_lstnew`](libft/ft_lstnew.c)				- create new list.
* [`ft_lstsize`](libft/ft_lstsize.c)			- count elements of a list.
* [`ft_lstlast`](libft/ft_lstlast.c)			- find last element of list.
* [`ft_lstadd_back`](libft/ft_lstadd_back.c)	- add new element at end of list.
* [`ft_lstadd_front`](libft/ft_lstadd_front.c)	- add new element at beginning of list.
* [`ft_lstdelone`](libft/ft_lstdelone.c)		- delete element from list.
* [`ft_lstclear`](libft/ft_lstclear.c)			- delete sequence of elements of list from a starting point.
* [`ft_lstiter`](libft/ft_lstiter.c)			- apply function to content of all list's elements.
* [`ft_lstmap`](libft/ft_lstmap.c)				- apply function to content of all list's elements into new list.

_Note: functions marked with * are bonus functions (not mandatory by the project's subject)._

## 📑 Index

`@root`

* [**📁 libft:**](libft/) updated source code, refactored for use in other projects; includes [`get_next_line`](https://github.com/appinha/42cursus-01-get_next_line) and [`printf`](https://github.com/appinha/42cursus-01-ft_printf) functions.

## 🛠️ Usage

### Requirements

The library is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

To compile the library, run:

```shell
$ cd path_to_libft && make
```

**2. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "libft.h"
```

and, when compiling your code, add the required flags:

```shell
-lft -L path/to/libft.a -I path/to/libft.h
```

## 📋 Testing

### Third-party testers

* [jtoty/Libftest](https://github.com/jtoty/Libftest)
* [alelievr/libft-unit-test](https://github.com/alelievr/libft-unit-test)
* [Night-squad/libft-war-machine-v2019](https://github.com/Night-squad/libft-war-machine-v2019)
* [t0mm4rx/libftdestructor](https://github.com/t0mm4rx/libftdestructor)
