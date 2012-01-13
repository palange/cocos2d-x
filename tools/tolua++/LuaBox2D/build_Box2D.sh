#!/bin/sh

../tolua++ -H LuaBox2D.h -o LuaBox2d.cpp Box2D.pkg 
if [ ! -d ../../../lua/Box2D_support ];
then
    mkdir ../../../lua/Box2D_support
fi
mv LuaBox2D.h LuaBox2D.cpp ../../../lua/Box2D_support
