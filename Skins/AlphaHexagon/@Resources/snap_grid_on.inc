[Rainmeter]
OnRefreshAction=[!Move [GridPositionX] [GridPositionY]][!Zpos -2]

[GridPositionX]
Measure=Calc
Formula=Round((#CURRENTCONFIGX# - #GridX#) / #GridW#) * #GridW# + #GridX#
UpdateDivider=-1

[GridPositionY]
Measure=Calc
Formula=Round((#CURRENTCONFIGY# - #GridY#) / #GridH#) * #GridH# + #GridY#
UpdateDivider=-1
