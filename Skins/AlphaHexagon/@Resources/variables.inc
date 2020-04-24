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

FadeInSteps=2
FadeOutSteps=8

IconDir=#@#Icons\Scaled\
IconName=""
ImageExt=.png

HitboxDark=Hexagon_Dark
HitboxLight=Hexagon_Light

HitboxPath=#IconDir##Hitbox##ImageExt#
IconPath=#IconDir##IconName##ImageExt#
ColorPath=#IconDir##IconName#_color#ImageExt#

HitboxAlpha=(#HitboxVisible# > 0 ? 255 : 1)

Black=0,0,0
DarkGray=64,64,64
MiddleGray=127,127,127
LightGray=191,191,191
White=255,255,255
