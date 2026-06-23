#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
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
namespace System::Net { class TransportContext; }
namespace System::Net { class WebAsyncResult; }
namespace System::Net { class WebConnection; }
namespace System::Net { class WebConnectionData; }
namespace System::Net { class WebConnectionStream; }
namespace System::Net { class WebHeaderCollection; }
namespace System::Net { class WebResponse; }
namespace System::Net::Security { class RemoteCertificateValidationCallback; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_NET_HTTPWEBREQUEST_ABORT_OFFSET UNITYSDK_OFFSET(0x1C65BC50)
#define SYSTEM_NET_HTTPWEBREQUEST_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x1C65B050)
#define SYSTEM_NET_HTTPWEBREQUEST_ADDRANGE_2_OFFSET UNITYSDK_OFFSET(0x1C65B2E0)
#define SYSTEM_NET_HTTPWEBREQUEST_ADDRANGE_3_OFFSET UNITYSDK_OFFSET(0x1C65B2F0)
#define SYSTEM_NET_HTTPWEBREQUEST_ADDRANGE_4_OFFSET UNITYSDK_OFFSET(0x1C65B300)
#define SYSTEM_NET_HTTPWEBREQUEST_ADDRANGE_5_OFFSET UNITYSDK_OFFSET(0x1C65B340)
#define SYSTEM_NET_HTTPWEBREQUEST_ADDRANGE_6_OFFSET UNITYSDK_OFFSET(0x1C65AE40)
#define SYSTEM_NET_HTTPWEBREQUEST_ADDRANGE_7_OFFSET UNITYSDK_OFFSET(0x1C65B0A0)
#define SYSTEM_NET_HTTPWEBREQUEST_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1C65AE00)
#define SYSTEM_NET_HTTPWEBREQUEST_BEGINGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1C65B390)
#define SYSTEM_NET_HTTPWEBREQUEST_BEGINGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1C65C220)
#define SYSTEM_NET_HTTPWEBREQUEST_CHECKAUTHORIZATION_OFFSET UNITYSDK_OFFSET(0x1C660E50)
#define SYSTEM_NET_HTTPWEBREQUEST_CHECKFINALSTATUS_OFFSET UNITYSDK_OFFSET(0x1C6603F0)
#define SYSTEM_NET_HTTPWEBREQUEST_CHECKIFFORCEWRITE_OFFSET UNITYSDK_OFFSET(0x1C65C0F0)
#define SYSTEM_NET_HTTPWEBREQUEST_CHECKREQUESTSTARTED_OFFSET UNITYSDK_OFFSET(0x1C658440)
#define SYSTEM_NET_HTTPWEBREQUEST_CHECKSENDERROR_OFFSET UNITYSDK_OFFSET(0x1C65F420)
#define SYSTEM_NET_HTTPWEBREQUEST_CHECKVALIDHOST_OFFSET UNITYSDK_OFFSET(0x1C659810)
#define SYSTEM_NET_HTTPWEBREQUEST_DOCONTINUEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1C65CFB0)
#define SYSTEM_NET_HTTPWEBREQUEST_DOPREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1C65E210)
#define SYSTEM_NET_HTTPWEBREQUEST_ENDGETREQUESTSTREAM_1_OFFSET UNITYSDK_OFFSET(0x1C65C6B0)
#define SYSTEM_NET_HTTPWEBREQUEST_ENDGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1C65B920)
#define SYSTEM_NET_HTTPWEBREQUEST_ENDGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1C65C580)
#define SYSTEM_NET_HTTPWEBREQUEST_GENERATECONNECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x1C660EA0)
#define SYSTEM_NET_HTTPWEBREQUEST_GETHEADERS_OFFSET UNITYSDK_OFFSET(0x1C65D8D0)
#define SYSTEM_NET_HTTPWEBREQUEST_GETMUSTIMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1C658580)
#define SYSTEM_NET_HTTPWEBREQUEST_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1C65C7B0)
#define SYSTEM_NET_HTTPWEBREQUEST_GETREQUESTHEADERS_OFFSET UNITYSDK_OFFSET(0x1C65E680)
#define SYSTEM_NET_HTTPWEBREQUEST_GETREQUESTSTREAM_1_OFFSET UNITYSDK_OFFSET(0x1C65C0A0)
#define SYSTEM_NET_HTTPWEBREQUEST_GETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1C65BA00)
#define SYSTEM_NET_HTTPWEBREQUEST_GETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1C65C6C0)
#define SYSTEM_NET_HTTPWEBREQUEST_GETSERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x1C65A3D0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_ABORTED_OFFSET UNITYSDK_OFFSET(0x1C65B900)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1C658330)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x1C6584B0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_ALLOWAUTOREDIRECT_OFFSET UNITYSDK_OFFSET(0x1C6584D0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_ALLOWREADSTREAMBUFFERING_OFFSET UNITYSDK_OFFSET(0x1C658510)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_ALLOWWRITESTREAMBUFFERING_OFFSET UNITYSDK_OFFSET(0x1C6584F0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_AUTHURI_OFFSET UNITYSDK_OFFSET(0x1C65ACD0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_AUTOMATICDECOMPRESSION_OFFSET UNITYSDK_OFFSET(0x1C658690)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_CLIENTCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1C658890)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_CONNECTIONGROUPNAME_OFFSET UNITYSDK_OFFSET(0x1C658CB0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x1C658A00)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C658CD0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1C658DF0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_CONTINUEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1C658E90)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_CONTINUETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C659E20)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_COOKIECONTAINER_OFFSET UNITYSDK_OFFSET(0x1C658EB0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1C658ED0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_DATE_OFFSET UNITYSDK_OFFSET(0x1C658EF0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_DEFAULTMAXIMUMERRORRESPONSELENGTH_OFFSET UNITYSDK_OFFSET(0x1C6590D0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_DEFAULTMAXIMUMRESPONSEHEADERSLENGTH_OFFSET UNITYSDK_OFFSET(0x1C659CA0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_EXPECTCONTINUE_OFFSET UNITYSDK_OFFSET(0x1C65ACB0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_EXPECT_OFFSET UNITYSDK_OFFSET(0x1C659150)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_FINISHEDREADING_OFFSET UNITYSDK_OFFSET(0x1C65C780)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_GOTREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1C65ACA0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_HAVERESPONSE_OFFSET UNITYSDK_OFFSET(0x1C6593E0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1C6593F0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_HOST_OFFSET UNITYSDK_OFFSET(0x1C659610)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_IFMODIFIEDSINCE_OFFSET UNITYSDK_OFFSET(0x1C6599C0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_INTERNALALLOWBUFFERING_OFFSET UNITYSDK_OFFSET(0x1C658720)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_KEEPALIVE_OFFSET UNITYSDK_OFFSET(0x1C659BE0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_MAXIMUMAUTOMATICREDIRECTIONS_OFFSET UNITYSDK_OFFSET(0x1C659C00)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_MAXIMUMRESPONSEHEADERSLENGTH_OFFSET UNITYSDK_OFFSET(0x1C659C80)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_MEDIATYPE_OFFSET UNITYSDK_OFFSET(0x1C659EC0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_METHODWITHBUFFER_OFFSET UNITYSDK_OFFSET(0x1C658740)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1C659EE0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_PIPELINED_OFFSET UNITYSDK_OFFSET(0x1C65A120)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1C65A140)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x1C65A160)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_PROXYQUERY_OFFSET UNITYSDK_OFFSET(0x1C65ACE0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x1C65A330)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_READWRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C659D60)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_REFERER_OFFSET UNITYSDK_OFFSET(0x1C65A510)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_REQUESTURI_OFFSET UNITYSDK_OFFSET(0x1C65A6C0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_REUSECONNECTION_OFFSET UNITYSDK_OFFSET(0x1C660E80)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_SENDCHUNKED_OFFSET UNITYSDK_OFFSET(0x1C65A6D0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_SERVERCERTIFICATEVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C65AD30)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_SERVERCERTVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C65AD20)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_SERVICEPOINTNOLOCK_OFFSET UNITYSDK_OFFSET(0x1C65A770)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_SERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x1C65A760)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_SUPPORTSCOOKIECONTAINER_OFFSET UNITYSDK_OFFSET(0x1C65A780)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_THROWONERROR_OFFSET UNITYSDK_OFFSET(0x1C658DD0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C65A790)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_TLSPROVIDER_OFFSET UNITYSDK_OFFSET(0x1C658870)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_TLSSETTINGS_OFFSET UNITYSDK_OFFSET(0x1C658880)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_TRANSFERENCODING_OFFSET UNITYSDK_OFFSET(0x1C65A810)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_UNSAFEAUTHENTICATEDCONNECTIONSHARING_OFFSET UNITYSDK_OFFSET(0x1C65AC80)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1C65AAE0)
#define SYSTEM_NET_HTTPWEBREQUEST_GET_USERAGENT_OFFSET UNITYSDK_OFFSET(0x1C65ABC0)
#define SYSTEM_NET_HTTPWEBREQUEST_HANDLENTLMAUTH_OFFSET UNITYSDK_OFFSET(0x1C65F530)
#define SYSTEM_NET_HTTPWEBREQUEST_REDIRECT_OFFSET UNITYSDK_OFFSET(0x1C65D050)
#define SYSTEM_NET_HTTPWEBREQUEST_RESETAUTHORIZATION_OFFSET UNITYSDK_OFFSET(0x1C657BF0)
#define SYSTEM_NET_HTTPWEBREQUEST_REWRITEREDIRECTTOGET_OFFSET UNITYSDK_OFFSET(0x1C65CFD0)
#define SYSTEM_NET_HTTPWEBREQUEST_SETDATEHEADERHELPER_OFFSET UNITYSDK_OFFSET(0x1C659090)
#define SYSTEM_NET_HTTPWEBREQUEST_SETRESPONSEDATA_OFFSET UNITYSDK_OFFSET(0x1C65F890)
#define SYSTEM_NET_HTTPWEBREQUEST_SETRESPONSEERROR_OFFSET UNITYSDK_OFFSET(0x1C65F110)
#define SYSTEM_NET_HTTPWEBREQUEST_SETSPECIALHEADERS_OFFSET UNITYSDK_OFFSET(0x1C658240)
#define SYSTEM_NET_HTTPWEBREQUEST_SETWRITESTREAMERROR_1_OFFSET UNITYSDK_OFFSET(0x1C65F090)
#define SYSTEM_NET_HTTPWEBREQUEST_SETWRITESTREAMERROR_OFFSET UNITYSDK_OFFSET(0x1C65E4E0)
#define SYSTEM_NET_HTTPWEBREQUEST_SETWRITESTREAMINNER_OFFSET UNITYSDK_OFFSET(0x1C65F030)
#define SYSTEM_NET_HTTPWEBREQUEST_SETWRITESTREAM_OFFSET UNITYSDK_OFFSET(0x1C65EEB0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1C658390)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x1C6584C0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_ALLOWAUTOREDIRECT_OFFSET UNITYSDK_OFFSET(0x1C6584E0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_ALLOWREADSTREAMBUFFERING_OFFSET UNITYSDK_OFFSET(0x1C658520)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_ALLOWWRITESTREAMBUFFERING_OFFSET UNITYSDK_OFFSET(0x1C658500)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_AUTOMATICDECOMPRESSION_OFFSET UNITYSDK_OFFSET(0x1C6586A0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_CLIENTCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1C658990)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_CONNECTIONGROUPNAME_OFFSET UNITYSDK_OFFSET(0x1C658CC0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_CONNECTION_OFFSET UNITYSDK_OFFSET(0x1C658A60)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C658CE0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1C658E50)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_CONTINUEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1C658EA0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_CONTINUETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C659E70)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_COOKIECONTAINER_OFFSET UNITYSDK_OFFSET(0x1C658EC0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1C658EE0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_DATE_OFFSET UNITYSDK_OFFSET(0x1C659020)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_DEFAULTMAXIMUMERRORRESPONSELENGTH_OFFSET UNITYSDK_OFFSET(0x1C659110)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_DEFAULTMAXIMUMRESPONSEHEADERSLENGTH_OFFSET UNITYSDK_OFFSET(0x1C659D00)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_EXPECTCONTINUE_OFFSET UNITYSDK_OFFSET(0x1C65ACC0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_EXPECT_OFFSET UNITYSDK_OFFSET(0x1C6591B0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_FINISHEDREADING_OFFSET UNITYSDK_OFFSET(0x1C65C790)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1C659400)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_HOST_OFFSET UNITYSDK_OFFSET(0x1C6596B0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_IFMODIFIEDSINCE_OFFSET UNITYSDK_OFFSET(0x1C659A90)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_INTERNALCONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C658DC0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_KEEPALIVE_OFFSET UNITYSDK_OFFSET(0x1C659BF0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_MAXIMUMAUTOMATICREDIRECTIONS_OFFSET UNITYSDK_OFFSET(0x1C659C10)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_MAXIMUMRESPONSEHEADERSLENGTH_OFFSET UNITYSDK_OFFSET(0x1C659C90)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_MEDIATYPE_OFFSET UNITYSDK_OFFSET(0x1C659ED0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x1C659EF0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_PIPELINED_OFFSET UNITYSDK_OFFSET(0x1C65A130)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1C65A150)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x1C65A170)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_PROXY_OFFSET UNITYSDK_OFFSET(0x1C65A340)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_READWRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C659D70)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_REFERER_OFFSET UNITYSDK_OFFSET(0x1C65A570)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_REUSECONNECTION_OFFSET UNITYSDK_OFFSET(0x1C660E90)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_SENDCHUNKED_OFFSET UNITYSDK_OFFSET(0x1C65A6E0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_SERVERCERTIFICATEVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C65AD50)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_THROWONERROR_OFFSET UNITYSDK_OFFSET(0x1C658DE0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1C65A7A0)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_TRANSFERENCODING_OFFSET UNITYSDK_OFFSET(0x1C65A870)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_UNSAFEAUTHENTICATEDCONNECTIONSHARING_OFFSET UNITYSDK_OFFSET(0x1C65AC90)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1C65AB50)
#define SYSTEM_NET_HTTPWEBREQUEST_SET_USERAGENT_OFFSET UNITYSDK_OFFSET(0x1C65AC20)
#define SYSTEM_NET_HTTPWEBREQUEST_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1C65C7A0)
#define SYSTEM_NET_HTTPWEBREQUEST__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6579C0)
#define SYSTEM_NET_HTTPWEBREQUEST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C657C20)
#define SYSTEM_NET_HTTPWEBREQUEST__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C657C50)
#define SYSTEM_NET_HTTPWEBREQUEST__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C661250)
#define SYSTEM_NET_HTTPWEBREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6579D0)
#define SYSTEM_NET_HTTPWEBREQUEST__SETWRITESTREAMINNER_B__259_0_OFFSET UNITYSDK_OFFSET(0x1C6611A0)
#define SYSTEM_NET_HTTPWEBREQUEST__SETWRITESTREAM_B__258_0_OFFSET UNITYSDK_OFFSET(0x1C660F70)
#define SYSTEM_NET_HTTPWEBREQUEST__SETWRITESTREAM_B__258_1_OFFSET UNITYSDK_OFFSET(0x1C6610B0)

namespace System::Net
{
	inline static constexpr unsigned int HttpWebRequest_TypeDefinitionIndex = 3534;

	class HttpWebRequest : public ::System::Net::WebRequest
	{
	public:
		static ::System::Int32* StaticGet_defaultMaxResponseHeadersLength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HttpWebRequest_TypeDefinitionIndex)->GetStaticField(0x1380);
		}
		::System::Net::WebAsyncResult* asyncRead; // 0x38
		::System::Net::WebConnectionStream* writeStream; // 0x40
		::System::String* host; // 0x48
		::System::Net::IWebProxy* proxy; // 0x50
		::System::Net::WebConnection* WebConnection; // 0x58
		::System::String* mediaType; // 0x60
		::System::Object* locker; // 0x68
		::System::Net::CookieContainer* cookieContainer; // 0x70
		::System::String* method; // 0x78
		::System::String* connectionGroup; // 0x80
		::System::Net::WebAsyncResult* asyncWrite; // 0x88
		::System::Net::WebConnection* StoredConnection; // 0x90
		::System::Uri* requestUri; // 0x98
		::System::EventHandler* abortHandler; // 0xA0
		::System::Version* actualVersion; // 0xA8
		::System::Action_1<::System::IO::Stream*>* ResendContentFactory; // 0xB0
		::System::Net::HttpContinueDelegate* continueDelegate; // 0xB8
		::Mono::Security::Interface::MonoTlsSettings* tlsSettings; // 0xC0
		::System::Net::HttpWebRequest_AuthorizationState auth_state; // 0xC8
		::System::Exception* saved_exc; // 0xD8
		::System::Net::ICredentials* credentials; // 0xE0
		::System::Net::ServicePoint* servicePoint; // 0xE8
		::System::Uri* actualUri; // 0xF0
		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates; // 0xF8
		::System::Version* version; // 0x100
		::Il2CppArray<::System::Byte>* bodyBuffer; // 0x108
		::System::Net::HttpWebRequest_AuthorizationState proxy_auth_state; // 0x110
		::System::Net::HttpWebResponse* webResponse; // 0x120
		::System::Net::WebHeaderCollection* webHeaders; // 0x128
		::Mono::Security::Interface::MonoTlsProvider* tlsProvider; // 0x130
		::System::String* initialMethod; // 0x138
		::System::Net::ServerCertValidationCallback* certValidationCallback; // 0x140
		::System::Net::DecompressionMethods auto_decomp; // 0x148
		::System::Boolean preAuthenticate; // 0x14C
		::System::Boolean gotRequestStream; // 0x14D
		::System::Boolean expectContinue; // 0x14E
		::System::Boolean _ReuseConnection_k__BackingField; // 0x14F
		::System::Int32 redirects; // 0x150
		::System::Boolean force_version; // 0x154
		::System::Boolean haveRequest; // 0x155
		::System::Boolean pipelined; // 0x156
		::System::Boolean allowBuffering; // 0x157
		::System::Int32 readWriteTimeout; // 0x158
		::System::Boolean allowAutoRedirect; // 0x15C
		::System::Boolean hostChanged; // 0x15D
		::System::Boolean usedPreAuth; // 0x15E
		::System::Boolean keepAlive; // 0x15F
		::System::Int32 timeout; // 0x160
		::System::Int64 contentLength; // 0x168
		::System::Int32 aborted; // 0x170
		::System::Int32 bodyBufferLength; // 0x174
		::System::Int32 maxResponseHeadersLength; // 0x178
		::System::Int32 maxAutoRedirect; // 0x17C
		::System::Boolean haveResponse; // 0x180
		::System::Boolean unsafe_auth_blah; // 0x181
		::System::Boolean getResponseCalled; // 0x182
		::System::Boolean sendChunked; // 0x183
		::System::Boolean _ThrowOnError_k__BackingField; // 0x184
		::System::Boolean finished_reading; // 0x185
		::System::Boolean haveContentLength; // 0x186
		::System::Boolean requestSent; // 0x187

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Uri* uri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST__CTOR_OFFSET))(this, uri);
		}

		::System::Void _ctor_1(::System::Uri* uri, ::Mono::Security::Interface::MonoTlsProvider* tlsProvider, ::Mono::Security::Interface::MonoTlsSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::Mono::Security::Interface::MonoTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST__CTOR_1_OFFSET))(this, uri, tlsProvider, settings);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST__CTOR_2_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void _ctor_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST__CTOR_3_OFFSET))(this);
		}

		::System::Void ResetAuthorization()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_RESETAUTHORIZATION_OFFSET))(this);
		}

		::System::Void SetSpecialHeaders(::System::String* HeaderName, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SETSPECIALHEADERS_OFFSET))(this, HeaderName, value);
		}

		::System::String* get_Accept()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_ACCEPT_OFFSET))(this);
		}

		::System::Void set_Accept(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_ACCEPT_OFFSET))(this, value);
		}

		::System::Uri* get_Address()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_ADDRESS_OFFSET))(this);
		}

		::System::Void set_Address(::System::Uri* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_ADDRESS_OFFSET))(this, value);
		}

		::System::Boolean get_AllowAutoRedirect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_ALLOWAUTOREDIRECT_OFFSET))(this);
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

		::System::Boolean get_AllowReadStreamBuffering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_ALLOWREADSTREAMBUFFERING_OFFSET))(this);
		}

		::System::Void set_AllowReadStreamBuffering(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_ALLOWREADSTREAMBUFFERING_OFFSET))(this, value);
		}

		static ::System::Exception* GetMustImplement()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GETMUSTIMPLEMENT_OFFSET))();
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

		::System::Void set_ClientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_CLIENTCERTIFICATES_OFFSET))(this, value);
		}

		::System::String* get_Connection()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_CONNECTION_OFFSET))(this);
		}

		::System::Void set_Connection(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_CONNECTION_OFFSET))(this, value);
		}

		::System::String* get_ConnectionGroupName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_CONNECTIONGROUPNAME_OFFSET))(this);
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

		::System::String* get_ContentType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::Void set_ContentType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_CONTENTTYPE_OFFSET))(this, value);
		}

		::System::Net::HttpContinueDelegate* get_ContinueDelegate()
		{
			return ((::System::Net::HttpContinueDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_CONTINUEDELEGATE_OFFSET))(this);
		}

		::System::Void set_ContinueDelegate(::System::Net::HttpContinueDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpContinueDelegate*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_CONTINUEDELEGATE_OFFSET))(this, value);
		}

		::System::Net::CookieContainer* get_CookieContainer()
		{
			return ((::System::Net::CookieContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_COOKIECONTAINER_OFFSET))(this);
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

		::System::DateTime get_Date()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_DATE_OFFSET))(this);
		}

		::System::Void set_Date(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_DATE_OFFSET))(this, value);
		}

		::System::Void SetDateHeaderHelper(::System::String* headerName, ::System::DateTime dateTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SETDATEHEADERHELPER_OFFSET))(this, headerName, dateTime);
		}

		static ::System::Int32 get_DefaultMaximumErrorResponseLength()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_DEFAULTMAXIMUMERRORRESPONSELENGTH_OFFSET))();
		}

		static ::System::Void set_DefaultMaximumErrorResponseLength(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_DEFAULTMAXIMUMERRORRESPONSELENGTH_OFFSET))(value);
		}

		::System::String* get_Expect()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_EXPECT_OFFSET))(this);
		}

		::System::Void set_Expect(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_EXPECT_OFFSET))(this, value);
		}

		::System::Boolean get_HaveResponse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_HAVERESPONSE_OFFSET))(this);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return ((::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_HEADERS_OFFSET))(this);
		}

		::System::Void set_Headers(::System::Net::WebHeaderCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebHeaderCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_HEADERS_OFFSET))(this, value);
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

		::System::DateTime get_IfModifiedSince()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_IFMODIFIEDSINCE_OFFSET))(this);
		}

		::System::Void set_IfModifiedSince(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_IFMODIFIEDSINCE_OFFSET))(this, value);
		}

		::System::Boolean get_KeepAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_KEEPALIVE_OFFSET))(this);
		}

		::System::Void set_KeepAlive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_KEEPALIVE_OFFSET))(this, value);
		}

		::System::Int32 get_MaximumAutomaticRedirections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_MAXIMUMAUTOMATICREDIRECTIONS_OFFSET))(this);
		}

		::System::Void set_MaximumAutomaticRedirections(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_MAXIMUMAUTOMATICREDIRECTIONS_OFFSET))(this, value);
		}

		::System::Int32 get_MaximumResponseHeadersLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_MAXIMUMRESPONSEHEADERSLENGTH_OFFSET))(this);
		}

		::System::Void set_MaximumResponseHeadersLength(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_MAXIMUMRESPONSEHEADERSLENGTH_OFFSET))(this, value);
		}

		static ::System::Int32 get_DefaultMaximumResponseHeadersLength()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_DEFAULTMAXIMUMRESPONSEHEADERSLENGTH_OFFSET))();
		}

		static ::System::Void set_DefaultMaximumResponseHeadersLength(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_DEFAULTMAXIMUMRESPONSEHEADERSLENGTH_OFFSET))(value);
		}

		::System::Int32 get_ReadWriteTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_READWRITETIMEOUT_OFFSET))(this);
		}

		::System::Void set_ReadWriteTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_READWRITETIMEOUT_OFFSET))(this, value);
		}

		::System::Int32 get_ContinueTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_CONTINUETIMEOUT_OFFSET))(this);
		}

		::System::Void set_ContinueTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_CONTINUETIMEOUT_OFFSET))(this, value);
		}

		::System::String* get_MediaType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_MEDIATYPE_OFFSET))(this);
		}

		::System::Void set_MediaType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_MEDIATYPE_OFFSET))(this, value);
		}

		::System::String* get_Method()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_METHOD_OFFSET))(this);
		}

		::System::Void set_Method(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_METHOD_OFFSET))(this, value);
		}

		::System::Boolean get_Pipelined()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_PIPELINED_OFFSET))(this);
		}

		::System::Void set_Pipelined(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_PIPELINED_OFFSET))(this, value);
		}

		::System::Boolean get_PreAuthenticate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_PREAUTHENTICATE_OFFSET))(this);
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

		::System::String* get_Referer()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_REFERER_OFFSET))(this);
		}

		::System::Void set_Referer(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_REFERER_OFFSET))(this, value);
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

		::System::Boolean get_SupportsCookieContainer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_SUPPORTSCOOKIECONTAINER_OFFSET))(this);
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

		::System::Void set_TransferEncoding(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_TRANSFERENCODING_OFFSET))(this, value);
		}

		::System::Boolean get_UseDefaultCredentials()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_USEDEFAULTCREDENTIALS_OFFSET))(this);
		}

		::System::Void set_UseDefaultCredentials(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_USEDEFAULTCREDENTIALS_OFFSET))(this, value);
		}

		::System::String* get_UserAgent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_USERAGENT_OFFSET))(this);
		}

		::System::Void set_UserAgent(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_USERAGENT_OFFSET))(this, value);
		}

		::System::Boolean get_UnsafeAuthenticatedConnectionSharing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_UNSAFEAUTHENTICATEDCONNECTIONSHARING_OFFSET))(this);
		}

		::System::Void set_UnsafeAuthenticatedConnectionSharing(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_SET_UNSAFEAUTHENTICATEDCONNECTIONSHARING_OFFSET))(this, value);
		}

		::System::Boolean get_GotRequestStream()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_GOTREQUESTSTREAM_OFFSET))(this);
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

		::System::Net::Security::RemoteCertificateValidationCallback* get_ServerCertificateValidationCallback()
		{
			return ((::System::Net::Security::RemoteCertificateValidationCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GET_SERVERCERTIFICATEVALIDATIONCALLBACK_OFFSET))(this);
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

		::System::Void AddRange_1(::System::Int32 from, ::System::Int32 to)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_ADDRANGE_1_OFFSET))(this, from, to);
		}

		::System::Void AddRange_2(::System::String* rangeSpecifier, ::System::Int32 range)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_ADDRANGE_2_OFFSET))(this, rangeSpecifier, range);
		}

		::System::Void AddRange_3(::System::String* rangeSpecifier, ::System::Int32 from, ::System::Int32 to)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_ADDRANGE_3_OFFSET))(this, rangeSpecifier, from, to);
		}

		::System::Void AddRange_4(::System::Int64 range)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_ADDRANGE_4_OFFSET))(this, range);
		}

		::System::Void AddRange_5(::System::Int64 from, ::System::Int64 to)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_ADDRANGE_5_OFFSET))(this, from, to);
		}

		::System::Void AddRange_6(::System::String* rangeSpecifier, ::System::Int64 range)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_ADDRANGE_6_OFFSET))(this, rangeSpecifier, range);
		}

		::System::Void AddRange_7(::System::String* rangeSpecifier, ::System::Int64 from, ::System::Int64 to)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_ADDRANGE_7_OFFSET))(this, rangeSpecifier, from, to);
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

		::System::IO::Stream* GetRequestStream_1(::System::Net::TransportContext*& context)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::Net::TransportContext*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GETREQUESTSTREAM_1_OFFSET))(this, context);
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

		::System::IO::Stream* EndGetRequestStream_1(::System::IAsyncResult* asyncResult, ::System::Net::TransportContext*& context)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::IAsyncResult*, ::System::Net::TransportContext*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_ENDGETREQUESTSTREAM_1_OFFSET))(this, asyncResult, context);
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

		static ::System::Text::StringBuilder* GenerateConnectionGroup(::System::String* connectionGroupName, ::System::Boolean unsafeConnectionGroup, ::System::Boolean isInternalGroup)
		{
			return ((::System::Text::StringBuilder*(*)(::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPWEBREQUEST_GENERATECONNECTIONGROUP_OFFSET))(connectionGroupName, unsafeConnectionGroup, isInternalGroup);
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
