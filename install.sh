#!/bin/bash

# File:   install.sh
# Author: Marco Plaitano
# Date:   21 Nov 2022
# Brief:  Installation script for dmenu.
# TODO:   add more package managers to make it platform independent.

# Install dependencies.
if which pacman &>/dev/null; then
    sudo pacman -S --needed --noconfirm gcc make libx11 libxinerama libxft
elif which apt &>/dev/null; then
    sudo apt install -y gcc make build-essential \
                        libx11-dev libxinerama-dev libxft-dev
else
    printf "Could not install dependencies because neither 'pacman' nor 'apt'"
    printf "\nare installed on this machine.\n"
    exit 1
fi

# Remove previous installation.
sudo make uninstall

if sudo make install; then
    printf "\ndmenu installed correctly.\n"
else
    printf "\ndmenu installation failed.\n"
    exit 1
fi
