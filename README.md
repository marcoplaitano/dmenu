# DMENU v 5.2

Official dmenu [website].

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

# Installation

1. Clone or [download] this repository.
2. `cd` into the project directory.
3. Give executable permissions to the installation script.
    ```sh
    chmod +x install.sh
    ```
4. Execute the script.
    ```sh
    ./install.sh
    ```

If everything worked there should now be the following binaries inside the
`/usr/local/bin` directory: *dmenu_run* and *dmenu*.

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

# Usage

## dmenu_run

With this script the user can choose from a list of every program/script in
their path and execute it.

## dmenu

The way to use this script is by feeding it a list of options (`\n` separated
strings):

```sh
printf "yes\nno\nmaybe" | dmenu
```

The user is then prompted to write/select one of these options which dmenu will
then *echo* to `stdout`.  
The possible applications of this are infinite. Here is an example:

```sh
#!/bin/bash

# With this script the user feeds dmenu a list of all the audio files in the
# Music directory to choose the next one to play.
files=`find ~/Music -maxdepth 1 -type f -name *.mp3`
song=`echo "$files" | dmenu`
mpv $song
```

## Options

Both *dmenu* and *dmenu_run* accept command-line options to customize their
behaviour.

You can read them in the man page:  
`man dmenu`

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

# Applied patches

These are all the patches I manually added to the source code.  
A list of these and all the other available patches can be found [here].

## Line Height

With this patch the user can add the `-h height` flag to specify the height (in
pixels) of the dmenu bar.  
The minimum accepted value is `8`.

## Fuzzy Match

Added the `-F` flag to enable fuzzy-matching.

## Fuzzy highlight

This patch adds options to change the colors of the highlighted fuzzy matches.

+ `-nhb #hex`  
    normal highlight background color.
+ `-nhf #hex`  
    normal highlight foreground color.
+ `-shb #hex`  
    selected highlight background color.
+ `-shf #hex`  
    selected highlight foreground color.

## Center

Use `-c` flag to center the window (like rofi).

## Border Width

Use `-bw W` to specify border width of `W` pixels. (If not specified no border
will be drawn).

## Alpha

Use `-a` option to make the window semi-transparent.
The alpha mask is defined in the **config.h** file.

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

# Dependencies

Everything is taken care of inside the [installation script].

For transparency, the needed libraries that will be installed are:

+ gcc
+ make
+ build-essential
+ libx11-dev
+ libxinerama-dev
+ libxft-dev

<!-- LINKS -->

[website]:
https://tools.suckless.org/dmenu/
"dmenu's website"

[download]:
https://github.com/marcoplaitano/dmenu/archive/refs/heads/main.zip
"ZIP Download"

[here]:
https://tools.suckless.org/dmenu/patches/
"dmenu's patches"

[installation script]:
install.sh
"Repository file"
