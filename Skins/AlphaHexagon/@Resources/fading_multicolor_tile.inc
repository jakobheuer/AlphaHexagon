[Rainmeter]
Update=-1
@Include=basic.inc
@Include2=fader.inc

[MeterHitbox]
Meter=Image
ImageName=#HitboxPath#
W=#IconWidth#
ImageAlpha=#HitboxAlpha#
AntiAlias=1
LeftMouseUpAction=#ClickAction#
MouseOverAction=[!CommandMeasure Fader "Stop 2"][!CommandMeasure Fader "Execute 1"]
MouseLeaveAction=[!CommandMeasure Fader "Stop 1"][!CommandMeasure Fader "Execute 2"]

[MeterIconMask]
Meter=Image
ImageName=#IconPath#
W=#IconWidth#
AntiAlias=1

[MeterActiveColor]
Container=MeterIconMask
Meter=Image
ImageName=#IconPath#
W=#IconWidth#
ColorMatrix4=0; 0; 0; 0; 0
ColorMatrix5=0; 0; 0; 1; 1
AntiAlias=1

[MeterInactiveColor]
Container=MeterIconMask
Meter=Image
SolidColor=#InactiveColor#,#FadingAlpha#
W=#IconWidth#
H=#IconHeight#
DynamicVariables=1
