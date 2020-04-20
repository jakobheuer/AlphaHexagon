[Rainmeter]
Update=-1
@Include=basic.inc

[Variables]
U=[!UpdateMeasure "Fader"][!UpdateMeter "MeterActiveColor"][!Redraw]
Alpha=0

[Fader]
Measure=Plugin
Plugin=ActionTimer
FadeIn=[!SetVariable Alpha "(Clamp((#Alpha# + 255 / #FadeInSteps#), 0, 255))"]#U#
FadeOut=[!SetVariable Alpha "(Clamp((#Alpha# - 255 / #FadeOutSteps#), 0, 255))"]#U#
Hide=[!HideMeter "MeterInactiveColor"][!UpdateMeter "MeterInactiveColor"][!Redraw]
Show=[!ShowMeter "MeterInactiveColor"][!UpdateMeter "MeterInactiveColor"][!Redraw]
ActionList1=Repeat FadeIn, 40, #FadeInSteps# | Hide
ActionList2=Show | Repeat FadeOut, 40, #FadeOutSteps#
DynamicVariables=1

[MeterHitbox]
Meter=Image
ImageName=#IconDir##Hitbox#
W=#IconWidth#
ImageAlpha=#HitboxAlpha#
AntiAlias=1
LeftMouseUpAction=#MainAction#
MouseOverAction=[!CommandMeasure Fader "Stop 2"][!CommandMeasure Fader "Execute 1"]
MouseLeaveAction=[!CommandMeasure Fader "Stop 1"][!CommandMeasure Fader "Execute 2"]

[MeterIconMask]
Meter=Image
ImageName=#IconDir##IconName#.png
W=#IconWidth#
AntiAlias=1

[MeterInactiveColor]
Meter=Image
SolidColor=#InactiveColor#
W=#IconWidth#
H=#IconHeight#
Container=MeterIconMask

[MeterActiveColor]
Meter=Image
SolidColor=#ActiveColor#,#Alpha#
W=#IconWidth#
H=#IconHeight#
DynamicVariables=1
Container=MeterIconMask
