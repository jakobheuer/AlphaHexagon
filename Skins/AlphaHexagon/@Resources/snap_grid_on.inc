[Rainmeter]
OnRefreshAction=[!Move [GridPositionX] [GridPositionY]][!Zpos -2]

[GridPositionX]
Measure=Calc
Formula=Round((#CURRENTCONFIGX# - #GridX#) / #GridW#) * #GridW# + #GridX#

[GridPositionY]
Measure=Calc
Formula=Round((#CURRENTCONFIGY# - #GridY#) / #GridH#) * #GridH# + #GridY#
