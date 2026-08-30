#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_IO_PATHINTERNAL_HASILLEGALCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1D46B480)
#define SYSTEM_IO_PATHINTERNAL_ISPARTIALLYQUALIFIED_OFFSET UNITYSDK_OFFSET(0x1D46B6F0)

namespace System::IO
{
	inline static constexpr unsigned int PathInternal_TypeDefinitionIndex = 707;

	class PathInternal : public ::System::Object
	{
	public:
		static ::System::Boolean IsPartiallyQualified(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHINTERNAL_ISPARTIALLYQUALIFIED_OFFSET))(a1);
		}

		static ::System::Boolean HasIllegalCharacters(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHINTERNAL_HASILLEGALCHARACTERS_OFFSET))(a1, a2);
		}
	};
}
