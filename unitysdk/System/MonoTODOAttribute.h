#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_MONOTODOATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19F45BB0)

namespace System
{
	inline static constexpr unsigned int MonoTODOAttribute_TypeDefinitionIndex = 3085;

	class MonoTODOAttribute : public ::System::Attribute
	{
	public:
		::System::String* comment; // 0x10

		::System::Void _ctor(::System::String* comment)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MONOTODOATTRIBUTE__CTOR_OFFSET))(this, comment);
		}
	};
}
