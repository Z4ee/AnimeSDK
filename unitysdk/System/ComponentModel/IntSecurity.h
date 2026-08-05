#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_COMPONENTMODEL_INTSECURITY_UNSAFEGETFULLPATH_OFFSET UNITYSDK_OFFSET(0x1D22B160)

namespace System::ComponentModel
{
	inline static constexpr unsigned int IntSecurity_TypeDefinitionIndex = 2920;

	class IntSecurity : public ::System::Object
	{
	public:
		static ::System::String* UnsafeGetFullPath(::System::String* fileName)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INTSECURITY_UNSAFEGETFULLPATH_OFFSET))(fileName);
		}
	};
}
