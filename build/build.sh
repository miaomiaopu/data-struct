#!/bin/bash

if [ "$#" -ne 1 ]; then
    echo "请给出CMakeLists.txt所在目录的路径"
    exit 1
fi

path=$1

if [ ! -d "$path" ]; then
    echo "路径不存在"
    exit 1
fi

cmake "$path"

echo "构建完成"