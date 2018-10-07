#!/bin/bash

# Script for changing the configuration file for the Drawbridge PAL.

objcopy --add-section .config=config.ini --set-section-flags .config=contents,readonly palrun.elf runner
