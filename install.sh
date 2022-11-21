#!/bin/bash

# File:   install.sh
# Author: Marco Plaitano
# Date:   21 Nov 2022
# Brief:  Installation script for dmenu.

# Enable xtracing (useful when I call this script from system_setup.sh).
# In any case, tracing is redirected to this log file and won't appear on stdout
# nor in stderr.
LOGFILE="/var/tmp/.installation_log"
exec {BASH_XTRACEFD}>>$LOGFILE
PS4='$?\011 $(date +%H:%M:%S.%3N)  $BASH_SOURCE@$LINENO   \011'
set -x


# Install dependencies.
sudo apt install -y gcc make build-essential libx11-dev libxinerama-dev libxft-dev

# Remove previous global installation.
sudo rm /usr/bin/dmenu
sudo rm /usr/bin/dmenu_path
sudo rm /usr/bin/dmenu_run

# Uninstall (just for safety) and (re)install.
sudo make uninstall
sudo make install || exit 1
