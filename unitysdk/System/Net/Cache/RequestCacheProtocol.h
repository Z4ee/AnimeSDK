#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_CACHE_REQUESTCACHEPROTOCOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB40DA0)

namespace System::Net::Cache
{
	inline static constexpr unsigned int RequestCacheProtocol_TypeDefinitionIndex = 2985;

	class RequestCacheProtocol : public ::System::Object
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEPROTOCOL__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
