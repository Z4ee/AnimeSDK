#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_CACHE_REQUESTCACHEVALIDATOR_CREATEVALIDATOR_OFFSET UNITYSDK_OFFSET(0x1E957580)

namespace System::Net::Cache
{
	inline static constexpr unsigned int RequestCacheValidator_TypeDefinitionIndex = 2981;

	class RequestCacheValidator : public ::System::Object
	{
	public:
		::System::Object* CreateValidator()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEVALIDATOR_CREATEVALIDATOR_OFFSET))(this);
		}
	};
}
