#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/CookieVariant.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_NET_HEADERVARIANTINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x259D70)
#define SYSTEM_NET_HEADERVARIANTINFO_GET_VARIANT_OFFSET UNITYSDK_OFFSET(0x32EEE0)
#define SYSTEM_NET_HEADERVARIANTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x351680)

namespace System::Net
{
	inline static constexpr unsigned int HeaderVariantInfo_TypeDefinitionIndex = 3422;

	struct alignas(8) HeaderVariantInfo
	{
		::System::String* m_name; // 0x10
		::System::Net::CookieVariant m_variant; // 0x18

		::System::Void _ctor(::System::String* name, ::System::Net::CookieVariant variant)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::CookieVariant))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERVARIANTINFO__CTOR_OFFSET))(this, name, variant);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERVARIANTINFO_GET_NAME_OFFSET))(this);
		}

		::System::Net::CookieVariant get_Variant()
		{
			return ((::System::Net::CookieVariant(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERVARIANTINFO_GET_VARIANT_OFFSET))(this);
		}
	};
}
