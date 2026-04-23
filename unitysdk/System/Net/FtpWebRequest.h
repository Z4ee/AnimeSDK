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
namespace System::Text { class Encoding; }

#define SYSTEM_NET_FTPWEBREQUEST_ABORT_OFFSET UNITYSDK_OFFSET(0x1A1107E0)
#define SYSTEM_NET_FTPWEBREQUEST_AUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1A114710)
#define SYSTEM_NET_FTPWEBREQUEST_BEGINGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1A111300)
#define SYSTEM_NET_FTPWEBREQUEST_BEGINGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1A110DF0)
#define SYSTEM_NET_FTPWEBREQUEST_CHANGETOSSLSOCKET_OFFSET UNITYSDK_OFFSET(0x1A115F30)
#define SYSTEM_NET_FTPWEBREQUEST_CHECKFINALSTATE_OFFSET UNITYSDK_OFFSET(0x1A110770)
#define SYSTEM_NET_FTPWEBREQUEST_CHECKIFABORTED_OFFSET UNITYSDK_OFFSET(0x1A10DED0)
#define SYSTEM_NET_FTPWEBREQUEST_CHECKREQUESTSTARTED_OFFSET UNITYSDK_OFFSET(0x1A1100D0)
#define SYSTEM_NET_FTPWEBREQUEST_CLOSECONNECTION_OFFSET UNITYSDK_OFFSET(0x1A1141C0)
#define SYSTEM_NET_FTPWEBREQUEST_CLOSECONTROLCONNECTION_OFFSET UNITYSDK_OFFSET(0x1A114140)
#define SYSTEM_NET_FTPWEBREQUEST_CLOSEDATACONNECTION_OFFSET UNITYSDK_OFFSET(0x1A10DFE0)
#define SYSTEM_NET_FTPWEBREQUEST_CREATEEXCEPTIONFROMRESPONSE_OFFSET UNITYSDK_OFFSET(0x1A1129E0)
#define SYSTEM_NET_FTPWEBREQUEST_CWDANDSETFILENAME_OFFSET UNITYSDK_OFFSET(0x1A112E90)
#define SYSTEM_NET_FTPWEBREQUEST_DOWNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1A113870)
#define SYSTEM_NET_FTPWEBREQUEST_ENDGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1A111660)
#define SYSTEM_NET_FTPWEBREQUEST_ENDGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1A111180)
#define SYSTEM_NET_FTPWEBREQUEST_FORMATADDRESSV6_OFFSET UNITYSDK_OFFSET(0x1A115910)
#define SYSTEM_NET_FTPWEBREQUEST_FORMATADDRESS_OFFSET UNITYSDK_OFFSET(0x1A115400)
#define SYSTEM_NET_FTPWEBREQUEST_GETINITIALPATH_OFFSET UNITYSDK_OFFSET(0x1A114B70)
#define SYSTEM_NET_FTPWEBREQUEST_GETMUSTIMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1A10FEA0)
#define SYSTEM_NET_FTPWEBREQUEST_GETPORTV4_OFFSET UNITYSDK_OFFSET(0x1A114F70)
#define SYSTEM_NET_FTPWEBREQUEST_GETPORTV6_OFFSET UNITYSDK_OFFSET(0x1A1151B0)
#define SYSTEM_NET_FTPWEBREQUEST_GETREMOTEFOLDERPATH_OFFSET UNITYSDK_OFFSET(0x1A112B70)
#define SYSTEM_NET_FTPWEBREQUEST_GETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1A111910)
#define SYSTEM_NET_FTPWEBREQUEST_GETRESPONSESTATUS_OFFSET UNITYSDK_OFFSET(0x1A1125B0)
#define SYSTEM_NET_FTPWEBREQUEST_GETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1A1112D0)
#define SYSTEM_NET_FTPWEBREQUEST_GETSERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x1A110420)
#define SYSTEM_NET_FTPWEBREQUEST_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1A10FFE0)
#define SYSTEM_NET_FTPWEBREQUEST_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1A110000)
#define SYSTEM_NET_FTPWEBREQUEST_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x1A110590)
#define SYSTEM_NET_FTPWEBREQUEST_GET_ENABLESSL_OFFSET UNITYSDK_OFFSET(0x1A1101D0)
#define SYSTEM_NET_FTPWEBREQUEST_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1A1101E0)
#define SYSTEM_NET_FTPWEBREQUEST_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1A110220)
#define SYSTEM_NET_FTPWEBREQUEST_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x1A110370)
#define SYSTEM_NET_FTPWEBREQUEST_GET_READWRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A1103A0)
#define SYSTEM_NET_FTPWEBREQUEST_GET_REQUESTURI_OFFSET UNITYSDK_OFFSET(0x1A1103B0)
#define SYSTEM_NET_FTPWEBREQUEST_GET_SERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x1A1103C0)
#define SYSTEM_NET_FTPWEBREQUEST_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1A1105B0)
#define SYSTEM_NET_FTPWEBREQUEST_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A110500)
#define SYSTEM_NET_FTPWEBREQUEST_GET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1A110480)
#define SYSTEM_NET_FTPWEBREQUEST_INFINALSTATE_OFFSET UNITYSDK_OFFSET(0x1A110BD0)
#define SYSTEM_NET_FTPWEBREQUEST_INITDATACONNECTION_OFFSET UNITYSDK_OFFSET(0x1A115B60)
#define SYSTEM_NET_FTPWEBREQUEST_INITIATESECURECONNECTION_OFFSET UNITYSDK_OFFSET(0x1A116070)
#define SYSTEM_NET_FTPWEBREQUEST_INPROGRESS_OFFSET UNITYSDK_OFFSET(0x1A1124E0)
#define SYSTEM_NET_FTPWEBREQUEST_OPENCONTROLCONNECTION_OFFSET UNITYSDK_OFFSET(0x1A113160)
#define SYSTEM_NET_FTPWEBREQUEST_OPENDATACONNECTION_OFFSET UNITYSDK_OFFSET(0x1A114260)
#define SYSTEM_NET_FTPWEBREQUEST_OPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1A115AB0)
#define SYSTEM_NET_FTPWEBREQUEST_PROCESSMETHOD_OFFSET UNITYSDK_OFFSET(0x1A111E10)
#define SYSTEM_NET_FTPWEBREQUEST_PROCESSREQUEST_OFFSET UNITYSDK_OFFSET(0x1A111AA0)
#define SYSTEM_NET_FTPWEBREQUEST_PROCESSSIMPLEMETHOD_OFFSET UNITYSDK_OFFSET(0x1A113A10)
#define SYSTEM_NET_FTPWEBREQUEST_RESOLVEHOST_OFFSET UNITYSDK_OFFSET(0x1A111940)
#define SYSTEM_NET_FTPWEBREQUEST_SENDCOMMAND_1_OFFSET UNITYSDK_OFFSET(0x1A110A10)
#define SYSTEM_NET_FTPWEBREQUEST_SENDCOMMAND_OFFSET UNITYSDK_OFFSET(0x1A1129D0)
#define SYSTEM_NET_FTPWEBREQUEST_SERVICENOTAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1A116130)
#define SYSTEM_NET_FTPWEBREQUEST_SETCOMPLETEWITHERROR_OFFSET UNITYSDK_OFFSET(0x1A1124C0)
#define SYSTEM_NET_FTPWEBREQUEST_SETTRANSFERCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1A10E010)
#define SYSTEM_NET_FTPWEBREQUEST_SETTYPE_OFFSET UNITYSDK_OFFSET(0x1A1128F0)
#define SYSTEM_NET_FTPWEBREQUEST_SETUPPASSIVECONNECTION_OFFSET UNITYSDK_OFFSET(0x1A114D50)
#define SYSTEM_NET_FTPWEBREQUEST_SET_CONNECTIONGROUPNAME_OFFSET UNITYSDK_OFFSET(0x1A10FF50)
#define SYSTEM_NET_FTPWEBREQUEST_SET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1A10FFF0)
#define SYSTEM_NET_FTPWEBREQUEST_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A10FF90)
#define SYSTEM_NET_FTPWEBREQUEST_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1A110010)
#define SYSTEM_NET_FTPWEBREQUEST_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x1A110230)
#define SYSTEM_NET_FTPWEBREQUEST_SET_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1A110320)
#define SYSTEM_NET_FTPWEBREQUEST_SET_PROXY_OFFSET UNITYSDK_OFFSET(0x1A110380)
#define SYSTEM_NET_FTPWEBREQUEST_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1A110660)
#define SYSTEM_NET_FTPWEBREQUEST_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A110510)
#define SYSTEM_NET_FTPWEBREQUEST_SET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1A1104C0)
#define SYSTEM_NET_FTPWEBREQUEST_UPLOADDATA_OFFSET UNITYSDK_OFFSET(0x1A113940)
#define SYSTEM_NET_FTPWEBREQUEST__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A116180)
#define SYSTEM_NET_FTPWEBREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A10FC60)

namespace System::Net
{
	inline static constexpr unsigned int FtpWebRequest_TypeDefinitionIndex = 2832;

	class FtpWebRequest : public ::System::Net::WebRequest
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_supportedCommands()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FtpWebRequest_TypeDefinitionIndex)->GetStaticField(0x13890);
		}
		::System::String* renameTo; // 0x38
		::System::Object* locker; // 0x40
		::System::Net::NetworkCredential* credentials; // 0x48
		::System::IO::Stream* requestStream; // 0x50
		::System::IO::Stream* dataStream; // 0x58
		::System::IO::StreamReader* controlReader; // 0x60
		::System::Net::IWebProxy* proxy; // 0x68
		::System::String* initial_path; // 0x70
		::System::String* method; // 0x78
		::System::Net::IPEndPoint* localEndPoint; // 0x80
		::System::String* file_name; // 0x88
		::System::Uri* requestUri; // 0x90
		::System::Net::IPHostEntry* hostEntry; // 0x98
		::System::Net::IPEndPoint* remoteEndPoint; // 0xA0
		::System::Text::Encoding* dataEncoding; // 0xA8
		::System::IO::Stream* controlStream; // 0xB0
		::System::IO::Stream* origDataStream; // 0xB8
		::System::Net::FtpWebResponse* ftpResponse; // 0xC0
		::System::Net::ServicePoint* servicePoint; // 0xC8
		::System::Net::FtpAsyncResult* asyncResult; // 0xD0
		::System::Int64 offset; // 0xD8
		::System::Boolean binary; // 0xE0
		::System::Boolean enableSsl; // 0xE1
		::System::Boolean keepAlive; // 0xE2
		::System::Boolean usePassive; // 0xE3
		::System::Int32 rwTimeout; // 0xE4
		::System::Int32 timeout; // 0xE8
		::System::Net::FtpWebRequest_RequestState requestState; // 0xEC

		::System::Void _ctor(::System::Uri* uri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST__CTOR_OFFSET))(this, uri);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST__CCTOR_OFFSET))();
		}

		static ::System::Exception* GetMustImplement()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GETMUSTIMPLEMENT_OFFSET))();
		}

		::System::Void set_ConnectionGroupName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_CONNECTIONGROUPNAME_OFFSET))(this, value);
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

		::System::Net::WebHeaderCollection* get_Headers()
		{
			return ((::System::Net::WebHeaderCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_HEADERS_OFFSET))(this);
		}

		::System::String* get_Method()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_METHOD_OFFSET))(this);
		}

		::System::Void set_Method(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_METHOD_OFFSET))(this, value);
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

		::System::Uri* get_RequestUri()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_REQUESTURI_OFFSET))(this);
		}

		::System::Net::ServicePoint* get_ServicePoint()
		{
			return ((::System::Net::ServicePoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_SERVICEPOINT_OFFSET))(this);
		}

		::System::Boolean get_UseDefaultCredentials()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_USEDEFAULTCREDENTIALS_OFFSET))(this);
		}

		::System::Void set_UseDefaultCredentials(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_USEDEFAULTCREDENTIALS_OFFSET))(this, value);
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
