#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::InteropServices::ComTypes
{
	inline static constexpr unsigned int TYMED_TypeDefinitionIndex = 3135;

	enum class TYMED : ::System::Int32
	{
		TYMED_HGLOBAL = 1,
		TYMED_FILE = 2,
		TYMED_ISTREAM = 4,
		TYMED_ISTORAGE = 8,
		TYMED_GDI = 16,
		TYMED_MFPICT = 32,
		TYMED_ENHMF = 64,
		TYMED_NULL = 0,
	};
}
