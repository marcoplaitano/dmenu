# DMENU 

This is my fork of [dmenu] (version **5.2**), with several applied patches.

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

# Installation

```sh
git clone https://github.com/marcoplaitano/dmenu
cd dmenu && ./install.sh
```

**Note:** it uses `pacman` or `apt` to install the dependencies, therefore this
script only works on `Arch` or `Ubuntu` based distributions.

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

# Usage

## dmenu_run

With this script the user can choose from a list of every program/script in
their path and execute it.

## dmenu

The way to use this script is by feeding it a list of options (strings separated
by `\n`):

```sh
printf "yes\nno\nmaybe" | dmenu
```

The user is then prompted to write/select one of the available options. dmenu
will output the selection to *stdout*.

## Options

Both *dmenu* and *dmenu_run* accept command-line options to customize their
behaviour.

You can learn about them in the manual with this command:
```sh
man dmenu
```

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

# Applied patches

These are all the patches I manually added to the source code. Some of these
I have customized to further improve control over the program's behaviour and
appearance.  
A list of these patches and all the other available ones can be found [here].

## Alpha

Adds the `-a` option to make the window semi-transparent, while keeping the text
in it opaque.
The alpha mask (amount of transparency) is defined in the **config.h** file.  
The default value is `0xCC` (80% of transparency).

## Center

Adds the `-c` flag to center the window on the screen (like rofi).

## Border Width

Adds the `-bw W` option to specify a border width of `W` pixels. The color of
the border is the same of the selected match's background (`-sb #RRGGBB`).  
By default the border will not be drawn.

## Line Height

Adds the `-h H` option to adjust the height of the window, in pixels.

## Fuzzy Match

Adds the `-F` option to enable fuzzy-matching.

## Fuzzy highlight

Adds options to change the colors of the highlighted fuzzy matches.

+ `-nhb #RRGGBB`  
    normal highlight background color.
+ `-nhf #RRGGBB`  
    normal highlight foreground color.
+ `-shb #RRGGBB`  
    selected highlight background color.
+ `-shf #RRGGBB`  
    selected highlight foreground color.

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

# Contributing

You can contribute by:
+ making [this] installation process available for other distributions too.

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

# Dependencies

Everything is taken care of inside the installation script.  
These are the libraries that will be installed:

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

[download]:
https://github.com/marcoplaitano/dmenu/archive/refs/heads/main.zip
"ZIP Download"

[here]:
https://tools.suckless.org/dmenu/patches/
"dmenu's patches"

[this]:
install.sh
"repository file"
