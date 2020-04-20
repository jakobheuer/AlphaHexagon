[Variables]
Scaling=(#SCREENAREAHEIGHT# / 1080)

BaseX=(63 * #Scaling#)
BaseY=(36 * #Scaling#)

IconWidth=(2 * #BaseX#)
IconHeight=(4 * #BaseY#)

GridW=#BaseX#
GridH=(3 * #BaseY#)
GridX=((#SCREENAREAWIDTH# - 30 * #BaseX#) / 2)
GridY=((#WORKAREAHEIGHT# - 28 * #BaseY#) / 2)

FadeInStep=0.04
FadeOutStep=0.01

IconDir=#@#Icons\IconsScaled\

Hitbox=Hexagon_Dark.png
HitboxDark=Hexagon_Dark.png
HitboxLight=Hexagon_Light.png
HitboxAlpha=(#HitboxVisible# > 0 ? 255 : 1)

Black=0,0,0
DarkGray=64,64,64
MiddleGray=127,127,127
LightGray=191,191,191
White=255,255,255
