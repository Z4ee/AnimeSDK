#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_CACHE_REQUESTCACHINGSECTIONINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x19E32E70)

namespace System::Net::Cache
{
	inline static constexpr unsigned int RequestCachingSectionInternal_TypeDefinitionIndex = 3865;

	class RequestCachingSectionInternal : public ::System::Object
	{
	public:
		::System::Boolean DisableAllCaching; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHINGSECTIONINTERNAL__CTOR_OFFSET))(this);
		}
	};
}
