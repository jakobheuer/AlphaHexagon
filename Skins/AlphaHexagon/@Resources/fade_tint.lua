function Initialize()
	FadingVariable = SELF:GetOption('FadingVariable', '')
	TintVariable = SELF:GetOption('TintVariable', '')
	FadingMeterString = SELF:GetOption('FadingMeter', '')
	TintBeginString = SELF:GetOption('TintBegin', '')
	TintEndString = SELF:GetOption('TintEnd', '')
	FadeInStep = SELF:GetNumberOption('FadeInStep', '')
	FadeOutStep = SELF:GetNumberOption('FadeOutStep', '')

	FadingMeters = {}
	for part in string.gmatch(FadingMeterString, '[^,]+') do
		table.insert(FadingMeters, part)
	end

	TintBegin = {}
	for part in string.gmatch(TintBeginString, '[^,]+') do
		table.insert(TintBegin, tonumber(part))
	end

	TintEnd = {}
	for part in string.gmatch(TintEndString, '[^,]+') do
		table.insert(TintEnd, tonumber(part))
	end
	
	Fade = 0
	State = 0

	WriteOut(Fade)
end

function FadeIn()
	State = 1

	while State == 1 do
		Fade = Fade + FadeInStep

		if Fade > 1 then
			Fade = 1
			State = 0
		end

		WriteOut(Fade)
	end
end

function FadeOut()
	State = 2

	while State == 2 do
		Fade = Fade - FadeOutStep

		if Fade < 0 then
			Fade = 0
			State = 0
		end

		WriteOut(Fade)
	end
end

function WriteOut(Fade)
	local tint = {}
	for i = 1, 3 do
		tint[i] = TintBegin[i] * (1 - Fade) + TintEnd[i] * Fade
	end

	SKIN:Bang('!SetVariable', FadingVariable, Fade)
	SKIN:Bang('!SetVariable', TintVariable, tint[1]..','..tint[2]..','..tint[3])

	for i, meter in ipairs(FadingMeters) do
		SKIN:Bang('!UpdateMeter', meter)
	end
	
	SKIN:Bang('!Redraw')
end
