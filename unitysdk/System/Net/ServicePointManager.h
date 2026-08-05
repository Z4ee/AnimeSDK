#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Security/EncryptionPolicy.h"
#include "unitysdk/System/Net/SecurityProtocolType.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections::Specialized { class HybridDictionary; }
namespace System::Net { class ICertificatePolicy; }
namespace System::Net { class IWebProxy; }
namespace System::Net { class ServerCertValidationCallback; }
namespace System::Net { class ServicePoint; }
namespace System::Net::Security { class RemoteCertificateValidationCallback; }

#define SYSTEM_NET_SERVICEPOINTMANAGER_CLOSECONNECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x1D411720)
#define SYSTEM_NET_SERVICEPOINTMANAGER_FINDSERVICEPOINT_1_OFFSET UNITYSDK_OFFSET(0x1D411650)
#define SYSTEM_NET_SERVICEPOINTMANAGER_FINDSERVICEPOINT_2_OFFSET UNITYSDK_OFFSET(0x1D410B10)
#define SYSTEM_NET_SERVICEPOINTMANAGER_FINDSERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x1D410AB0)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GETLEGACYCERTIFICATEPOLICY_OFFSET UNITYSDK_OFFSET(0x1D40FF00)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GETMUSTIMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1D410100)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_CERTIFICATEPOLICY_OFFSET UNITYSDK_OFFSET(0x1D40FDC0)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_CHECKCERTIFICATEREVOCATIONLIST_OFFSET UNITYSDK_OFFSET(0x1D40FF60)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_DEFAULTCONNECTIONLIMIT_OFFSET UNITYSDK_OFFSET(0x1D410020)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_DISABLESENDAUXRECORD_OFFSET UNITYSDK_OFFSET(0x1D4109C0)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_DISABLESTRONGCRYPTO_OFFSET UNITYSDK_OFFSET(0x1D4109B0)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_DNSREFRESHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D410210)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_ENABLEDNSROUNDROBIN_OFFSET UNITYSDK_OFFSET(0x1D4102D0)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_ENCRYPTIONPOLICY_OFFSET UNITYSDK_OFFSET(0x1D410820)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_EXPECT100CONTINUE_OFFSET UNITYSDK_OFFSET(0x1D410830)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_MAXSERVICEPOINTIDLETIME_OFFSET UNITYSDK_OFFSET(0x1D410350)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_MAXSERVICEPOINTS_OFFSET UNITYSDK_OFFSET(0x1D410430)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_REUSEPORT_OFFSET UNITYSDK_OFFSET(0x1D410510)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_SECURITYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1D410570)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_SERVERCERTIFICATEVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D410690)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_SERVERCERTVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D410630)
#define SYSTEM_NET_SERVICEPOINTMANAGER_GET_USENAGLEALGORITHM_OFFSET UNITYSDK_OFFSET(0x1D4108F0)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SETTCPKEEPALIVE_OFFSET UNITYSDK_OFFSET(0x1D4109D0)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SET_CERTIFICATEPOLICY_OFFSET UNITYSDK_OFFSET(0x1D40FEA0)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SET_CHECKCERTIFICATEREVOCATIONLIST_OFFSET UNITYSDK_OFFSET(0x1D40FFC0)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SET_DEFAULTCONNECTIONLIMIT_OFFSET UNITYSDK_OFFSET(0x1D410080)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SET_DNSREFRESHTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D410270)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SET_ENABLEDNSROUNDROBIN_OFFSET UNITYSDK_OFFSET(0x1D410310)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SET_EXPECT100CONTINUE_OFFSET UNITYSDK_OFFSET(0x1D410890)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SET_MAXSERVICEPOINTIDLETIME_OFFSET UNITYSDK_OFFSET(0x1D4103B0)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SET_MAXSERVICEPOINTS_OFFSET UNITYSDK_OFFSET(0x1D410490)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SET_REUSEPORT_OFFSET UNITYSDK_OFFSET(0x1D410520)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SET_SECURITYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1D4105D0)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SET_SERVERCERTIFICATEVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D410740)
#define SYSTEM_NET_SERVICEPOINTMANAGER_SET_USENAGLEALGORITHM_OFFSET UNITYSDK_OFFSET(0x1D410950)
#define SYSTEM_NET_SERVICEPOINTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D40FD40)
#define SYSTEM_NET_SERVICEPOINTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D40FDB0)

namespace System::Net
{
	inline static constexpr unsigned int ServicePointManager_TypeDefinitionIndex = 3554;

	class ServicePointManager : public ::System::Object
	{
	public:
		static ::System::Collections::Specialized::HybridDictionary** StaticGet_servicePoints()
		{
			return (::System::Collections::Specialized::HybridDictionary**)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0x23D0);
		}
		static ::System::Net::ServerCertValidationCallback** StaticGet_server_cert_cb()
		{
			return (::System::Net::ServerCertValidationCallback**)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0x23D8);
		}
		static ::System::Net::ICertificatePolicy** StaticGet_policy()
		{
			return (::System::Net::ICertificatePolicy**)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0x23E0);
		}
		static ::System::Int32* StaticGet_defaultConnectionLimit()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0xF00);
		}
		static ::System::Int32* StaticGet_tcp_keepalive_interval()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0xF04);
		}
		static ::System::Int32* StaticGet_maxServicePointIdleTime()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0xF08);
		}
		static ::System::Int32* StaticGet_maxServicePoints()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0xF0C);
		}
		static ::System::Boolean* StaticGet_useNagle()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0xF10);
		}
		static ::System::Boolean* StaticGet_tcp_keepalive()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0xF11);
		}
		static ::System::Boolean* StaticGet__checkCRL()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0xF12);
		}
		static ::System::Boolean* StaticGet_expectContinue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0xF13);
		}
		static ::System::Int32* StaticGet_tcp_keepalive_time()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0xF14);
		}
		static ::System::Int32* StaticGet_dnsRefreshTimeout()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0xF18);
		}
		static ::System::Net::SecurityProtocolType* StaticGet__securityProtocol()
		{
			return (::System::Net::SecurityProtocolType*)Il2CppClass::FromTypeDefinitionIndex(ServicePointManager_TypeDefinitionIndex)->GetStaticField(0xF1C);
		}
		// static const ::System::Int32 DefaultNonPersistentConnectionLimit = 0x4; // 0x0
		// static const ::System::Int32 DefaultPersistentConnectionLimit = 0x2; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Net::ICertificatePolicy* get_CertificatePolicy()
		{
			return ((::System::Net::ICertificatePolicy*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GET_CERTIFICATEPOLICY_OFFSET))();
		}

		static ::System::Void set_CertificatePolicy(::System::Net::ICertificatePolicy* value)
		{
			return ((::System::Void(*)(::System::Net::ICertificatePolicy*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SET_CERTIFICATEPOLICY_OFFSET))(value);
		}

		static ::System::Net::ICertificatePolicy* GetLegacyCertificatePolicy()
		{
			return ((::System::Net::ICertificatePolicy*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GETLEGACYCERTIFICATEPOLICY_OFFSET))();
		}

		static ::System::Boolean get_CheckCertificateRevocationList()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GET_CHECKCERTIFICATEREVOCATIONLIST_OFFSET))();
		}

		static ::System::Void set_CheckCertificateRevocationList(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SET_CHECKCERTIFICATEREVOCATIONLIST_OFFSET))(value);
		}

		static ::System::Int32 get_DefaultConnectionLimit()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GET_DEFAULTCONNECTIONLIMIT_OFFSET))();
		}

		static ::System::Void set_DefaultConnectionLimit(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SET_DEFAULTCONNECTIONLIMIT_OFFSET))(value);
		}

		static ::System::Exception* GetMustImplement()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GETMUSTIMPLEMENT_OFFSET))();
		}

		static ::System::Int32 get_DnsRefreshTimeout()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GET_DNSREFRESHTIMEOUT_OFFSET))();
		}

		static ::System::Void set_DnsRefreshTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SET_DNSREFRESHTIMEOUT_OFFSET))(value);
		}

		static ::System::Boolean get_EnableDnsRoundRobin()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GET_ENABLEDNSROUNDROBIN_OFFSET))();
		}

		static ::System::Void set_EnableDnsRoundRobin(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SET_ENABLEDNSROUNDROBIN_OFFSET))(value);
		}

		static ::System::Int32 get_MaxServicePointIdleTime()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GET_MAXSERVICEPOINTIDLETIME_OFFSET))();
		}

		static ::System::Void set_MaxServicePointIdleTime(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SET_MAXSERVICEPOINTIDLETIME_OFFSET))(value);
		}

		static ::System::Int32 get_MaxServicePoints()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GET_MAXSERVICEPOINTS_OFFSET))();
		}

		static ::System::Void set_MaxServicePoints(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SET_MAXSERVICEPOINTS_OFFSET))(value);
		}

		static ::System::Boolean get_ReusePort()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GET_REUSEPORT_OFFSET))();
		}

		static ::System::Void set_ReusePort(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SET_REUSEPORT_OFFSET))(value);
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

		static ::System::Net::Security::RemoteCertificateValidationCallback* get_ServerCertificateValidationCallback()
		{
			return ((::System::Net::Security::RemoteCertificateValidationCallback*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GET_SERVERCERTIFICATEVALIDATIONCALLBACK_OFFSET))();
		}

		static ::System::Void set_ServerCertificateValidationCallback(::System::Net::Security::RemoteCertificateValidationCallback* value)
		{
			return ((::System::Void(*)(::System::Net::Security::RemoteCertificateValidationCallback*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SET_SERVERCERTIFICATEVALIDATIONCALLBACK_OFFSET))(value);
		}

		static ::System::Net::Security::EncryptionPolicy get_EncryptionPolicy()
		{
			return ((::System::Net::Security::EncryptionPolicy(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GET_ENCRYPTIONPOLICY_OFFSET))();
		}

		static ::System::Boolean get_Expect100Continue()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GET_EXPECT100CONTINUE_OFFSET))();
		}

		static ::System::Void set_Expect100Continue(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SET_EXPECT100CONTINUE_OFFSET))(value);
		}

		static ::System::Boolean get_UseNagleAlgorithm()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GET_USENAGLEALGORITHM_OFFSET))();
		}

		static ::System::Void set_UseNagleAlgorithm(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SET_USENAGLEALGORITHM_OFFSET))(value);
		}

		static ::System::Boolean get_DisableStrongCrypto()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GET_DISABLESTRONGCRYPTO_OFFSET))();
		}

		static ::System::Boolean get_DisableSendAuxRecord()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_GET_DISABLESENDAUXRECORD_OFFSET))();
		}

		static ::System::Void SetTcpKeepAlive(::System::Boolean enabled, ::System::Int32 keepAliveTime, ::System::Int32 keepAliveInterval)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_SETTCPKEEPALIVE_OFFSET))(enabled, keepAliveTime, keepAliveInterval);
		}

		static ::System::Net::ServicePoint* FindServicePoint(::System::Uri* address)
		{
			return ((::System::Net::ServicePoint*(*)(::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_FINDSERVICEPOINT_OFFSET))(address);
		}

		static ::System::Net::ServicePoint* FindServicePoint_1(::System::String* uriString, ::System::Net::IWebProxy* proxy)
		{
			return ((::System::Net::ServicePoint*(*)(::System::String*, ::System::Net::IWebProxy*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_FINDSERVICEPOINT_1_OFFSET))(uriString, proxy);
		}

		static ::System::Net::ServicePoint* FindServicePoint_2(::System::Uri* address, ::System::Net::IWebProxy* proxy)
		{
			return ((::System::Net::ServicePoint*(*)(::System::Uri*, ::System::Net::IWebProxy*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_FINDSERVICEPOINT_2_OFFSET))(address, proxy);
		}

		static ::System::Void CloseConnectionGroup(::System::String* connectionGroupName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SERVICEPOINTMANAGER_CLOSECONNECTIONGROUP_OFFSET))(connectionGroupName);
		}
	};
}
