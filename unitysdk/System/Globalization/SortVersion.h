#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace System::Globalization
{
	inline static constexpr unsigned int SortVersion_TypeDefinitionIndex = 762;

	class SortVersion : public ::System::Object
	{
	public:
		::System::Guid m_SortId; // 0x10
		::System::Int32 m_NlsVersion; // 0x20
	};
}
