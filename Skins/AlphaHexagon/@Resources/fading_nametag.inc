[Variables]
U=[!UpdateMeasure Fader][!UpdateMeter MeterInactiveColor][!UpdateMeter MeterNametag][!Redraw]

[MeterNametag]
Meter=String
Text=#Nametag#
MeterStyle=StyleNametag
FontSize=(14 * #Scaling#)
FontColor=#White#,(255 - #FadingAlpha#)
X=(#IconWidth# / 2)
Y=(#IconHeight# - 42 * #Scaling#)
DynamicVariables=1
