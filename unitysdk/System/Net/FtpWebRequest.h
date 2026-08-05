#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/FtpWebRequest_RequestState.h"
#include "unitysdk/System/Net/WebRequest.h"

namespace System { class AsyncCallback; }
namespace System { class Exception; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Uri; }
namespace System::IO { class Stream; }
namespace System::IO { class StreamReader; }
namespace System::Net { class FtpAsyncResult; }
namespace System::Net { class FtpStatus; }
namespace System::Net { class FtpWebResponse; }
namespace System::Net { class ICredentials; }
namespace System::Net { class IPAddress; }
namespace System::Net { class IPEndPoint; }
namespace System::Net { class IPHostEntry; }
namespace System::Net { class IWebProxy; }
namespace System::Net { class NetworkCredential; }
namespace System::Net { class ServicePoint; }
namespace System::Net { class WebHeaderCollection; }
namespace System::Net { class WebResponse; }
namespace System::Net::Sockets { class Socket; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }
namespace System::Text { class Encoding; }

#define SYSTEM_NET_FTPWEBREQUEST_ABORT_OFFSET UNITYSDK_OFFSET(0x1D88D740)
#define SYSTEM_NET_FTPWEBREQUEST_AUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1D891710)
#define SYSTEM_NET_FTPWEBREQUEST_BEGINGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1D88E2E0)
#define SYSTEM_NET_FTPWEBREQUEST_BEGINGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1D88DD50)
#define SYSTEM_NET_FTPWEBREQUEST_CHANGETOSSLSOCKET_OFFSET UNITYSDK_OFFSET(0x1D893100)
#define SYSTEM_NET_FTPWEBREQUEST_CHECKFINALSTATE_OFFSET UNITYSDK_OFFSET(0x1D88D6D0)
#define SYSTEM_NET_FTPWEBREQUEST_CHECKIFABORTED_OFFSET UNITYSDK_OFFSET(0x1D88D5C0)
#define SYSTEM_NET_FTPWEBREQUEST_CHECKREQUESTSTARTED_OFFSET UNITYSDK_OFFSET(0x1D88CB70)
#define SYSTEM_NET_FTPWEBREQUEST_CLOSECONNECTION_OFFSET UNITYSDK_OFFSET(0x1D8912D0)
#define SYSTEM_NET_FTPWEBREQUEST_CLOSECONTROLCONNECTION_OFFSET UNITYSDK_OFFSET(0x1D891220)
#define SYSTEM_NET_FTPWEBREQUEST_CLOSEDATACONNECTION_OFFSET UNITYSDK_OFFSET(0x1D8912A0)
#define SYSTEM_NET_FTPWEBREQUEST_CREATEEXCEPTIONFROMRESPONSE_OFFSET UNITYSDK_OFFSET(0x1D88FA10)
#define SYSTEM_NET_FTPWEBREQUEST_CWDANDSETFILENAME_OFFSET UNITYSDK_OFFSET(0x1D88FEF0)
#define SYSTEM_NET_FTPWEBREQUEST_DOWNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D890940)
#define SYSTEM_NET_FTPWEBREQUEST_ENDGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1D88E6E0)
#define SYSTEM_NET_FTPWEBREQUEST_ENDGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1D88E160)
#define SYSTEM_NET_FTPWEBREQUEST_FORMATADDRESSV6_OFFSET UNITYSDK_OFFSET(0x1D892940)
#define SYSTEM_NET_FTPWEBREQUEST_FORMATADDRESS_OFFSET UNITYSDK_OFFSET(0x1D892710)
#define SYSTEM_NET_FTPWEBREQUEST_GETINITIALPATH_OFFSET UNITYSDK_OFFSET(0x1D891BA0)
#define SYSTEM_NET_FTPWEBREQUEST_GETMUSTIMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1D88C810)
#define SYSTEM_NET_FTPWEBREQUEST_GETPORTV4_OFFSET UNITYSDK_OFFSET(0x1D891FD0)
#define SYSTEM_NET_FTPWEBREQUEST_GETPORTV6_OFFSET UNITYSDK_OFFSET(0x1D892400)
#define SYSTEM_NET_FTPWEBREQUEST_GETREMOTEFOLDERPATH_OFFSET UNITYSDK_OFFSET(0x1D88FB00)
#define SYSTEM_NET_FTPWEBREQUEST_GETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1D88E990)
#define SYSTEM_NET_FTPWEBREQUEST_GETRESPONSESTATUS_OFFSET UNITYSDK_OFFSET(0x1D88F580)
#define SYSTEM_NET_FTPWEBREQUEST_GETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1D88E2B0)
#define SYSTEM_NET_FTPWEBREQUEST_GETSERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x1D88D1B0)
#define SYSTEM_NET_FTPWEBREQUEST_GET_CLIENTCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1D88C920)
#define SYSTEM_NET_FTPWEBREQUEST_GET_CONNECTIONGROUPNAME_OFFSET UNITYSDK_OFFSET(0x1D88C9A0)
#define SYSTEM_NET_FTPWEBREQUEST_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1D88CAC0)
#define SYSTEM_NET_FTPWEBREQUEST_GET_CONTENTOFFSET_OFFSET UNITYSDK_OFFSET(0x1D88CAE0)
#define SYSTEM_NET_FTPWEBREQUEST_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1D88CA20)
#define SYSTEM_NET_FTPWEBREQUEST_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1D88CC70)
#define SYSTEM_NET_FTPWEBREQUEST_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x1D88D3A0)
#define SYSTEM_NET_FTPWEBREQUEST_GET_ENABLESSL_OFFSET UNITYSDK_OFFSET(0x1D88CD40)
#define SYSTEM_NET_FTPWEBREQUEST_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1D88CD70)
#define SYSTEM_NET_FTPWEBREQUEST_GET_KEEPALIVE_OFFSET UNITYSDK_OFFSET(0x1D88CDF0)
#define SYSTEM_NET_FTPWEBREQUEST_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1D88CE10)
#define SYSTEM_NET_FTPWEBREQUEST_GET_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1D88CF20)
#define SYSTEM_NET_FTPWEBREQUEST_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x1D88CFC0)
#define SYSTEM_NET_FTPWEBREQUEST_GET_READWRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D88CFF0)
#define SYSTEM_NET_FTPWEBREQUEST_GET_RENAMETO_OFFSET UNITYSDK_OFFSET(0x1D88D080)
#define SYSTEM_NET_FTPWEBREQUEST_GET_REQUESTURI_OFFSET UNITYSDK_OFFSET(0x1D88D120)
#define SYSTEM_NET_FTPWEBREQUEST_GET_SERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x1D88D130)
#define SYSTEM_NET_FTPWEBREQUEST_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1D88D3F0)
#define SYSTEM_NET_FTPWEBREQUEST_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D88D310)
#define SYSTEM_NET_FTPWEBREQUEST_GET_USEBINARY_OFFSET UNITYSDK_OFFSET(0x1D88D2E0)
#define SYSTEM_NET_FTPWEBREQUEST_GET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1D88D260)
#define SYSTEM_NET_FTPWEBREQUEST_GET_USEPASSIVE_OFFSET UNITYSDK_OFFSET(0x1D88D230)
#define SYSTEM_NET_FTPWEBREQUEST_INFINALSTATE_OFFSET UNITYSDK_OFFSET(0x1D88DB70)
#define SYSTEM_NET_FTPWEBREQUEST_INITDATACONNECTION_OFFSET UNITYSDK_OFFSET(0x1D892D30)
#define SYSTEM_NET_FTPWEBREQUEST_INITIATESECURECONNECTION_OFFSET UNITYSDK_OFFSET(0x1D893380)
#define SYSTEM_NET_FTPWEBREQUEST_INPROGRESS_OFFSET UNITYSDK_OFFSET(0x1D88F4B0)
#define SYSTEM_NET_FTPWEBREQUEST_OPENCONTROLCONNECTION_OFFSET UNITYSDK_OFFSET(0x1D890130)
#define SYSTEM_NET_FTPWEBREQUEST_OPENDATACONNECTION_OFFSET UNITYSDK_OFFSET(0x1D891360)
#define SYSTEM_NET_FTPWEBREQUEST_OPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1D892C90)
#define SYSTEM_NET_FTPWEBREQUEST_PROCESSMETHOD_OFFSET UNITYSDK_OFFSET(0x1D88EE50)
#define SYSTEM_NET_FTPWEBREQUEST_PROCESSREQUEST_OFFSET UNITYSDK_OFFSET(0x1D88EB20)
#define SYSTEM_NET_FTPWEBREQUEST_PROCESSSIMPLEMETHOD_OFFSET UNITYSDK_OFFSET(0x1D890AE0)
#define SYSTEM_NET_FTPWEBREQUEST_RESOLVEHOST_OFFSET UNITYSDK_OFFSET(0x1D88E9C0)
#define SYSTEM_NET_FTPWEBREQUEST_SENDCOMMAND_1_OFFSET UNITYSDK_OFFSET(0x1D88D980)
#define SYSTEM_NET_FTPWEBREQUEST_SENDCOMMAND_OFFSET UNITYSDK_OFFSET(0x1D88FA00)
#define SYSTEM_NET_FTPWEBREQUEST_SERVICENOTAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1D893440)
#define SYSTEM_NET_FTPWEBREQUEST_SETCOMPLETEWITHERROR_OFFSET UNITYSDK_OFFSET(0x1D88F490)
#define SYSTEM_NET_FTPWEBREQUEST_SETTRANSFERCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1D892BA0)
#define SYSTEM_NET_FTPWEBREQUEST_SETTYPE_OFFSET UNITYSDK_OFFSET(0x1D88F900)
#define SYSTEM_NET_FTPWEBREQUEST_SETUPPASSIVECONNECTION_OFFSET UNITYSDK_OFFSET(0x1D891DB0)
#define SYSTEM_NET_FTPWEBREQUEST_SET_CLIENTCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1D88C960)
#define SYSTEM_NET_FTPWEBREQUEST_SET_CONNECTIONGROUPNAME_OFFSET UNITYSDK_OFFSET(0x1D88C9E0)
#define SYSTEM_NET_FTPWEBREQUEST_SET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1D88CAD0)
#define SYSTEM_NET_FTPWEBREQUEST_SET_CONTENTOFFSET_OFFSET UNITYSDK_OFFSET(0x1D88CAF0)
#define SYSTEM_NET_FTPWEBREQUEST_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1D88CA70)
#define SYSTEM_NET_FTPWEBREQUEST_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1D88CC80)
#define SYSTEM_NET_FTPWEBREQUEST_SET_ENABLESSL_OFFSET UNITYSDK_OFFSET(0x1D88CD50)
#define SYSTEM_NET_FTPWEBREQUEST_SET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1D88CDB0)
#define SYSTEM_NET_FTPWEBREQUEST_SET_KEEPALIVE_OFFSET UNITYSDK_OFFSET(0x1D88CE00)
#define SYSTEM_NET_FTPWEBREQUEST_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x1D88CE20)
#define SYSTEM_NET_FTPWEBREQUEST_SET_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1D88CF70)
#define SYSTEM_NET_FTPWEBREQUEST_SET_PROXY_OFFSET UNITYSDK_OFFSET(0x1D88CFD0)
#define SYSTEM_NET_FTPWEBREQUEST_SET_READWRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D88D000)
#define SYSTEM_NET_FTPWEBREQUEST_SET_RENAMETO_OFFSET UNITYSDK_OFFSET(0x1D88D090)
#define SYSTEM_NET_FTPWEBREQUEST_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1D88D4B0)
#define SYSTEM_NET_FTPWEBREQUEST_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D88D320)
#define SYSTEM_NET_FTPWEBREQUEST_SET_USEBINARY_OFFSET UNITYSDK_OFFSET(0x1D88D2F0)
#define SYSTEM_NET_FTPWEBREQUEST_SET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1D88D2A0)
#define SYSTEM_NET_FTPWEBREQUEST_SET_USEPASSIVE_OFFSET UNITYSDK_OFFSET(0x1D88D240)
#define SYSTEM_NET_FTPWEBREQUEST_UPLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D890A10)
#define SYSTEM_NET_FTPWEBREQUEST__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D893490)
#define SYSTEM_NET_FTPWEBREQUEST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D8936C0)
#define SYSTEM_NET_FTPWEBREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D88C6A0)

namespace System::Net
{
	inline static constexpr unsigned int FtpWebRequest_TypeDefinitionIndex = 3516;

	class FtpWebRequest : public ::System::Net::WebRequest
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_supportedCommands()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FtpWebRequest_TypeDefinitionIndex)->GetStaticField(0x2950);
		}
		// static const ::System::String* ChangeDir; // 0x0
		// static const ::System::String* UserCommand; // 0x0
		// static const ::System::String* PasswordCommand; // 0x0
		// static const ::System::String* TypeCommand; // 0x0
		// static const ::System::String* PassiveCommand; // 0x0
		// static const ::System::String* ExtendedPassiveCommand; // 0x0
		// static const ::System::String* PortCommand; // 0x0
		// static const ::System::String* ExtendedPortCommand; // 0x0
		// static const ::System::String* AbortCommand; // 0x0
		// static const ::System::String* AuthCommand; // 0x0
		// static const ::System::String* RestCommand; // 0x0
		// static const ::System::String* RenameFromCommand; // 0x0
		// static const ::System::String* RenameToCommand; // 0x0
		// static const ::System::String* QuitCommand; // 0x0
		// static const ::System::String* EOL; // 0x0
		::System::IO::Stream* dataStream; // 0x38
		::System::IO::Stream* origDataStream; // 0x40
		::System::String* renameTo; // 0x48
		::System::Uri* requestUri; // 0x50
		::System::IO::Stream* requestStream; // 0x58
		::System::IO::Stream* controlStream; // 0x60
		::System::Net::FtpAsyncResult* asyncResult; // 0x68
		::System::Net::NetworkCredential* credentials; // 0x70
		::System::String* initial_path; // 0x78
		::System::Net::ServicePoint* servicePoint; // 0x80
		::System::Net::IPEndPoint* localEndPoint; // 0x88
		::System::String* method; // 0x90
		::System::Net::FtpWebResponse* ftpResponse; // 0x98
		::System::Object* locker; // 0xA0
		::System::String* file_name; // 0xA8
		::System::Text::Encoding* dataEncoding; // 0xB0
		::System::IO::StreamReader* controlReader; // 0xB8
		::System::Net::IPHostEntry* hostEntry; // 0xC0
		::System::Net::IPEndPoint* remoteEndPoint; // 0xC8
		::System::Net::IWebProxy* proxy; // 0xD0
		::System::Int64 offset; // 0xD8
		::System::Int32 rwTimeout; // 0xE0
		::System::Net::FtpWebRequest_RequestState requestState; // 0xE4
		::System::Int32 timeout; // 0xE8
		::System::Boolean keepAlive; // 0xEC
		::System::Boolean enableSsl; // 0xED
		::System::Boolean binary; // 0xEE
		::System::Boolean usePassive; // 0xEF

		::System::Void _ctor(::System::Uri* uri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST__CTOR_OFFSET))(this, uri);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST__CCTOR_OFFSET))();
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST__CTOR_1_OFFSET))(this);
		}

		static ::System::Exception* GetMustImplement()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GETMUSTIMPLEMENT_OFFSET))();
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_CLIENTCERTIFICATES_OFFSET))(this);
		}

		::System::Void set_ClientCertificates(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_CLIENTCERTIFICATES_OFFSET))(this, value);
		}

		::System::String* get_ConnectionGroupName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_CONNECTIONGROUPNAME_OFFSET))(this);
		}

		::System::Void set_ConnectionGroupName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_CONNECTIONGROUPNAME_OFFSET))(this, value);
		}

		::System::String* get_ContentType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_CONTENTTYPE_OFFSET))(this);
		}

		::System::Void set_ContentType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_CONTENTTYPE_OFFSET))(this, value);
		}

		::System::Int64 get_ContentLength()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_CONTENTLENGTH_OFFSET))(this);
		}

		::System::Void set_ContentLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_CONTENTLENGTH_OFFSET))(this, value);
		}

		::System::Int64 get_ContentOffset()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_CONTENTOFFSET_OFFSET))(this);
		}

		::System::Void set_ContentOffset(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_CONTENTOFFSET_OFFSET))(this, value);
		}

		::System::Net::ICredentials* get_Credentials()
		{
			return ((::System::Net::ICredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_CREDENTIALS_OFFSET))(this);
		}

		::System::Void set_Credentials(::System::Net::ICredentials* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_CREDENTIALS_OFFSET))(this, value);
		}

		::System::Boolean get_EnableSsl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_ENABLESSL_OFFSET))(this);
		}

		::System::Void set_EnableSsl(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_ENABLESSL_OFFSET))(this, value);
		}

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return ((::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_HEADERS_OFFSET))(this);
		}

		::System::Void set_Headers(::System::Net::WebHeaderCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebHeaderCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_HEADERS_OFFSET))(this, value);
		}

		::System::Boolean get_KeepAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_KEEPALIVE_OFFSET))(this);
		}

		::System::Void set_KeepAlive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_KEEPALIVE_OFFSET))(this, value);
		}

		::System::String* get_Method()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_METHOD_OFFSET))(this);
		}

		::System::Void set_Method(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_METHOD_OFFSET))(this, value);
		}

		::System::Boolean get_PreAuthenticate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_PREAUTHENTICATE_OFFSET))(this);
		}

		::System::Void set_PreAuthenticate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_PREAUTHENTICATE_OFFSET))(this, value);
		}

		::System::Net::IWebProxy* get_Proxy()
		{
			return ((::System::Net::IWebProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_PROXY_OFFSET))(this);
		}

		::System::Void set_Proxy(::System::Net::IWebProxy* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IWebProxy*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_PROXY_OFFSET))(this, value);
		}

		::System::Int32 get_ReadWriteTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_READWRITETIMEOUT_OFFSET))(this);
		}

		::System::Void set_ReadWriteTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_READWRITETIMEOUT_OFFSET))(this, value);
		}

		::System::String* get_RenameTo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_RENAMETO_OFFSET))(this);
		}

		::System::Void set_RenameTo(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_RENAMETO_OFFSET))(this, value);
		}

		::System::Uri* get_RequestUri()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_REQUESTURI_OFFSET))(this);
		}

		::System::Net::ServicePoint* get_ServicePoint()
		{
			return ((::System::Net::ServicePoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_SERVICEPOINT_OFFSET))(this);
		}

		::System::Boolean get_UsePassive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_USEPASSIVE_OFFSET))(this);
		}

		::System::Void set_UsePassive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_USEPASSIVE_OFFSET))(this, value);
		}

		::System::Boolean get_UseDefaultCredentials()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_USEDEFAULTCREDENTIALS_OFFSET))(this);
		}

		::System::Void set_UseDefaultCredentials(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_USEDEFAULTCREDENTIALS_OFFSET))(this, value);
		}

		::System::Boolean get_UseBinary()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_USEBINARY_OFFSET))(this);
		}

		::System::Void set_UseBinary(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_USEBINARY_OFFSET))(this, value);
		}

		::System::Int32 get_Timeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_TIMEOUT_OFFSET))(this);
		}

		::System::Void set_Timeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_TIMEOUT_OFFSET))(this, value);
		}

		::System::String* get_DataType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_DATATYPE_OFFSET))(this);
		}

		::System::Net::FtpWebRequest_RequestState get_State()
		{
			return ((::System::Net::FtpWebRequest_RequestState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::System::Net::FtpWebRequest_RequestState value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::FtpWebRequest_RequestState))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_STATE_OFFSET))(this, value);
		}

		::System::Void Abort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_ABORT_OFFSET))(this);
		}

		::System::IAsyncResult* BeginGetResponse(::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_BEGINGETRESPONSE_OFFSET))(this, callback, state);
		}

		::System::Net::WebResponse* EndGetResponse(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Net::WebResponse*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_ENDGETRESPONSE_OFFSET))(this, asyncResult);
		}

		::System::Net::WebResponse* GetResponse()
		{
			return ((::System::Net::WebResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GETRESPONSE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginGetRequestStream(::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_BEGINGETREQUESTSTREAM_OFFSET))(this, callback, state);
		}

		::System::IO::Stream* EndGetRequestStream(::System::IAsyncResult* asyncResult)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_ENDGETREQUESTSTREAM_OFFSET))(this, asyncResult);
		}

		::System::IO::Stream* GetRequestStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GETREQUESTSTREAM_OFFSET))(this);
		}

		::System::Net::ServicePoint* GetServicePoint()
		{
			return ((::System::Net::ServicePoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GETSERVICEPOINT_OFFSET))(this);
		}

		::System::Void ResolveHost()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_RESOLVEHOST_OFFSET))(this);
		}

		::System::Void ProcessRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_PROCESSREQUEST_OFFSET))(this);
		}

		::System::Void SetType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SETTYPE_OFFSET))(this);
		}

		::System::String* GetRemoteFolderPath(::System::Uri* uri)
		{
			return ((::System::String*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GETREMOTEFOLDERPATH_OFFSET))(this, uri);
		}

		::System::Void CWDAndSetFileName(::System::Uri* uri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_CWDANDSETFILENAME_OFFSET))(this, uri);
		}

		::System::Void ProcessMethod()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_PROCESSMETHOD_OFFSET))(this);
		}

		::System::Void CloseControlConnection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_CLOSECONTROLCONNECTION_OFFSET))(this);
		}

		::System::Void CloseDataConnection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_CLOSEDATACONNECTION_OFFSET))(this);
		}

		::System::Void CloseConnection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_CLOSECONNECTION_OFFSET))(this);
		}

		::System::Void ProcessSimpleMethod()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_PROCESSSIMPLEMETHOD_OFFSET))(this);
		}

		::System::Void UploadData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_UPLOADDATA_OFFSET))(this);
		}

		::System::Void DownloadData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_DOWNLOADDATA_OFFSET))(this);
		}

		::System::Void CheckRequestStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_CHECKREQUESTSTARTED_OFFSET))(this);
		}

		::System::Void OpenControlConnection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_OPENCONTROLCONNECTION_OFFSET))(this);
		}

		static ::System::String* GetInitialPath(::System::Net::FtpStatus* status)
		{
			return ((::System::String*(*)(::System::Net::FtpStatus*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GETINITIALPATH_OFFSET))(status);
		}

		::System::Net::Sockets::Socket* SetupPassiveConnection(::System::String* statusDescription, ::System::Boolean ipv6)
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SETUPPASSIVECONNECTION_OFFSET))(this, statusDescription, ipv6);
		}

		::System::Int32 GetPortV4(::System::String* responseString)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GETPORTV4_OFFSET))(this, responseString);
		}

		::System::Int32 GetPortV6(::System::String* responseString)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GETPORTV6_OFFSET))(this, responseString);
		}

		::System::String* FormatAddress(::System::Net::IPAddress* address, ::System::Int32 Port)
		{
			return ((::System::String*(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_FORMATADDRESS_OFFSET))(this, address, Port);
		}

		::System::String* FormatAddressV6(::System::Net::IPAddress* address, ::System::Int32 port)
		{
			return ((::System::String*(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_FORMATADDRESSV6_OFFSET))(this, address, port);
		}

		::System::Exception* CreateExceptionFromResponse(::System::Net::FtpStatus* status)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Net::FtpStatus*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_CREATEEXCEPTIONFROMRESPONSE_OFFSET))(this, status);
		}

		::System::Void SetTransferCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SETTRANSFERCOMPLETED_OFFSET))(this);
		}

		::System::Void OperationCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_OPERATIONCOMPLETED_OFFSET))(this);
		}

		::System::Void SetCompleteWithError(::System::Exception* exc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SETCOMPLETEWITHERROR_OFFSET))(this, exc);
		}

		::System::Net::Sockets::Socket* InitDataConnection()
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_INITDATACONNECTION_OFFSET))(this);
		}

		::System::Void OpenDataConnection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_OPENDATACONNECTION_OFFSET))(this);
		}

		::System::Void Authenticate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_AUTHENTICATE_OFFSET))(this);
		}

		::System::Net::FtpStatus* SendCommand(::System::String* command, ::Il2CppArray<::System::String*>* parameters)
		{
			return ((::System::Net::FtpStatus*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SENDCOMMAND_OFFSET))(this, command, parameters);
		}

		::System::Net::FtpStatus* SendCommand_1(::System::Boolean waitResponse, ::System::String* command, ::Il2CppArray<::System::String*>* parameters)
		{
			return ((::System::Net::FtpStatus*(*)(::PVOID, ::System::Boolean, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SENDCOMMAND_1_OFFSET))(this, waitResponse, command, parameters);
		}

		static ::System::Net::FtpStatus* ServiceNotAvailable()
		{
			return ((::System::Net::FtpStatus*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SERVICENOTAVAILABLE_OFFSET))();
		}

		::System::Net::FtpStatus* GetResponseStatus()
		{
			return ((::System::Net::FtpStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GETRESPONSESTATUS_OFFSET))(this);
		}

		::System::Void InitiateSecureConnection(::System::IO::Stream*& stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_INITIATESECURECONNECTION_OFFSET))(this, stream);
		}

		::System::Boolean ChangeToSSLSocket(::System::IO::Stream*& stream)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IO::Stream*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_CHANGETOSSLSOCKET_OFFSET))(this, stream);
		}

		::System::Boolean InFinalState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_INFINALSTATE_OFFSET))(this);
		}

		::System::Boolean InProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_INPROGRESS_OFFSET))(this);
		}

		::System::Void CheckIfAborted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_CHECKIFABORTED_OFFSET))(this);
		}

		::System::Void CheckFinalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_CHECKFINALSTATE_OFFSET))(this);
		}
	};
}
