[Variables]
U=[!UpdateMeasure "Fader"][!UpdateMeter "MeterColorIcon"][!UpdateMeter "MeterLabel"][!Redraw]

[MeterLabel]
Meter=String
Text=#LabelText#
X=(#IconWidth# / 2)
Y=#IconHeight# - (42 * #Scaling#)
FontFace=Orbitron
FontSize=(14 * #Scaling#)
StringAlign=Center
FontColor=255,255,255,#Alpha#
AntiAlias=1
DynamicVariables=1
