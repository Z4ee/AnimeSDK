#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/DecompressionMethods.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Net/HttpWebRequest_AuthorizationState.h"
#include "unitysdk/System/Net/WebExceptionStatus.h"
#include "unitysdk/System/Net/WebRequest.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace Mono::Security::Interface { class MonoTlsProvider; }
namespace Mono::Security::Interface { class MonoTlsSettings; }
namespace System { class AsyncCallback; }
namespace System { class EventHandler; }
namespace System { class Exception; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Uri; }
namespace System { class Version; }
namespace System { template <typename T> class Action_1; }
namespace System::IO { class Stream; }
namespace System::Net { class CookieContainer; }
namespace System::Net { class HttpContinueDelegate; }
namespace System::Net { class HttpWebResponse; }
namespace System::Net { class ICredentials; }
namespace System::Net { class IWebProxy; }
namespace System::Net { class ServerCertValidationCallback; }
namespace System::Net { class ServicePoint; }
namespace System::Net { class SimpleAsyncCallback; }
namespace System::Net { class SimpleAsyncResult; }
namespace System::Net { class WebAsyncResult; }
namespace System::Net { class WebConnection; }
namespace System::Net { class WebConnectionData; }
namespace System::Net { class WebConnectionStream; }
namespace System::Net { class WebHeaderCollection; }
namespace System::Net { class WebResponse; }
namespace System::Net::Security { class RemoteCertificateValidationCallback; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define SYSTEM_NET_HTTPWEBREQUEST_ABORT_OFFSET UNITYSDK_OFFSET(0x186EE290)
#define SYSTEM_NET_HTTPWEBREQUEST_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x186EDA50)
#define SYSTEM_NET_HTTPWEBREQUEST_ADDRANGE_2_OFFSET UNITYSDK_OFFSET(0x186ED730)
#define SYSTEM_NET_HTTPWEBREQUEST_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x186ED720)
#define SYSTEM_NET_HTTPWEBREQUEST_BEGINGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x186EDA60)
#define SYSTEM_NET_HTTPWEBREQUEST_BEGINGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x186EEA10)
#define SYSTEM_NET_HTTPWEBREQUEST_CHECKAUTHORIZATION_OFFSET UNITYSDK_OFFSET(0x186F3D70)
#define SYSTEM_NET_HTTPWEBREQUEST_CHECKFINALSTATUS_OFFSET UNITYSDK_OFFSET(0x186F31E0)
#define SYSTEM_NET_HTTPWEBREQUEST_CHECKIFFORCEWRITE_OFFSET UNITYSDK_OFFSET(0x186EE830)
#define SYSTEM_NET_HTTPWEBREQUEST_CHECKREQUESTSTARTED_OFFSET UNITYSDK_OFFSET(0x186EC5A0)
#define SYSTEM_NET_HTTPWEBREQUEST_CHECKSENDERROR_OFFSET UNITYSDK_OFFSET(0x186F1FC0)
#define SYSTEM_NET_HTTPWEBREQUEST_CHECKVALIDHOST_OFFSET UNITYSDK_OFFSET(0x186ECBA0)
#define SYSTEM_NET_HTTPWEBREQUEST_DOCONTINUEDELEGATE_OFFSET UNITYSDK_OFFSET(0x186EF630)
#define SYSTEM_NET_HTTPWEBREQUEST_DOPREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x186F0D40)
#define SYSTEM_NET_HTTPWEBREQUEST_ENDGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x186EDFA0)
#define SYSTEM_NET_HTTPWEBREQUEST_ENDGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x186EEDA0)
#define SYSTEM_NET_HTTPWEBREQUEST_GETHEADERS_OFFSET UNITYSDK_OFFSET(0x186EFF90)
#define SYSTEM_NET_HTTPWEBREQUEST_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x186EEF30)
#define SYSTEM_NET_HTTPWEBREQUEST_GETREQUESTHEADERS_OFFSET UNITYSDK_OFFSET(0x186F1390)
#define SYSTEM_NET_HTTPWEBREQUEST_GETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x186EE060)
#define SYSTEM_NET_HTTPWEBREQUEST_GETRESPONSE_OFFSET UNITYSDK_OFFSET(0x186D8B50)
#define SYSTEM_NET_HTTPWEBREQUEST_GETSERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x186ED2E0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_ABORTED_OFFSET UNITYSDK_OFFSET(0x186EDF80)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x186EC4F0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_ALLOWWRITESTREAMBUFFERING_OFFSET UNITYSDK_OFFSET(0x186EC520)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_AUTHURI_OFFSET UNITYSDK_OFFSET(0x186ED660)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_AUTOMATICDECOMPRESSION_OFFSET UNITYSDK_OFFSET(0x186EC540)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_CLIENTCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x186EC820)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x186EC8B0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x186EC9A0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_EXPECTCONTINUE_OFFSET UNITYSDK_OFFSET(0x186ED640)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_FINISHEDREADING_OFFSET UNITYSDK_OFFSET(0x186EEED0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x186EC9C0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_HOST_OFFSET UNITYSDK_OFFSET(0x186EC9D0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_INTERNALALLOWBUFFERING_OFFSET UNITYSDK_OFFSET(0x186EC5F0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_KEEPALIVE_OFFSET UNITYSDK_OFFSET(0x186ECCA0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_METHODWITHBUFFER_OFFSET UNITYSDK_OFFSET(0x186EC700)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x186ECDB0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x186ED030)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_PROXYQUERY_OFFSET UNITYSDK_OFFSET(0x186ED670)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x186ED270)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_READWRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x186ECD10)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_REQUESTURI_OFFSET UNITYSDK_OFFSET(0x186ED420)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_REUSECONNECTION_OFFSET UNITYSDK_OFFSET(0x186F41E0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_SENDCHUNKED_OFFSET UNITYSDK_OFFSET(0x186ED430)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_SERVERCERTVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x186ED6B0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_SERVICEPOINTNOLOCK_OFFSET UNITYSDK_OFFSET(0x186ED4A0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_SERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x186ED490)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_THROWONERROR_OFFSET UNITYSDK_OFFSET(0x186EC960)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x186ED4B0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_TLSPROVIDER_OFFSET UNITYSDK_OFFSET(0x186EC800)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_TLSSETTINGS_OFFSET UNITYSDK_OFFSET(0x186EC810)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_TRANSFERENCODING_OFFSET UNITYSDK_OFFSET(0x186ED510)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_UNSAFEAUTHENTICATEDCONNECTIONSHARING_OFFSET UNITYSDK_OFFSET(0x186ED630)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x186ED540)
#define SYSTEM_NET_HTTPWEBREQUEST_HANDLENTLMAUTH_OFFSET UNITYSDK_OFFSET(0x186F2140)
#define SYSTEM_NET_HTTPWEBREQUEST_REDIRECT_OFFSET UNITYSDK_OFFSET(0x186EF6B0)
#define SYSTEM_NET_HTTPWEBREQUEST_RESETAUTHORIZATION_OFFSET UNITYSDK_OFFSET(0x186EBE70)
#define SYSTEM_NET_HTTPWEBREQUEST_REWRITEREDIRECTTOGET_OFFSET UNITYSDK_OFFSET(0x186EF640)
#define SYSTEM_NET_HTTPWEBREQUEST_SETRESPONSEDATA_OFFSET UNITYSDK_OFFSET(0x186F2450)
#define SYSTEM_NET_HTTPWEBREQUEST_SETRESPONSEERROR_OFFSET UNITYSDK_OFFSET(0x186F1BF0)
#define SYSTEM_NET_HTTPWEBREQUEST_SETSPECIALHEADERS_OFFSET UNITYSDK_OFFSET(0x186EC3A0)
#define SYSTEM_NET_HTTPWEBREQUEST_SETWRITESTREAMERROR_1_OFFSET UNITYSDK_OFFSET(0x186F1B70)
#define SYSTEM_NET_HTTPWEBREQUEST_SETWRITESTREAMERROR_OFFSET UNITYSDK_OFFSET(0x186F1010)
#define SYSTEM_NET_HTTPWEBREQUEST_SETWRITESTREAMINNER_OFFSET UNITYSDK_OFFSET(0x186F1B30)
#define SYSTEM_NET_HTTPWEBREQUEST_SETWRITESTREAM_OFFSET UNITYSDK_OFFSET(0x186F1A00)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x186EC500)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_ALLOWAUTOREDIRECT_OFFSET UNITYSDK_OFFSET(0x186EC510)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_ALLOWWRITESTREAMBUFFERING_OFFSET UNITYSDK_OFFSET(0x186EC530)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_AUTOMATICDECOMPRESSION_OFFSET UNITYSDK_OFFSET(0x186EC550)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_CONNECTIONGROUPNAME_OFFSET UNITYSDK_OFFSET(0x186EC8A0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x186EC8C0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x186EC980)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_COOKIECONTAINER_OFFSET UNITYSDK_OFFSET(0x186EC990)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x186EC9B0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_EXPECTCONTINUE_OFFSET UNITYSDK_OFFSET(0x186ED650)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_FINISHEDREADING_OFFSET UNITYSDK_OFFSET(0x186EEEE0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_HOST_OFFSET UNITYSDK_OFFSET(0x186ECA70)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_INTERNALCONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x186EC950)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_KEEPALIVE_OFFSET UNITYSDK_OFFSET(0x186ECCB0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_MAXIMUMAUTOMATICREDIRECTIONS_OFFSET UNITYSDK_OFFSET(0x186ECCC0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x186ECDC0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x186ED020)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x186ED040)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_PROXY_OFFSET UNITYSDK_OFFSET(0x186ED280)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_READWRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x186ECD20)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_REUSECONNECTION_OFFSET UNITYSDK_OFFSET(0x186F41F0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_SENDCHUNKED_OFFSET UNITYSDK_OFFSET(0x186ED440)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_SERVERCERTIFICATEVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x186ED6C0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_THROWONERROR_OFFSET UNITYSDK_OFFSET(0x186EC970)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x186ED4C0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x186ED5B0)
#define SYSTEM_NET_HTTPWEBREQUEST_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x186EEF20)
#define SYSTEM_NET_HTTPWEBREQUEST__CCTOR_OFFSET UNITYSDK_OFFSET(0x186EBE30)
#define SYSTEM_NET_HTTPWEBREQUEST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x186EBE90)
#define SYSTEM_NET_HTTPWEBREQUEST__CTOR_2_OFFSET UNITYSDK_OFFSET(0x186F4580)
#define SYSTEM_NET_HTTPWEBREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x186EB8E0)
#define SYSTEM_NET_HTTPWEBREQUEST__SETWRITESTREAMINNER_B__259_0_OFFSET UNITYSDK_OFFSET(0x186F43D0)
#define SYSTEM_NET_HTTPWEBREQUEST__SETWRITESTREAM_B__258_0_OFFSET UNITYSDK_OFFSET(0x186F4200)
#define SYSTEM_NET_HTTPWEBREQUEST__SETWRITESTREAM_B__258_1_OFFSET UNITYSDK_OFFSET(0x186F42F0)

namespace System::Net
{
	inline static constexpr unsigned int HttpWebRequest_TypeDefinitionIndex = 2845;

	class HttpWebRequest : public ::System::Net::WebRequest
	{
	public:
		static ::System::Int32* StaticGet_defaultMaxResponseHeadersLength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HttpWebRequest_TypeDefinitionIndex)->GetStaticField(0x5670);
		}
		::System::Net::HttpWebRequest_AuthorizationState proxy_auth_state; // 0x38
		::System::String* mediaType; // 0x48
		::System::Net::HttpContinueDelegate* continueDelegate; // 0x50
		::System::Net::WebHeaderCollection* webHeaders; // 0x58
		::System::Uri* actualUri; // 0x60
		::System::String* method; // 0x68
		::System::Net::WebAsyncResult* asyncRead; // 0x70
		::System::Net::HttpWebResponse* webResponse; // 0x78
		::System::Net::IWebProxy* proxy; // 0x80
		::System::Net::WebAsyncResult* asyncWrite; // 0x88
		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates; // 0x90
		::System::String* connectionGroup; // 0x98
		::System::String* host; // 0xA0
		::System::Version* version; // 0xA8
		::System::String* initialMethod; // 0xB0
		::System::Net::WebConnection* WebConnection; // 0xB8
		::System::Object* locker; // 0xC0
		::Mono::Security::Interface::MonoTlsSettings* tlsSettings; // 0xC8
		::System::Action_1<::System::IO::Stream*>* ResendContentFactory; // 0xD0
		::System::Net::CookieContainer* cookieContainer; // 0xD8
		::System::Net::ServerCertValidationCallback* certValidationCallback; // 0xE0
		::System::Net::HttpWebRequest_AuthorizationState auth_state; // 0xE8
		::System::Net::WebConnectionStream* writeStream; // 0xF8
		::System::Net::ICredentials* credentials; // 0x100
		::Il2CppArray<::System::Byte>* bodyBuffer; // 0x108
		::System::Net::WebConnection* StoredConnection; // 0x110
		::System::Exception* saved_exc; // 0x118
		::System::Uri* requestUri; // 0x120
		::System::Version* actualVersion; // 0x128
		::System::EventHandler* abortHandler; // 0x130
		::Mono::Security::Interface::MonoTlsProvider* tlsProvider; // 0x138
		::System::Net::ServicePoint* servicePoint; // 0x140
		::System::Int32 maxResponseHeadersLength; // 0x148
		::System::Int32 maxAutoRedirect; // 0x14C
		::System::Boolean preAuthenticate; // 0x150
		::System::Boolean finished_reading; // 0x151
		::System::Boolean force_version; // 0x152
		::System::Boolean requestSent; // 0x153
		::System::Int32 readWriteTimeout; // 0x154
		::System::Int64 contentLength; // 0x158
		::System::Boolean haveResponse; // 0x160
		::System::Boolean allowBuffering; // 0x161
		::System::Boolean _ThrowOnError_k__BackingField; // 0x162
		::System::Boolean unsafe_auth_blah; // 0x163
		::System::Net::DecompressionMethods auto_decomp; // 0x164
		::System::Boolean haveRequest; // 0x168
		::System::Boolean usedPreAuth; // 0x169
		::System::Boolean expectContinue; // 0x16A
		::System::Boolean gotRequestStream; // 0x16B
		::System::Boolean haveContentLength; // 0x16C
		::System::Boolean sendChunked; // 0x16D
		::System::Boolean allowAutoRedirect; // 0x16E
		::System::Boolean getResponseCalled; // 0x16F
		::System::Int32 bodyBufferLength; // 0x170
		::System::Int32 timeout; // 0x174
		::System::Int32 aborted; // 0x178
		::System::Int32 redirects; // 0x17C
		::System::Boolean _ReuseConnection_k__BackingField; // 0x180
		::System::Boolean pipelined; // 0x181
		::System::Boolean keepAlive; // 0x182
		::System::Boolean hostChanged; // 0x183

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Uri* uri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST__CTOR_OFFSET))(this, uri);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST__CTOR_1_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST__CTOR_2_OFFSET))(this);
		}

		::System::Void ResetAuthorization()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_RESETAUTHORIZATION_OFFSET))(this);
		}

		::System::Void SetSpecialHeaders(::System::String* HeaderName, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SETSPECIALHEADERS_OFFSET))(this, HeaderName, value);
		}

		::System::Uri* get_Address()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_ADDRESS_OFFSET))(this);
		}

		::System::Void set_Address(::System::Uri* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_ADDRESS_OFFSET))(this, value);
		}

		::System::Void set_AllowAutoRedirect(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_ALLOWAUTOREDIRECT_OFFSET))(this, value);
		}

		::System::Boolean get_AllowWriteStreamBuffering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_ALLOWWRITESTREAMBUFFERING_OFFSET))(this);
		}

		::System::Void set_AllowWriteStreamBuffering(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_ALLOWWRITESTREAMBUFFERING_OFFSET))(this, value);
		}

		::System::Net::DecompressionMethods get_AutomaticDecompression()
		{
			return ((::System::Net::DecompressionMethods(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_AUTOMATICDECOMPRESSION_OFFSET))(this);
		}

		::System::Void set_AutomaticDecompression(::System::Net::DecompressionMethods value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::DecompressionMethods))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_AUTOMATICDECOMPRESSION_OFFSET))(this, value);
		}

		::System::Boolean get_InternalAllowBuffering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_INTERNALALLOWBUFFERING_OFFSET))(this);
		}

		::System::Boolean get_MethodWithBuffer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_METHODWITHBUFFER_OFFSET))(this);
		}

		::Mono::Security::Interface::MonoTlsProvider* get_TlsProvider()
		{
			return ((::Mono::Security::Interface::MonoTlsProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_TLSPROVIDER_OFFSET))(this);
		}

		::Mono::Security::Interface::MonoTlsSettings* get_TlsSettings()
		{
			return ((::Mono::Security::Interface::MonoTlsSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_TLSSETTINGS_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_CLIENTCERTIFICATES_OFFSET))(this);
		}

		::System::Void set_ConnectionGroupName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_CONNECTIONGROUPNAME_OFFSET))(this, value);
		}

		::System::Int64 get_ContentLength()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_CONTENTLENGTH_OFFSET))(this);
		}

		::System::Void set_ContentLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_CONTENTLENGTH_OFFSET))(this, value);
		}

		::System::Void set_InternalContentLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_INTERNALCONTENTLENGTH_OFFSET))(this, value);
		}

		::System::Boolean get_ThrowOnError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_THROWONERROR_OFFSET))(this);
		}

		::System::Void set_ThrowOnError(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_THROWONERROR_OFFSET))(this, value);
		}

		::System::Void set_ContentType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_CONTENTTYPE_OFFSET))(this, value);
		}

		::System::Void set_CookieContainer(::System::Net::CookieContainer* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::CookieContainer*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_COOKIECONTAINER_OFFSET))(this, value);
		}

		::System::Net::ICredentials* get_Credentials()
		{
			return ((::System::Net::ICredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_CREDENTIALS_OFFSET))(this);
		}

		::System::Void set_Credentials(::System::Net::ICredentials* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_CREDENTIALS_OFFSET))(this, value);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return ((::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_HEADERS_OFFSET))(this);
		}

		::System::String* get_Host()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_HOST_OFFSET))(this);
		}

		::System::Void set_Host(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_HOST_OFFSET))(this, value);
		}

		static ::System::Boolean CheckValidHost(::System::String* scheme, ::System::String* val)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_CHECKVALIDHOST_OFFSET))(scheme, val);
		}

		::System::Boolean get_KeepAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_KEEPALIVE_OFFSET))(this);
		}

		::System::Void set_KeepAlive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_KEEPALIVE_OFFSET))(this, value);
		}

		::System::Void set_MaximumAutomaticRedirections(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_MAXIMUMAUTOMATICREDIRECTIONS_OFFSET))(this, value);
		}

		::System::Int32 get_ReadWriteTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_READWRITETIMEOUT_OFFSET))(this);
		}

		::System::Void set_ReadWriteTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_READWRITETIMEOUT_OFFSET))(this, value);
		}

		::System::String* get_Method()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_METHOD_OFFSET))(this);
		}

		::System::Void set_Method(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_METHOD_OFFSET))(this, value);
		}

		::System::Void set_PreAuthenticate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_PREAUTHENTICATE_OFFSET))(this, value);
		}

		::System::Version* get_ProtocolVersion()
		{
			return ((::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_PROTOCOLVERSION_OFFSET))(this);
		}

		::System::Void set_ProtocolVersion(::System::Version* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Version*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_PROTOCOLVERSION_OFFSET))(this, value);
		}

		::System::Net::IWebProxy* get_Proxy()
		{
			return ((::System::Net::IWebProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_PROXY_OFFSET))(this);
		}

		::System::Void set_Proxy(::System::Net::IWebProxy* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IWebProxy*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_PROXY_OFFSET))(this, value);
		}

		::System::Uri* get_RequestUri()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_REQUESTURI_OFFSET))(this);
		}

		::System::Boolean get_SendChunked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_SENDCHUNKED_OFFSET))(this);
		}

		::System::Void set_SendChunked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_SENDCHUNKED_OFFSET))(this, value);
		}

		::System::Net::ServicePoint* get_ServicePoint()
		{
			return ((::System::Net::ServicePoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_SERVICEPOINT_OFFSET))(this);
		}

		::System::Net::ServicePoint* get_ServicePointNoLock()
		{
			return ((::System::Net::ServicePoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_SERVICEPOINTNOLOCK_OFFSET))(this);
		}

		::System::Int32 get_Timeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_TIMEOUT_OFFSET))(this);
		}

		::System::Void set_Timeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_TIMEOUT_OFFSET))(this, value);
		}

		::System::String* get_TransferEncoding()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_TRANSFERENCODING_OFFSET))(this);
		}

		::System::Boolean get_UseDefaultCredentials()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_USEDEFAULTCREDENTIALS_OFFSET))(this);
		}

		::System::Void set_UseDefaultCredentials(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_USEDEFAULTCREDENTIALS_OFFSET))(this, value);
		}

		::System::Boolean get_UnsafeAuthenticatedConnectionSharing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_UNSAFEAUTHENTICATEDCONNECTIONSHARING_OFFSET))(this);
		}

		::System::Boolean get_ExpectContinue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_EXPECTCONTINUE_OFFSET))(this);
		}

		::System::Void set_ExpectContinue(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_EXPECTCONTINUE_OFFSET))(this, value);
		}

		::System::Uri* get_AuthUri()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_AUTHURI_OFFSET))(this);
		}

		::System::Boolean get_ProxyQuery()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_PROXYQUERY_OFFSET))(this);
		}

		::System::Net::ServerCertValidationCallback* get_ServerCertValidationCallback()
		{
			return ((::System::Net::ServerCertValidationCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_SERVERCERTVALIDATIONCALLBACK_OFFSET))(this);
		}

		::System::Void set_ServerCertificateValidationCallback(::System::Net::Security::RemoteCertificateValidationCallback* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Security::RemoteCertificateValidationCallback*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_SERVERCERTIFICATEVALIDATIONCALLBACK_OFFSET))(this, value);
		}

		::System::Net::ServicePoint* GetServicePoint()
		{
			return ((::System::Net::ServicePoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GETSERVICEPOINT_OFFSET))(this);
		}

		::System::Void AddRange(::System::Int32 range)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_ADDRANGE_OFFSET))(this, range);
		}

		::System::Void AddRange_1(::System::Int64 range)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_ADDRANGE_1_OFFSET))(this, range);
		}

		::System::Void AddRange_2(::System::String* rangeSpecifier, ::System::Int64 range)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_ADDRANGE_2_OFFSET))(this, rangeSpecifier, range);
		}

		::System::IAsyncResult* BeginGetRequestStream(::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_BEGINGETREQUESTSTREAM_OFFSET))(this, callback, state);
		}

		::System::IO::Stream* EndGetRequestStream(::System::IAsyncResult* asyncResult)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_ENDGETREQUESTSTREAM_OFFSET))(this, asyncResult);
		}

		::System::IO::Stream* GetRequestStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GETREQUESTSTREAM_OFFSET))(this);
		}

		::System::Boolean CheckIfForceWrite(::System::Net::SimpleAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::SimpleAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_CHECKIFFORCEWRITE_OFFSET))(this, result);
		}

		::System::IAsyncResult* BeginGetResponse(::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_BEGINGETRESPONSE_OFFSET))(this, callback, state);
		}

		::System::Net::WebResponse* EndGetResponse(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Net::WebResponse*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_ENDGETRESPONSE_OFFSET))(this, asyncResult);
		}

		::System::Net::WebResponse* GetResponse()
		{
			return ((::System::Net::WebResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GETRESPONSE_OFFSET))(this);
		}

		::System::Boolean get_FinishedReading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_FINISHEDREADING_OFFSET))(this);
		}

		::System::Void set_FinishedReading(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_FINISHEDREADING_OFFSET))(this, value);
		}

		::System::Boolean get_Aborted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_ABORTED_OFFSET))(this);
		}

		::System::Void Abort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_ABORT_OFFSET))(this);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void CheckRequestStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_CHECKREQUESTSTARTED_OFFSET))(this);
		}

		::System::Void DoContinueDelegate(::System::Int32 statusCode, ::System::Net::WebHeaderCollection* headers)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Net::WebHeaderCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_DOCONTINUEDELEGATE_OFFSET))(this, statusCode, headers);
		}

		::System::Void RewriteRedirectToGet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_REWRITEREDIRECTTOGET_OFFSET))(this);
		}

		::System::Boolean Redirect(::System::Net::WebAsyncResult* result, ::System::Net::HttpStatusCode code, ::System::Net::WebResponse* response)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::WebAsyncResult*, ::System::Net::HttpStatusCode, ::System::Net::WebResponse*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_REDIRECT_OFFSET))(this, result, code, response);
		}

		::System::String* GetHeaders()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GETHEADERS_OFFSET))(this);
		}

		::System::Void DoPreAuthenticate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_DOPREAUTHENTICATE_OFFSET))(this);
		}

		::System::Void SetWriteStreamError(::System::Net::WebExceptionStatus status, ::System::Exception* exc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebExceptionStatus, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SETWRITESTREAMERROR_OFFSET))(this, status, exc);
		}

		::Il2CppArray<::System::Byte>* GetRequestHeaders()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GETREQUESTHEADERS_OFFSET))(this);
		}

		::System::Void SetWriteStream(::System::Net::WebConnectionStream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebConnectionStream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SETWRITESTREAM_OFFSET))(this, stream);
		}

		::System::Void SetWriteStreamInner(::System::Net::SimpleAsyncCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::SimpleAsyncCallback*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SETWRITESTREAMINNER_OFFSET))(this, callback);
		}

		::System::Void SetWriteStreamError_1(::System::Exception* exc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SETWRITESTREAMERROR_1_OFFSET))(this, exc);
		}

		::System::Void SetResponseError(::System::Net::WebExceptionStatus status, ::System::Exception* e, ::System::String* where)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebExceptionStatus, ::System::Exception*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SETRESPONSEERROR_OFFSET))(this, status, e, where);
		}

		::System::Void CheckSendError(::System::Net::WebConnectionData* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebConnectionData*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_CHECKSENDERROR_OFFSET))(this, data);
		}

		::System::Boolean HandleNtlmAuth(::System::Net::WebAsyncResult* r)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::WebAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_HANDLENTLMAUTH_OFFSET))(this, r);
		}

		::System::Void SetResponseData(::System::Net::WebConnectionData* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebConnectionData*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SETRESPONSEDATA_OFFSET))(this, data);
		}

		::System::Boolean CheckAuthorization(::System::Net::WebResponse* response, ::System::Net::HttpStatusCode code)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::WebResponse*, ::System::Net::HttpStatusCode))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_CHECKAUTHORIZATION_OFFSET))(this, response, code);
		}

		::System::Boolean CheckFinalStatus(::System::Net::WebAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::WebAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_CHECKFINALSTATUS_OFFSET))(this, result);
		}

		::System::Boolean get_ReuseConnection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_REUSECONNECTION_OFFSET))(this);
		}

		::System::Void set_ReuseConnection(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_REUSECONNECTION_OFFSET))(this, value);
		}

		::System::Void _SetWriteStream_b__258_0(::System::Net::SimpleAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::SimpleAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST__SETWRITESTREAM_B__258_0_OFFSET))(this, result);
		}

		::System::Void _SetWriteStream_b__258_1(::System::Net::SimpleAsyncResult* inner)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::SimpleAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST__SETWRITESTREAM_B__258_1_OFFSET))(this, inner);
		}

		::System::Boolean _SetWriteStreamInner_b__259_0(::System::Net::SimpleAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::SimpleAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST__SETWRITESTREAMINNER_B__259_0_OFFSET))(this, result);
		}
	};
}
