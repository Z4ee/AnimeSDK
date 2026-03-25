#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class IPAddress; }
namespace System::Net { class IPHostEntry; }

#define SYSTEM_NET_NCLUTILITIES_GETLOCALHOST_OFFSET UNITYSDK_OFFSET(0x186FA800)
#define SYSTEM_NET_NCLUTILITIES_GET_LOCALADDRESSESLOCK_OFFSET UNITYSDK_OFFSET(0x186FA820)
#define SYSTEM_NET_NCLUTILITIES_GET_LOCALADDRESSES_OFFSET UNITYSDK_OFFSET(0x186FA390)
#define SYSTEM_NET_NCLUTILITIES_ISADDRESSLOCAL_OFFSET UNITYSDK_OFFSET(0x186FA300)

namespace System::Net
{
	inline static constexpr unsigned int NclUtilities_TypeDefinitionIndex = 2736;

	class NclUtilities : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet__LocalAddressesLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NclUtilities_TypeDefinitionIndex)->GetStaticField(0x125B0);
		}
		static ::System::String** StaticGet__LocalDomainName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NclUtilities_TypeDefinitionIndex)->GetStaticField(0x125B8);
		}
		static ::Il2CppArray<::System::Net::IPAddress*>** StaticGet__LocalAddresses()
		{
			return (::Il2CppArray<::System::Net::IPAddress*>**)Il2CppClass::FromTypeDefinitionIndex(NclUtilities_TypeDefinitionIndex)->GetStaticField(0x125C0);
		}

		static ::System::Boolean IsAddressLocal(::System::Net::IPAddress* ipAddress)
		{
			return ((::System::Boolean(*)(::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NCLUTILITIES_ISADDRESSLOCAL_OFFSET))(ipAddress);
		}

		static ::System::Net::IPHostEntry* GetLocalHost()
		{
			return ((::System::Net::IPHostEntry*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NCLUTILITIES_GETLOCALHOST_OFFSET))();
		}

		static ::Il2CppArray<::System::Net::IPAddress*>* get_LocalAddresses()
		{
			return ((::Il2CppArray<::System::Net::IPAddress*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NCLUTILITIES_GET_LOCALADDRESSES_OFFSET))();
		}

		static ::System::Object* get_LocalAddressesLock()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NCLUTILITIES_GET_LOCALADDRESSESLOCK_OFFSET))();
		}
	};
}
