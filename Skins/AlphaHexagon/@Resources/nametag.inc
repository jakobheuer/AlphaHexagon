[Variables]
U=[!UpdateMeasure Fader][!UpdateMeter MeterInactiveColor][!UpdateMeter MeterNametag][!Redraw]

[MeterNametag]
Meter=String
Text=#Nametag#
FontFace=Orbitron
FontSize=(14 * #Scaling#)
StringAlign=Center
X=(#IconWidth# / 2)
Y=(#IconHeight# - 42 * #Scaling#)
FontColor=#White#,(255 - #FadingAlpha#)
AntiAlias=1
DynamicVariables=1
