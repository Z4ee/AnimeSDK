#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_CACHE_REQUESTCACHEPROTOCOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1921D250)

namespace System::Net::Cache
{
	inline static constexpr unsigned int RequestCacheProtocol_TypeDefinitionIndex = 3872;

	class RequestCacheProtocol : public ::System::Object
	{
	public:
		::System::Void _ctor(::System::Object* arg1, ::System::Object* arg2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEPROTOCOL__CTOR_OFFSET))(this, arg1, arg2);
		}
	};
}
