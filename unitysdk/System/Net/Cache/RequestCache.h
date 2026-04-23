#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_CACHE_REQUESTCACHE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0F12B0)

namespace System::Net::Cache
{
	inline static constexpr unsigned int RequestCache_TypeDefinitionIndex = 2969;

	class RequestCache : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_LineSplits()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(RequestCache_TypeDefinitionIndex)->GetStaticField(0x12D40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHE__CCTOR_OFFSET))();
		}
	};
}
