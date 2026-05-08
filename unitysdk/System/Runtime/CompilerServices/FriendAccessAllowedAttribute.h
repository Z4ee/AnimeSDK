#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_FRIENDACCESSALLOWEDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B01F20)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int FriendAccessAllowedAttribute_TypeDefinitionIndex = 3137;

	class FriendAccessAllowedAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_FRIENDACCESSALLOWEDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
