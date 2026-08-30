#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Globalization
{
	inline static constexpr unsigned int CultureTypes_TypeDefinitionIndex = 739;

	enum class CultureTypes : ::System::Int32
	{
		NeutralCultures = 1,
		SpecificCultures = 2,
		InstalledWin32Cultures = 4,
		AllCultures = 7,
		UserCustomCulture = 8,
		ReplacementCultures = 16,
		WindowsOnlyCultures = 32,
		FrameworkCultures = 64,
	};
}
