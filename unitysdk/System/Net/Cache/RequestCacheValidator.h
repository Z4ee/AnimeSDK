#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_CACHE_REQUESTCACHEVALIDATOR_CREATEVALIDATOR_OFFSET UNITYSDK_OFFSET(0x19A52300)
#define SYSTEM_NET_CACHE_REQUESTCACHEVALIDATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19A52350)

namespace System::Net::Cache
{
	inline static constexpr unsigned int RequestCacheValidator_TypeDefinitionIndex = 3864;

	class RequestCacheValidator : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEVALIDATOR__CTOR_OFFSET))(this);
		}

		::System::Object* CreateValidator()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEVALIDATOR_CREATEVALIDATOR_OFFSET))(this);
		}
	};
}
