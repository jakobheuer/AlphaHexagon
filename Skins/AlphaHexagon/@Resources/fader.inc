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
