#!/bin/bash

echo ''
git init
git add .
git status
git commit -a -m 'commit'
git remote add origin git@github.com:AngelovNikita/os.git
git push  -u origin master