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

#define SYSTEM_NET_SERVICEPOINTMANAGER_CLOSECONNECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x1A142420)
#define SYSTEM_NET_SERVICEPOINTMANAGER_FINDSERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x1A141A80)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GETLEGACYCERTIFICATEPOLICY_OFFSET UNITYSDK_OFFSET(0x1A141830)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_CHECKCERTIFICATEREVOCATIONLIST_OFFSET UNITYSDK_OFFSET(0x1A141860)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_DNSREFRESHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A141900)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_SECURITYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1A141970)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_SERVERCERTVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A1419D0)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SET_DEFAULTCONNECTIONLIMIT_OFFSET UNITYSDK_OFFSET(0x1A1418A0)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SET_DNSREFRESHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A141930)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SET_SECURITYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1A1419A0)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SET_SERVERCERTIFICATEVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A141A00)
#define SYSTEM_NET_SERVICEPOINTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1417D0)

namespace System::Net
{
	inline static constexpr unsigned int ServicePointManager_TypeDefinitionIndex = 2863;

	class ServicePointManager : public ::System::Object
	{
	public:
		static ::System::Collections::Specialized::HybridDictionary** StaticGet_servicePoints()
		{
			return (::System::Collections::Specialized::HybridDictionary**)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0x12240);
		}
		static ::System::Net::ICertificatePolicy** StaticGet_policy()
		{
			return (::System::Net::ICertificatePolicy**)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0x12248);
		}
		static ::System::Net::ServerCertValidationCallback** StaticGet_server_cert_cb()
		{
			return (::System::Net::ServerCertValidationCallback**)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0x12250);
		}
		static ::System::Int32* StaticGet_maxServicePoints()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0x57A0);
		}
		static ::System::Boolean* StaticGet_expectContinue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0x57A4);
		}
		static ::System::Boolean* StaticGet_tcp_keepalive()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0x57A5);
		}
		static ::System::Boolean* StaticGet__checkCRL()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0x57A6);
		}
		static ::System::Boolean* StaticGet_useNagle()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0x57A7);
		}
		static ::System::Int32* StaticGet_tcp_keepalive_time()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0x57A8);
		}
		static ::System::Int32* StaticGet_defaultConnectionLimit()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0x57AC);
		}
		static ::System::Int32* StaticGet_maxServicePointIdleTime()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0x57B0);
		}
		static ::System::Net::SecurityProtocolType* StaticGet__securityProtocol()
		{
			return (::System::Net::SecurityProtocolType*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0x57B4);
		}
		static ::System::Int32* StaticGet_tcp_keepalive_interval()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0x57B8);
		}
		static ::System::Int32* StaticGet_dnsRefreshTimeout()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0x57BC);
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

		static ::System::Void set_DefaultConnectionLimit(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SET_DEFAULTCONNECTIONLIMIT_OFFSET))(value);
		}

		static ::System::Int32 get_DnsRefreshTimeout()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GET_DNSREFRESHTIMEOUT_OFFSET))();
		}

		static ::System::Void set_DnsRefreshTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SET_DNSREFRESHTIMEOUT_OFFSET))(value);
		}

		static ::System::Net::SecurityProtocolType get_SecurityProtocol()
		{
			return ((::System::Net::SecurityProtocolType(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GET_SECURITYPROTOCOL_OFFSET))();
		}

		static ::System::Void set_SecurityProtocol(::System::Net::SecurityProtocolType value)
		{
			return ((::System::Void(*)(::System::Net::SecurityProtocolType))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SET_SECURITYPROTOCOL_OFFSET))(value);
		}

		static ::System::Net::ServerCertValidationCallback* get_ServerCertValidationCallback()
		{
			return ((::System::Net::ServerCertValidationCallback*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GET_SERVERCERTVALIDATIONCALLBACK_OFFSET))();
		}

		static ::System::Void set_ServerCertificateValidationCallback(::System::Net::Security::RemoteCertificateValidationCallback* value)
		{
			return ((::System::Void(*)(::System::Net::Security::RemoteCertificateValidationCallback*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SET_SERVERCERTIFICATEVALIDATIONCALLBACK_OFFSET))(value);
		}

		static ::System::Net::ServicePoint* FindServicePoint(::System::Uri* address, ::System::Net::IWebProxy* proxy)
		{
			return ((::System::Net::ServicePoint*(*)(::System::Uri*, ::System::Net::IWebProxy*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_FINDSERVICEPOINT_OFFSET))(address, proxy);
		}

		static ::System::Void CloseConnectionGroup(::System::String* connectionGroupName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_CLOSECONNECTIONGROUP_OFFSET))(connectionGroupName);
		}
	};
}
