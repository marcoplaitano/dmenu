# DMENU

This is my fork of [dmenu] (version **5.2**), with several patches **already**
**applied**.

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

# Installation

Take a look at the [dependencies] listed below.

Download, compile and install the program:

```sh
git clone https://github.com/marcoplaitano/dmenu
cd dmenu
sudo make install
```

Uninstall with:

```sh
sudo make uninstall
```

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

# Usage

## dmenu

This script needs a custom list of options (strings separated by `\n`) to choose
from:

```sh
printf "YES\nNO\nMAYBE" | dmenu
```

It then prompts you to write/select one of the available options. The selection
is printed to `stdout`.

### Options

Read the `man` page to learn about the command-line options that can modify
**dmenu**'s behaviour.

## dmenu_run

This wrapper script uses **dmenu** to choose and execute any program/script
available in `$PATH`.

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

# Patches applied

These are all the patches I manually added to the source code. Some of these
I have customized to further improve control over the program's behaviour and
appearance.  
A list of all the available patches can be found on dmenu's [website].

## Alpha

Adds the `-a` option to make the window semi-transparent, while keeping the text
in it opaque.
The alpha mask (amount of transparency) is defined in the **config.h** file.  
The default value is `0xCC` (80% of transparency).

## Center

Adds the `-c` option to center the window on the screen (like rofi).

## Border Width

Adds the `-bw W` option to specify a border width of `W` pixels. The colour of
the border is the same of the selected match's background (`-sb #RRGGBB`).  
By default the border will not be drawn.

## Line Height

Adds the `-h H` option to adjust the height of the window, in pixels.

## Fuzzy Match

Adds the `-F` option to enable fuzzy-matching.

## Fuzzy highlight

Adds options to change the colours of the highlighted fuzzy matches.

+ `-nhb #RRGGBB`  
    normal fuzzy highlight background.
+ `-nhf #RRGGBB`  
    normal fuzzy highlight foreground.
+ `-shb #RRGGBB`  
    selected fuzzy highlight background.
+ `-shf #RRGGBB`  
    selected fuzzy highlight foreground.

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

# Dependencies

These are the utilities and libraries needed to compile the program:

+ gcc
+ make
+ build-essential
+ libx11-dev
+ libxinerama-dev
+ libxft-dev

<!-- LINKS -->

[dmenu]:
https://tools.suckless.org/dmenu/
"dmenu's website"

[dependencies]:
#dependencies
"Anchor to header"

[website]:
https://tools.suckless.org/dmenu/patches/
"dmenu's patches"
