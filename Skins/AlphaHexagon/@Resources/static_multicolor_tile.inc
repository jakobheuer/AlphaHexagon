[Rainmeter]
Update=-1
@Include=basic.inc

[MeterHitbox]
Meter=Image
ImageName=#HitboxPath#
W=#IconWidth#
ImageAlpha=#HitboxAlpha#
AntiAlias=1
LeftMouseUpAction=#ClickAction#

[MeterIconMask]
Meter=Image
ImageName=#IconPath#
W=#IconWidth#
AntiAlias=1

[MeterActiveColor]
Container=MeterIconMask
Meter=Image
ImageName=#ColorPath#
W=#IconWidth#
