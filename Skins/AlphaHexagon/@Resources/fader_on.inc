[Variables]
U=[!UpdateMeasure Fader][!UpdateMeter MeterInactiveColor][!Redraw]
FadingAlpha=255

[Fader]
Measure=Plugin
Plugin=ActionTimer
FadeIn=[!SetVariable FadingAlpha "(Clamp((#FadingAlpha# - 255 / #FadeInSteps#), 0, 255))"]#U#
FadeOut=[!SetVariable FadingAlpha "(Clamp((#FadingAlpha# + 255 / #FadeOutSteps#), 0, 255))"]#U#
ActionList1=Repeat FadeIn, 40, #FadeInSteps#
ActionList2=Repeat FadeOut, 40, #FadeOutSteps#
DynamicVariables=1

[MeterHitbox]
MouseOverAction=[!CommandMeasure Fader "Stop 2"][!CommandMeasure Fader "Execute 1"]
MouseLeaveAction=[!CommandMeasure Fader "Stop 1"][!CommandMeasure Fader "Execute 2"]

[MeterInactiveColor]
Container=MeterIconMask
Meter=Image
SolidColor=#InactiveColor#,#FadingAlpha#
W=#IconWidth#
H=#IconHeight#
DynamicVariables=1
