#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define XLUA_UINT64USERDATAATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D305D40)

namespace XLua
{
	inline static constexpr unsigned int UInt64UserDataAttribute_TypeDefinitionIndex = 5609;

	class UInt64UserDataAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_UINT64USERDATAATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
