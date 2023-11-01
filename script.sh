#!/bin/sh
rm libft/*
cp -r ~/libft/*.c libft/
git add .
git commit -m "hello"
git push
