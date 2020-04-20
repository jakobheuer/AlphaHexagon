[Rainmeter]
Update=-1
@Include=basic.inc

[Variables]
FadingMeter=MeterColorIcon
Fade=0

[Fader]
Measure=Script
ScriptFile=#@#fade_variable.lua
FadingVariable=Fade
FadingMeter=#FadingMeter#
FadeInStep=#FadeInStep#
FadeOutStep=#FadeOutStep#

[MeterHitbox]
Meter=Image
ImageName=#IconDir##Hitbox#
W=#IconWidth#
ImageAlpha=#HitboxAlpha#
AntiAlias=1
LeftMouseUpAction=#MainAction#
MouseOverAction=[!CommandMeasure Fader "FadeIn()"]
MouseLeaveAction=[!CommandMeasure Fader "FadeOut()"]

[MeterMask]
Meter=Image
ImageName=#IconDir##Icon#
W=#IconWidth#
AntiAlias=1

[MeterGrayIcon]
Meter=Image
SolidColor=#TintGray#
W=#IconWidth#
H=#IconHeight#
Container=MeterMask

[MeterColorIcon]
Meter=Image
SolidColor=#TintColor#,(#Fade# * 255)
W=#IconWidth#
H=#IconHeight#
DynamicVariables=1
Container=MeterMask
