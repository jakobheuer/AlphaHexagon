[Rainmeter]
Update=-1
@Include=basic.inc

[Variables]
U=[!UpdateMeasure "Fader"][!UpdateMeter "MeterColorIcon"][!Redraw]
Alpha=0

[Fader]
Measure=Plugin
Plugin=ActionTimer
FadeIn=[!SetVariable Alpha "(Clamp((#Alpha#+#FadeInStep#),0,255))"]#U#
FadeOut=[!SetVariable Alpha "(Clamp((#Alpha#-#FadeOutStep#),0,255))"]#U#
Hide=[!HideMeter "MeterGrayIcon"][!UpdateMeter "MeterGrayIcon"][!Redraw]
Show=[!ShowMeter "MeterGrayIcon"][!UpdateMeter "MeterGrayIcon"][!Redraw]
ActionList1=Repeat FadeIn,1,#FadeInRepeat# | Hide
ActionList2=Show | Repeat FadeOut,1,#FadeOutRepeat#
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
