#!/bin/bash

# File:   install.sh
# Author: Marco Plaitano
# Date:   21 Nov 2022
# Brief:  Installation script for dmenu.

# Install dependencies.
if which pacman &>/dev/null; then
    sudo pacman -S --noconfirm gcc make libx11 libxinerama libxft
else
    sudo apt install -y gcc make build-essential \
                        libx11-dev libxinerama-dev libxft-dev
fi

# Remove previous installation.
sudo make uninstall

if sudo make install; then
    printf "\nDone.\n"
else
    printf "\nInstallation failed.\n"
fi
