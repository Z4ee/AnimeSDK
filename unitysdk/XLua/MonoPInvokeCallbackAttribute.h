#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define XLUA_MONOPINVOKECALLBACKATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0xFF72640)

namespace XLua
{
	inline static constexpr unsigned int MonoPInvokeCallbackAttribute_TypeDefinitionIndex = 40524;

	class MonoPInvokeCallbackAttribute : public ::System::Attribute
	{
	public:
		::System::Type* type; // 0x10

		::System::Void _ctor(::System::Type* t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_MONOPINVOKECALLBACKATTRIBUTE__CTOR_OFFSET))(this, t);
		}
	};
}
