#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_IO_PATHINTERNAL_HASILLEGALCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1796CA60)
#define SYSTEM_IO_PATHINTERNAL_ISPARTIALLYQUALIFIED_OFFSET UNITYSDK_OFFSET(0x1796CCD0)

namespace System::IO
{
	inline static constexpr unsigned int PathInternal_TypeDefinitionIndex = 705;

	class PathInternal : public ::System::Object
	{
	public:
		static ::System::Boolean IsPartiallyQualified(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHINTERNAL_ISPARTIALLYQUALIFIED_OFFSET))(path);
		}

		static ::System::Boolean HasIllegalCharacters(::System::String* path, ::System::Boolean checkAdditional)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHINTERNAL_HASILLEGALCHARACTERS_OFFSET))(path, checkAdditional);
		}
	};
}
