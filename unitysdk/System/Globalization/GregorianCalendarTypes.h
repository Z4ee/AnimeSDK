#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Globalization
{
	inline static constexpr unsigned int GregorianCalendarTypes_TypeDefinitionIndex = 749;

	enum class GregorianCalendarTypes : ::System::Int32
	{
		Localized = 1,
		USEnglish = 2,
		MiddleEastFrench = 9,
		Arabic = 10,
		TransliteratedEnglish = 11,
		TransliteratedFrench = 12,
	};
}
