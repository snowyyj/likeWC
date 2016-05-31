#!/bin/sh
CPP_DIR=../server/src/base/pb/protocol
JAVA_DIR=../android/app/src/main/java
DST_DIR=./gen

#C++
cp $DST_DIR/cpp/* $CPP_DIR/

#JAVA
cp -rf $DST_DIR/java/* $JAVA_DIR/

rm -rf ./gen
