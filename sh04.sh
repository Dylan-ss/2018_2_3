#!/bin/bash

read -p "Please input (Y/N):" YN
[ "$YN" == "Y" -o "$YN" == "y" ] && echo "OK, continue!" && exit 0
[ "$YN" == "N" -o "$YN" == "n" ] && echo "OK, interrupt!" && exit 0
echo "I don't know what your choice" && exit 0

