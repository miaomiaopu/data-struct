#!/bin/bash

# 定义保留的文件
PRESERVE_FILES=("build.sh" "clean.sh")

# 遍历当前目录下的所有文件和目录
for item in *
do
    # 排除后文件
    if [[ ! "${PRESERVE_FILES[@]}" =~ "$item" ]]; then
        rm -rf "$item"
    fi
done

# 输出完成信息
echo "清理完成"