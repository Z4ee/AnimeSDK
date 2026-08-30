#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/SecurityProtocolType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections::Specialized { class HybridDictionary; }
namespace System::Net { class ICertificatePolicy; }
namespace System::Net { class IWebProxy; }
namespace System::Net { class ServerCertValidationCallback; }
namespace System::Net { class ServicePoint; }
namespace System::Net::Security { class RemoteCertificateValidationCallback; }

#define SYSTEM_NET_SERVICEPOINTMANAGER_CLOSECONNECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x1E9B1970)
#define SYSTEM_NET_SERVICEPOINTMANAGER_FINDSERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x1E9B0E40)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GETLEGACYCERTIFICATEPOLICY_OFFSET UNITYSDK_OFFSET(0x1E9B0BD0)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_CHECKCERTIFICATEREVOCATIONLIST_OFFSET UNITYSDK_OFFSET(0x1E9B0C00)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_DNSREFRESHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1E9B0CC0)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_SECURITYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1E9B0D30)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_SERVERCERTVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E9B0D90)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SET_DEFAULTCONNECTIONLIMIT_OFFSET UNITYSDK_OFFSET(0x1E9B0C40)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SET_DNSREFRESHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1E9B0CF0)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SET_SECURITYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1E9B0D60)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SET_SERVERCERTIFICATEVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E9B0DC0)
#define SYSTEM_NET_SERVICEPOINTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9B0B70)

namespace System::Net
{
	inline static constexpr unsigned int ServicePointManager_TypeDefinitionIndex = 2874;

	class ServicePointManager : public ::System::Object
	{
	public:
		static ::System::Collections::Specialized::HybridDictionary** StaticGet_servicePoints()
		{
			return (::System::Collections::Specialized::HybridDictionary**)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0x1E5F0);
		}
		static ::System::Net::ICertificatePolicy** StaticGet_policy()
		{
			return (::System::Net::ICertificatePolicy**)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0x1E5F8);
		}
		static ::System::Net::ServerCertValidationCallback** StaticGet_server_cert_cb()
		{
			return (::System::Net::ServerCertValidationCallback**)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0x1E600);
		}
		static ::System::Net::SecurityProtocolType* StaticGet__securityProtocol()
		{
			return (::System::Net::SecurityProtocolType*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0xA320);
		}
		static ::System::Boolean* StaticGet_expectContinue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0xA324);
		}
		static ::System::Boolean* StaticGet_useNagle()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0xA325);
		}
		static ::System::Boolean* StaticGet__checkCRL()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0xA326);
		}
		static ::System::Boolean* StaticGet_tcp_keepalive()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0xA327);
		}
		static ::System::Int32* StaticGet_maxServicePoints()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0xA328);
		}
		static ::System::Int32* StaticGet_maxServicePointIdleTime()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0xA32C);
		}
		static ::System::Int32* StaticGet_dnsRefreshTimeout()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0xA330);
		}
		static ::System::Int32* StaticGet_tcp_keepalive_time()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0xA334);
		}
		static ::System::Int32* StaticGet_tcp_keepalive_interval()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0xA338);
		}
		static ::System::Int32* StaticGet_defaultConnectionLimit()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0xA33C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Net::ICertificatePolicy* GetLegacyCertificatePolicy()
		{
			return ((::System::Net::ICertificatePolicy*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GETLEGACYCERTIFICATEPOLICY_OFFSET))();
		}

		static ::System::Boolean get_CheckCertificateRevocationList()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GET_CHECKCERTIFICATEREVOCATIONLIST_OFFSET))();
		}

		static ::System::Void set_DefaultConnectionLimit(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SET_DEFAULTCONNECTIONLIMIT_OFFSET))(a1);
		}

		static ::System::Int32 get_DnsRefreshTimeout()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GET_DNSREFRESHTIMEOUT_OFFSET))();
		}

		static ::System::Void set_DnsRefreshTimeout(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SET_DNSREFRESHTIMEOUT_OFFSET))(a1);
		}

		static ::System::Net::SecurityProtocolType get_SecurityProtocol()
		{
			return ((::System::Net::SecurityProtocolType(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GET_SECURITYPROTOCOL_OFFSET))();
		}

		static ::System::Void set_SecurityProtocol(::System::Net::SecurityProtocolType a1)
		{
			return ((::System::Void(*)(::System::Net::SecurityProtocolType))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SET_SECURITYPROTOCOL_OFFSET))(a1);
		}

		static ::System::Net::ServerCertValidationCallback* get_ServerCertValidationCallback()
		{
			return ((::System::Net::ServerCertValidationCallback*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GET_SERVERCERTVALIDATIONCALLBACK_OFFSET))();
		}

		static ::System::Void set_ServerCertificateValidationCallback(::System::Net::Security::RemoteCertificateValidationCallback* a1)
		{
			return ((::System::Void(*)(::System::Net::Security::RemoteCertificateValidationCallback*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SET_SERVERCERTIFICATEVALIDATIONCALLBACK_OFFSET))(a1);
		}

		static ::System::Net::ServicePoint* FindServicePoint(::System::Uri* a1, ::System::Net::IWebProxy* a2)
		{
			return ((::System::Net::ServicePoint*(*)(::System::Uri*, ::System::Net::IWebProxy*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_FINDSERVICEPOINT_OFFSET))(a1, a2);
		}

		static ::System::Void CloseConnectionGroup(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_CLOSECONNECTIONGROUP_OFFSET))(a1);
		}
	};
}
