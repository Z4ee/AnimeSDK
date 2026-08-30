#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define XLUA_XLUATABLEOPTIMIZEARRAYSETREGISTRATIONATTRIBUTE_GET_TYPEFULLNAME_OFFSET UNITYSDK_OFFSET(0xCDFAED0)
#define XLUA_XLUATABLEOPTIMIZEARRAYSETREGISTRATIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0xCDFAEE0)

namespace XLua
{
	inline static constexpr unsigned int XLuaTableOptimizeArraySetRegistrationAttribute_TypeDefinitionIndex = 50614;

	class XLuaTableOptimizeArraySetRegistrationAttribute : public ::System::Attribute
	{
	public:
		::System::String* _TypeFullName_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_XLUATABLEOPTIMIZEARRAYSETREGISTRATIONATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_TypeFullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_XLUATABLEOPTIMIZEARRAYSETREGISTRATIONATTRIBUTE_GET_TYPEFULLNAME_OFFSET))(this);
		}
	};
}
