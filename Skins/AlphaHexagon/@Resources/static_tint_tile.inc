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

[MeterIconMask]
Meter=Image
ImageName=#IconDir##IconName#.png
W=#IconWidth#
AntiAlias=1

[MeterActiveColor]
Meter=Image
SolidColor=#ActiveColor#
W=#IconWidth#
H=#IconHeight#
Container=MeterIconMask
