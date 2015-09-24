#!/bin/bash

name="$(whoami)"
echo "$name"
ls -l >>text.txt
cat text.txt