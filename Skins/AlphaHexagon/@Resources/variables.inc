[Variables]
Scaling=#SCREENAREAHEIGHT# / 1080
ReverseScaling=1080 / #SCREENAREAHEIGHT#
;No parenthesis for better precision
;Do not divide by #Scaling# but multiply by #ReverseScaling#

vWorkAreaWidth=#SCREENAREAWIDTH#
vWorkAreaHeight=Clamp(Round(#WORKAREAHEIGHT# * #ReverseScaling#, -1), 1020, 1080) * #Scaling#
;vWorkAreaHeight=#SCREENAREAHEIGHT#

IconWidth=(126 * #Scaling#)
IconHeight=(144 * #Scaling#)

GridW=(63 * #Scaling#)
GridH=(108 * #Scaling#)
GridX=((#vWorkAreaWidth# - #IconWidth#) / 2)
GridY=((#vWorkAreaHeight# - #IconHeight#) / 2)

FadeInSteps=2
FadeOutSteps=8

IconDir=#@#Icons\Scaled\
IconName=""

HitboxDark=Hexagon_Dark
HitboxLight=Hexagon_Light

HitboxPath=#IconDir##Hitbox#.png
IconPath=#IconDir##IconName#.png
ColorPath=#IconDir##IconName#_color.png

HitboxAlpha=(#HitboxVisible# > 0 ? 255 : 1)

Black=0,0,0
DarkGray=64,64,64
MiddleGray=127,127,127
LightGray=191,191,191
White=255,255,255
