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

FadeInStep=20
FadeInRepeat=13
FadeOutStep=4
FadeOutRepeat=64

Hitbox=Hexagon_Dark.png
HitboxDark=Hexagon_Dark.png
HitboxLight=Hexagon_Light.png
HitboxAlpha=1

IconDir=#@#Icons\IconsScaled\

DarkGray=64,64,64,255
MiddleGray=127,127,127,255
LightGray=191,191,191,255
