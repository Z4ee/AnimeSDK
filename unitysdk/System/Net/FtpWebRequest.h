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

#define SYSTEM_NET_FTPWEBREQUEST_ABORT_OFFSET UNITYSDK_OFFSET(0x1B020940)
#define SYSTEM_NET_FTPWEBREQUEST_AUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1B024A40)
#define SYSTEM_NET_FTPWEBREQUEST_BEGINGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1B021580)
#define SYSTEM_NET_FTPWEBREQUEST_BEGINGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1B021060)
#define SYSTEM_NET_FTPWEBREQUEST_CHANGETOSSLSOCKET_OFFSET UNITYSDK_OFFSET(0x1B026410)
#define SYSTEM_NET_FTPWEBREQUEST_CHECKFINALSTATE_OFFSET UNITYSDK_OFFSET(0x1B0208D0)
#define SYSTEM_NET_FTPWEBREQUEST_CHECKIFABORTED_OFFSET UNITYSDK_OFFSET(0x1B01E630)
#define SYSTEM_NET_FTPWEBREQUEST_CHECKREQUESTSTARTED_OFFSET UNITYSDK_OFFSET(0x1B020190)
#define SYSTEM_NET_FTPWEBREQUEST_CLOSECONNECTION_OFFSET UNITYSDK_OFFSET(0x1B024540)
#define SYSTEM_NET_FTPWEBREQUEST_CLOSECONTROLCONNECTION_OFFSET UNITYSDK_OFFSET(0x1B024460)
#define SYSTEM_NET_FTPWEBREQUEST_CLOSEDATACONNECTION_OFFSET UNITYSDK_OFFSET(0x1B01E740)
#define SYSTEM_NET_FTPWEBREQUEST_CREATEEXCEPTIONFROMRESPONSE_OFFSET UNITYSDK_OFFSET(0x1B022DD0)
#define SYSTEM_NET_FTPWEBREQUEST_CWDANDSETFILENAME_OFFSET UNITYSDK_OFFSET(0x1B0232A0)
#define SYSTEM_NET_FTPWEBREQUEST_DOWNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B023B80)
#define SYSTEM_NET_FTPWEBREQUEST_ENDGETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1B0218F0)
#define SYSTEM_NET_FTPWEBREQUEST_ENDGETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1B021400)
#define SYSTEM_NET_FTPWEBREQUEST_FORMATADDRESSV6_OFFSET UNITYSDK_OFFSET(0x1B025D10)
#define SYSTEM_NET_FTPWEBREQUEST_FORMATADDRESS_OFFSET UNITYSDK_OFFSET(0x1B0256C0)
#define SYSTEM_NET_FTPWEBREQUEST_GETINITIALPATH_OFFSET UNITYSDK_OFFSET(0x1B024E60)
#define SYSTEM_NET_FTPWEBREQUEST_GETMUSTIMPLEMENT_OFFSET UNITYSDK_OFFSET(0x1B01FF50)
#define SYSTEM_NET_FTPWEBREQUEST_GETPORTV4_OFFSET UNITYSDK_OFFSET(0x1B025260)
#define SYSTEM_NET_FTPWEBREQUEST_GETPORTV6_OFFSET UNITYSDK_OFFSET(0x1B025470)
#define SYSTEM_NET_FTPWEBREQUEST_GETREMOTEFOLDERPATH_OFFSET UNITYSDK_OFFSET(0x1B022F70)
#define SYSTEM_NET_FTPWEBREQUEST_GETREQUESTSTREAM_OFFSET UNITYSDK_OFFSET(0x1B021BA0)
#define SYSTEM_NET_FTPWEBREQUEST_GETRESPONSESTATUS_OFFSET UNITYSDK_OFFSET(0x1B0228E0)
#define SYSTEM_NET_FTPWEBREQUEST_GETRESPONSE_OFFSET UNITYSDK_OFFSET(0x1B021550)
#define SYSTEM_NET_FTPWEBREQUEST_GETSERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x1B020590)
#define SYSTEM_NET_FTPWEBREQUEST_GET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1B020090)
#define SYSTEM_NET_FTPWEBREQUEST_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1B0200B0)
#define SYSTEM_NET_FTPWEBREQUEST_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x1B0206F0)
#define SYSTEM_NET_FTPWEBREQUEST_GET_ENABLESSL_OFFSET UNITYSDK_OFFSET(0x1B020290)
#define SYSTEM_NET_FTPWEBREQUEST_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1B0202A0)
#define SYSTEM_NET_FTPWEBREQUEST_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1B0202E0)
#define SYSTEM_NET_FTPWEBREQUEST_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x1B0204F0)
#define SYSTEM_NET_FTPWEBREQUEST_GET_READWRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1B020520)
#define SYSTEM_NET_FTPWEBREQUEST_GET_REQUESTURI_OFFSET UNITYSDK_OFFSET(0x1B020530)
#define SYSTEM_NET_FTPWEBREQUEST_GET_SERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x1B020540)
#define SYSTEM_NET_FTPWEBREQUEST_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1B020710)
#define SYSTEM_NET_FTPWEBREQUEST_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1B020660)
#define SYSTEM_NET_FTPWEBREQUEST_GET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1B0205E0)
#define SYSTEM_NET_FTPWEBREQUEST_INFINALSTATE_OFFSET UNITYSDK_OFFSET(0x1B020E30)
#define SYSTEM_NET_FTPWEBREQUEST_INITDATACONNECTION_OFFSET UNITYSDK_OFFSET(0x1B026040)
#define SYSTEM_NET_FTPWEBREQUEST_INITIATESECURECONNECTION_OFFSET UNITYSDK_OFFSET(0x1B026590)
#define SYSTEM_NET_FTPWEBREQUEST_INPROGRESS_OFFSET UNITYSDK_OFFSET(0x1B022810)
#define SYSTEM_NET_FTPWEBREQUEST_OPENCONTROLCONNECTION_OFFSET UNITYSDK_OFFSET(0x1B023530)
#define SYSTEM_NET_FTPWEBREQUEST_OPENDATACONNECTION_OFFSET UNITYSDK_OFFSET(0x1B0245E0)
#define SYSTEM_NET_FTPWEBREQUEST_OPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1B025FA0)
#define SYSTEM_NET_FTPWEBREQUEST_PROCESSMETHOD_OFFSET UNITYSDK_OFFSET(0x1B0220B0)
#define SYSTEM_NET_FTPWEBREQUEST_PROCESSREQUEST_OFFSET UNITYSDK_OFFSET(0x1B021D30)
#define SYSTEM_NET_FTPWEBREQUEST_PROCESSSIMPLEMETHOD_OFFSET UNITYSDK_OFFSET(0x1B023D20)
#define SYSTEM_NET_FTPWEBREQUEST_RESOLVEHOST_OFFSET UNITYSDK_OFFSET(0x1B021BD0)
#define SYSTEM_NET_FTPWEBREQUEST_SENDCOMMAND_1_OFFSET UNITYSDK_OFFSET(0x1B020B80)
#define SYSTEM_NET_FTPWEBREQUEST_SENDCOMMAND_OFFSET UNITYSDK_OFFSET(0x1B022DC0)
#define SYSTEM_NET_FTPWEBREQUEST_SERVICENOTAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1B026640)
#define SYSTEM_NET_FTPWEBREQUEST_SETCOMPLETEWITHERROR_OFFSET UNITYSDK_OFFSET(0x1B0227F0)
#define SYSTEM_NET_FTPWEBREQUEST_SETTRANSFERCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1B01E7D0)
#define SYSTEM_NET_FTPWEBREQUEST_SETTYPE_OFFSET UNITYSDK_OFFSET(0x1B022CF0)
#define SYSTEM_NET_FTPWEBREQUEST_SETUPPASSIVECONNECTION_OFFSET UNITYSDK_OFFSET(0x1B025040)
#define SYSTEM_NET_FTPWEBREQUEST_SET_CONNECTIONGROUPNAME_OFFSET UNITYSDK_OFFSET(0x1B020000)
#define SYSTEM_NET_FTPWEBREQUEST_SET_CONTENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1B0200A0)
#define SYSTEM_NET_FTPWEBREQUEST_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1B020040)
#define SYSTEM_NET_FTPWEBREQUEST_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1B0200C0)
#define SYSTEM_NET_FTPWEBREQUEST_SET_METHOD_OFFSET UNITYSDK_OFFSET(0x1B0202F0)
#define SYSTEM_NET_FTPWEBREQUEST_SET_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1B0204A0)
#define SYSTEM_NET_FTPWEBREQUEST_SET_PROXY_OFFSET UNITYSDK_OFFSET(0x1B020500)
#define SYSTEM_NET_FTPWEBREQUEST_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1B0207C0)
#define SYSTEM_NET_FTPWEBREQUEST_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1B020670)
#define SYSTEM_NET_FTPWEBREQUEST_SET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1B020620)
#define SYSTEM_NET_FTPWEBREQUEST_UPLOADDATA_OFFSET UNITYSDK_OFFSET(0x1B023C50)
#define SYSTEM_NET_FTPWEBREQUEST__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B026690)
#define SYSTEM_NET_FTPWEBREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B01FD70)

namespace System::Net
{
	inline static constexpr unsigned int FtpWebRequest_TypeDefinitionIndex = 2843;

	class FtpWebRequest : public ::System::Net::WebRequest
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_supportedCommands()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FtpWebRequest_TypeDefinitionIndex)->GetStaticField(0x19D10);
		}
		::System::Net::IPEndPoint* localEndPoint; // 0x38
		::System::IO::Stream* dataStream; // 0x40
		::System::Net::IPEndPoint* remoteEndPoint; // 0x48
		::System::Object* locker; // 0x50
		::System::IO::StreamReader* controlReader; // 0x58
		::System::String* initial_path; // 0x60
		::System::String* renameTo; // 0x68
		::System::Net::ServicePoint* servicePoint; // 0x70
		::System::Net::FtpAsyncResult* asyncResult; // 0x78
		::System::Net::NetworkCredential* credentials; // 0x80
		::System::Uri* requestUri; // 0x88
		::System::IO::Stream* controlStream; // 0x90
		::System::Text::Encoding* dataEncoding; // 0x98
		::System::IO::Stream* origDataStream; // 0xA0
		::System::Net::IPHostEntry* hostEntry; // 0xA8
		::System::Net::IWebProxy* proxy; // 0xB0
		::System::Net::FtpWebResponse* ftpResponse; // 0xB8
		::System::IO::Stream* requestStream; // 0xC0
		::System::String* file_name; // 0xC8
		::System::String* method; // 0xD0
		::System::Int64 offset; // 0xD8
		::System::Int32 timeout; // 0xE0
		::System::Int32 rwTimeout; // 0xE4
		::System::Boolean keepAlive; // 0xE8
		::System::Boolean binary; // 0xE9
		::System::Boolean enableSsl; // 0xEA
		::System::Boolean usePassive; // 0xEB
		::System::Net::FtpWebRequest_RequestState requestState; // 0xEC

		::System::Void _ctor(::System::Uri* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST__CCTOR_OFFSET))();
		}

		static ::System::Exception* GetMustImplement()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GETMUSTIMPLEMENT_OFFSET))();
		}

		::System::Void set_ConnectionGroupName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_CONNECTIONGROUPNAME_OFFSET))(this, a1);
		}

		::System::Void set_ContentType(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_CONTENTTYPE_OFFSET))(this, a1);
		}

		::System::Int64 get_ContentLength()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_CONTENTLENGTH_OFFSET))(this);
		}

		::System::Void set_ContentLength(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_CONTENTLENGTH_OFFSET))(this, a1);
		}

		::System::Net::ICredentials* get_Credentials()
		{
			return ((::System::Net::ICredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_CREDENTIALS_OFFSET))(this);
		}

		::System::Void set_Credentials(::System::Net::ICredentials* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_CREDENTIALS_OFFSET))(this, a1);
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

		::System::Void set_Method(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_METHOD_OFFSET))(this, a1);
		}

		::System::Void set_PreAuthenticate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_PREAUTHENTICATE_OFFSET))(this, a1);
		}

		::System::Net::IWebProxy* get_Proxy()
		{
			return ((::System::Net::IWebProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_PROXY_OFFSET))(this);
		}

		::System::Void set_Proxy(::System::Net::IWebProxy* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IWebProxy*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_PROXY_OFFSET))(this, a1);
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

		::System::Void set_UseDefaultCredentials(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_USEDEFAULTCREDENTIALS_OFFSET))(this, a1);
		}

		::System::Int32 get_Timeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_TIMEOUT_OFFSET))(this);
		}

		::System::Void set_Timeout(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_TIMEOUT_OFFSET))(this, a1);
		}

		::System::String* get_DataType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_DATATYPE_OFFSET))(this);
		}

		::System::Net::FtpWebRequest_RequestState get_State()
		{
			return ((::System::Net::FtpWebRequest_RequestState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::System::Net::FtpWebRequest_RequestState a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::FtpWebRequest_RequestState))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SET_STATE_OFFSET))(this, a1);
		}

		::System::Void Abort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_ABORT_OFFSET))(this);
		}

		::System::IAsyncResult* BeginGetResponse(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_BEGINGETRESPONSE_OFFSET))(this, a1, a2);
		}

		::System::Net::WebResponse* EndGetResponse(::System::IAsyncResult* a1)
		{
			return ((::System::Net::WebResponse*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_ENDGETRESPONSE_OFFSET))(this, a1);
		}

		::System::Net::WebResponse* GetResponse()
		{
			return ((::System::Net::WebResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GETRESPONSE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginGetRequestStream(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_BEGINGETREQUESTSTREAM_OFFSET))(this, a1, a2);
		}

		::System::IO::Stream* EndGetRequestStream(::System::IAsyncResult* a1)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_ENDGETREQUESTSTREAM_OFFSET))(this, a1);
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

		::System::String* GetRemoteFolderPath(::System::Uri* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GETREMOTEFOLDERPATH_OFFSET))(this, a1);
		}

		::System::Void CWDAndSetFileName(::System::Uri* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_CWDANDSETFILENAME_OFFSET))(this, a1);
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

		static ::System::String* GetInitialPath(::System::Net::FtpStatus* a1)
		{
			return ((::System::String*(*)(::System::Net::FtpStatus*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GETINITIALPATH_OFFSET))(a1);
		}

		::System::Net::Sockets::Socket* SetupPassiveConnection(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SETUPPASSIVECONNECTION_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetPortV4(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GETPORTV4_OFFSET))(this, a1);
		}

		::System::Int32 GetPortV6(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GETPORTV6_OFFSET))(this, a1);
		}

		::System::String* FormatAddress(::System::Net::IPAddress* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_FORMATADDRESS_OFFSET))(this, a1, a2);
		}

		::System::String* FormatAddressV6(::System::Net::IPAddress* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_FORMATADDRESSV6_OFFSET))(this, a1, a2);
		}

		::System::Exception* CreateExceptionFromResponse(::System::Net::FtpStatus* a1)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Net::FtpStatus*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_CREATEEXCEPTIONFROMRESPONSE_OFFSET))(this, a1);
		}

		::System::Void SetTransferCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SETTRANSFERCOMPLETED_OFFSET))(this);
		}

		::System::Void OperationCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_OPERATIONCOMPLETED_OFFSET))(this);
		}

		::System::Void SetCompleteWithError(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SETCOMPLETEWITHERROR_OFFSET))(this, a1);
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

		::System::Net::FtpStatus* SendCommand(::System::String* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Net::FtpStatus*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SENDCOMMAND_OFFSET))(this, a1, a2);
		}

		::System::Net::FtpStatus* SendCommand_1(::System::Boolean a1, ::System::String* a2, ::Il2CppArray<::System::String*>* a3)
		{
			return ((::System::Net::FtpStatus*(*)(::PVOID, ::System::Boolean, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SENDCOMMAND_1_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Net::FtpStatus* ServiceNotAvailable()
		{
			return ((::System::Net::FtpStatus*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_SERVICENOTAVAILABLE_OFFSET))();
		}

		::System::Net::FtpStatus* GetResponseStatus()
		{
			return ((::System::Net::FtpStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_GETRESPONSESTATUS_OFFSET))(this);
		}

		::System::Void InitiateSecureConnection(::System::IO::Stream*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_INITIATESECURECONNECTION_OFFSET))(this, a1);
		}

		::System::Boolean ChangeToSSLSocket(::System::IO::Stream*& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IO::Stream*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_FTPWEBREQUEST_CHANGETOSSLSOCKET_OFFSET))(this, a1);
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
