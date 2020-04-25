[Variables]
U=[!UpdateMeasure Fader][!UpdateMeter MeterActiveColor][!Redraw]
FadingAlpha=0

[Fader]
Measure=Plugin
Plugin=ActionTimer
FadeIn=[!SetVariable FadingAlpha "(Clamp((#FadingAlpha# + 255 / #FadeInSteps#), 0, 255))"]#U#
FadeOut=[!SetVariable FadingAlpha "(Clamp((#FadingAlpha# - 255 / #FadeOutSteps#), 0, 255))"]#U#
ActionList1=Repeat FadeIn, 40, #FadeInSteps#
ActionList2=Repeat FadeOut, 40, #FadeOutSteps#
DynamicVariables=1
