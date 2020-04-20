[Rainmeter]
@Include=fader.inc

[MeterHitbox]
Meter=Image
ImageName=#IconDir##Hitbox#
W=#IconWidth#
ImageAlpha=#HitboxAlpha#
AntiAlias=1
LeftMouseUpAction=#MainAction#
MouseOverAction=[!CommandMeasure Fader "Stop 2"][!CommandMeasure Fader "Execute 1"]
MouseLeaveAction=[!CommandMeasure Fader "Stop 1"][!CommandMeasure Fader "Execute 2"]

[MeterGrayIcon]
Meter=Image
ImageName=#IconDir##GrayIcon#
W=#IconWidth#
AntiAlias=1

[MeterColorIcon]
Meter=Image
ImageName=#IconDir##ColorIcon#
W=#IconWidth#
ImageAlpha=#Alpha#
AntiAlias=1
DynamicVariables=1
