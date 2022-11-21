#!/bin/bash

# File:   install.sh
# Author: Marco Plaitano
# Date:   21 Nov 2022
# Brief:  Installation script for dmenu.


# Install dependencies.
sudo apt install -y libx11-dev libxinerama-dev libxft-dev

# Remove previous global installation.
sudo rm /usr/bin/dmenu
sudo rm /usr/bin/dmenu_path
sudo rm /usr/bin/dmenu_run

# Uninstall (just for safety) and (re)install.
sudo make uninstall
sudo make install || exit 1
