#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/CookieVariant.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_NET_HEADERVARIANTINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x5B60)
#define SYSTEM_NET_HEADERVARIANTINFO_GET_VARIANT_OFFSET UNITYSDK_OFFSET(0xDAD0)
#define SYSTEM_NET_HEADERVARIANTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x89650)

namespace System::Net
{
	inline static constexpr unsigned int HeaderVariantInfo_TypeDefinitionIndex = 2792;

	struct alignas(8) HeaderVariantInfo
	{
		::System::String* m_name; // 0x10
		::System::Net::CookieVariant m_variant; // 0x18

		::System::Void _ctor(::System::String* a1, ::System::Net::CookieVariant a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::CookieVariant))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERVARIANTINFO__CTOR_OFFSET))(this, a1, a2);
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
