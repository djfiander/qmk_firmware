#!/bin/sh

case "$1" in
	"")
		echo Flashing "${binfile:=massdrop_alt_djfiander.bin}"
		;;
	*)
		binfile="$1"
		;;
esac

case `uname` in
    "Darwin")
	LOADER='./mdloader_mac'
	;;
    "Linux")
	LOADER='./mdloader_linux'
	;;
    *)
	echo "Don't know how to flash the keyboard on" `uname` >&2
	exit 1
	;;
esac

$LOADER --first --download "$binfile" --restart
