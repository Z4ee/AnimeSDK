#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MonoTODOAttribute.h"

namespace System { class String; }

#define SYSTEM_MONOLIMITATIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E76E0F0)

namespace System
{
	inline static constexpr unsigned int MonoLimitationAttribute_TypeDefinitionIndex = 3098;

	class MonoLimitationAttribute : public ::System::MonoTODOAttribute
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MONOLIMITATIONATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
