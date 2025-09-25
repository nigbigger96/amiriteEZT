#! /bin/bash
pros make && pros u $(ls "/dev/tty.usbmodem*" | head -n 1)