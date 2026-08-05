#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net::Cache { class RequestCacheBinding; }
namespace System::Net::Cache { class RequestCachingSectionInternal; }

#define SYSTEM_NET_CACHE_REQUESTCACHEMANAGER_GETBINDING_OFFSET UNITYSDK_OFFSET(0x1D3FBAA0)
#define SYSTEM_NET_CACHE_REQUESTCACHEMANAGER_GET_ISCACHINGENABLED_OFFSET UNITYSDK_OFFSET(0x1D3FBEE0)
#define SYSTEM_NET_CACHE_REQUESTCACHEMANAGER_LOADCONFIGSETTINGS_OFFSET UNITYSDK_OFFSET(0x1D3FBD70)
#define SYSTEM_NET_CACHE_REQUESTCACHEMANAGER_SETBINDING_OFFSET UNITYSDK_OFFSET(0x1D3FBFC0)
#define SYSTEM_NET_CACHE_REQUESTCACHEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3FC280)
#define SYSTEM_NET_CACHE_REQUESTCACHEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FBA90)

namespace System::Net::Cache
{
	inline static constexpr unsigned int RequestCacheManager_TypeDefinitionIndex = 3862;

	class RequestCacheManager : public ::System::Object
	{
	public:
		static ::System::Net::Cache::RequestCacheBinding** StaticGet_s_DefaultGlobalBinding()
		{
			return (::System::Net::Cache::RequestCacheBinding**)Il2CppClass::FromTypeDefinitionIndex(RequestCacheManager_TypeDefinitionIndex)->GetStaticField(0x2E20);
		}
		static ::System::Net::Cache::RequestCacheBinding** StaticGet_s_BypassCacheBinding()
		{
			return (::System::Net::Cache::RequestCacheBinding**)Il2CppClass::FromTypeDefinitionIndex(RequestCacheManager_TypeDefinitionIndex)->GetStaticField(0x2E28);
		}
		static ::System::Net::Cache::RequestCacheBinding** StaticGet_s_DefaultFtpBinding()
		{
			return (::System::Net::Cache::RequestCacheBinding**)Il2CppClass::FromTypeDefinitionIndex(RequestCacheManager_TypeDefinitionIndex)->GetStaticField(0x2E30);
		}
		static ::System::Net::Cache::RequestCacheBinding** StaticGet_s_DefaultHttpBinding()
		{
			return (::System::Net::Cache::RequestCacheBinding**)Il2CppClass::FromTypeDefinitionIndex(RequestCacheManager_TypeDefinitionIndex)->GetStaticField(0x2E38);
		}
		static ::System::Net::Cache::RequestCachingSectionInternal** StaticGet_s_CacheConfigSettings()
		{
			return (::System::Net::Cache::RequestCachingSectionInternal**)Il2CppClass::FromTypeDefinitionIndex(RequestCacheManager_TypeDefinitionIndex)->GetStaticField(0x2E40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Net::Cache::RequestCacheBinding* GetBinding(::System::String* internedScheme)
		{
			return ((::System::Net::Cache::RequestCacheBinding*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEMANAGER_GETBINDING_OFFSET))(internedScheme);
		}

		static ::System::Boolean get_IsCachingEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEMANAGER_GET_ISCACHINGENABLED_OFFSET))();
		}

		static ::System::Void SetBinding(::System::String* uriScheme, ::System::Net::Cache::RequestCacheBinding* binding)
		{
			return ((::System::Void(*)(::System::String*, ::System::Net::Cache::RequestCacheBinding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEMANAGER_SETBINDING_OFFSET))(uriScheme, binding);
		}

		static ::System::Void LoadConfigSettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHE_REQUESTCACHEMANAGER_LOADCONFIGSETTINGS_OFFSET))();
		}
	};
}
