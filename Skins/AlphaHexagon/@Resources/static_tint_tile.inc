[Rainmeter]
Update=-1
@Include=basic.inc

[MeterHitbox]
Meter=Image
ImageName=#IconDir##Hitbox#
W=#IconWidth#
ImageAlpha=#HitboxAlpha#
AntiAlias=1
LeftMouseUpAction=#MainAction#

[MeterMask]
Meter=Image
ImageName=#IconDir##Icon#
W=#IconWidth#
AntiAlias=1

[MeterColorIcon]
Meter=Image
SolidColor=#TintColor#
W=#IconWidth#
H=#IconHeight#
Container=MeterMask

