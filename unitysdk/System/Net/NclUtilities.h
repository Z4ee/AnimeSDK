#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/SecurityStatus.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Net { class IPAddress; }
namespace System::Net { class IPHostEntry; }
namespace System::Threading { class ContextCallback; }

#define SYSTEM_NET_NCLUTILITIES_DEMANDCALLBACK_OFFSET UNITYSDK_OFFSET(0x19EF2720)
#define SYSTEM_NET_NCLUTILITIES_GETLOCALHOST_OFFSET UNITYSDK_OFFSET(0x19EF2D60)
#define SYSTEM_NET_NCLUTILITIES_GET_CONTEXTRELATIVEDEMANDCALLBACK_OFFSET UNITYSDK_OFFSET(0x19EF2680)
#define SYSTEM_NET_NCLUTILITIES_GET_HASSHUTDOWNSTARTED_OFFSET UNITYSDK_OFFSET(0x19EF25B0)
#define SYSTEM_NET_NCLUTILITIES_GET_LOCALADDRESSESLOCK_OFFSET UNITYSDK_OFFSET(0x19EF2D80)
#define SYSTEM_NET_NCLUTILITIES_GET_LOCALADDRESSES_OFFSET UNITYSDK_OFFSET(0x19EF2910)
#define SYSTEM_NET_NCLUTILITIES_GUESSWHETHERHOSTISLOOPBACK_OFFSET UNITYSDK_OFFSET(0x19EF2730)
#define SYSTEM_NET_NCLUTILITIES_ISADDRESSLOCAL_OFFSET UNITYSDK_OFFSET(0x19EF2880)
#define SYSTEM_NET_NCLUTILITIES_ISCLIENTFAULT_OFFSET UNITYSDK_OFFSET(0x19EF2660)
#define SYSTEM_NET_NCLUTILITIES_ISCREDENTIALFAILURE_OFFSET UNITYSDK_OFFSET(0x19EF2640)
#define SYSTEM_NET_NCLUTILITIES_ISFATAL_OFFSET UNITYSDK_OFFSET(0x19EF27F0)
#define SYSTEM_NET_NCLUTILITIES_ISTHREADPOOLLOW_OFFSET UNITYSDK_OFFSET(0x19EF2570)

namespace System::Net
{
	inline static constexpr unsigned int NclUtilities_TypeDefinitionIndex = 3294;

	class NclUtilities : public ::System::Object
	{
	public:
		static ::System::Threading::ContextCallback** StaticGet_s_ContextRelativeDemandCallback()
		{
			return (::System::Threading::ContextCallback**)Il2CppClass::FromTypeDefinitionIndex(NclUtilities_TypeDefinitionIndex)->GetStaticField(0x33C0);
		}
		static ::System::Object** StaticGet__LocalAddressesLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NclUtilities_TypeDefinitionIndex)->GetStaticField(0x33C8);
		}
		static ::Il2CppArray<::System::Net::IPAddress*>** StaticGet__LocalAddresses()
		{
			return (::Il2CppArray<::System::Net::IPAddress*>**)Il2CppClass::FromTypeDefinitionIndex(NclUtilities_TypeDefinitionIndex)->GetStaticField(0x33D0);
		}
		static ::System::String** StaticGet__LocalDomainName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NclUtilities_TypeDefinitionIndex)->GetStaticField(0x33D8);
		}
		// static const ::System::Int32 HostNameBufferLength = 0x100; // 0x0

		static ::System::Boolean IsThreadPoolLow()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NCLUTILITIES_ISTHREADPOOLLOW_OFFSET))();
		}

		static ::System::Boolean get_HasShutdownStarted()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NCLUTILITIES_GET_HASSHUTDOWNSTARTED_OFFSET))();
		}

		static ::System::Boolean IsCredentialFailure(::System::Net::SecurityStatus error)
		{
			return ((::System::Boolean(*)(::System::Net::SecurityStatus))((::PBYTE)hIl2Cpp + SYSTEM_NET_NCLUTILITIES_ISCREDENTIALFAILURE_OFFSET))(error);
		}

		static ::System::Boolean IsClientFault(::System::Net::SecurityStatus error)
		{
			return ((::System::Boolean(*)(::System::Net::SecurityStatus))((::PBYTE)hIl2Cpp + SYSTEM_NET_NCLUTILITIES_ISCLIENTFAULT_OFFSET))(error);
		}

		static ::System::Threading::ContextCallback* get_ContextRelativeDemandCallback()
		{
			return ((::System::Threading::ContextCallback*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_NCLUTILITIES_GET_CONTEXTRELATIVEDEMANDCALLBACK_OFFSET))();
		}

		static ::System::Void DemandCallback(::System::Object* state)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NCLUTILITIES_DEMANDCALLBACK_OFFSET))(state);
		}

		static ::System::Boolean GuessWhetherHostIsLoopback(::System::String* host)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NCLUTILITIES_GUESSWHETHERHOSTISLOOPBACK_OFFSET))(host);
		}

		static ::System::Boolean IsFatal(::System::Exception* exception)
		{
			return ((::System::Boolean(*)(::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NCLUTILITIES_ISFATAL_OFFSET))(exception);
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
