#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Mail/SmtpClient_AuthMechs.h"
#include "unitysdk/System/Net/Mail/SmtpClient_SmtpResponse.h"
#include "unitysdk/System/Net/Mail/SmtpDeliveryFormat.h"
#include "unitysdk/System/Net/Mail/SmtpDeliveryMethod.h"
#include "unitysdk/System/Net/Mime/TransferEncoding.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::ComponentModel { class AsyncCompletedEventArgs; }
namespace System::ComponentModel { class BackgroundWorker; }
namespace System::IO { class Stream; }
namespace System::IO { class StreamReader; }
namespace System::IO { class StreamWriter; }
namespace System::Net { class ICredentialsByHost; }
namespace System::Net { class ServicePoint; }
namespace System::Net::Mail { class AlternateView; }
namespace System::Net::Mail { class Attachment; }
namespace System::Net::Mail { class AttachmentBase; }
namespace System::Net::Mail { class LinkedResourceCollection; }
namespace System::Net::Mail { class MailAddress; }
namespace System::Net::Mail { class MailAddressCollection; }
namespace System::Net::Mail { class MailMessage; }
namespace System::Net::Mail { class SendCompletedEventHandler; }
namespace System::Net::Mime { class ContentType; }
namespace System::Net::Sockets { class TcpClient; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }
namespace System::Text { class Encoding; }
namespace System::Threading { class Mutex; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class TaskCompletionSource_1; }

#define SYSTEM_NET_MAIL_SMTPCLIENT_ADDPRIORITYHEADER_OFFSET UNITYSDK_OFFSET(0x1D247D50)
#define SYSTEM_NET_MAIL_SMTPCLIENT_ADD_SENDCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1D2443C0)
#define SYSTEM_NET_MAIL_SMTPCLIENT_AUTHENTICATE_1_OFFSET UNITYSDK_OFFSET(0x1D24BB40)
#define SYSTEM_NET_MAIL_SMTPCLIENT_AUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1D248980)
#define SYSTEM_NET_MAIL_SMTPCLIENT_CHECKCANCELLATION_OFFSET UNITYSDK_OFFSET(0x1D2457A0)
#define SYSTEM_NET_MAIL_SMTPCLIENT_CHECKSTATE_OFFSET UNITYSDK_OFFSET(0x1D243DE0)
#define SYSTEM_NET_MAIL_SMTPCLIENT_CHECKSTATUS_OFFSET UNITYSDK_OFFSET(0x1D24C210)
#define SYSTEM_NET_MAIL_SMTPCLIENT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1D2444D0)
#define SYSTEM_NET_MAIL_SMTPCLIENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D2444C0)
#define SYSTEM_NET_MAIL_SMTPCLIENT_ENCODEADDRESSES_OFFSET UNITYSDK_OFFSET(0x1D2447C0)
#define SYSTEM_NET_MAIL_SMTPCLIENT_ENCODEADDRESS_OFFSET UNITYSDK_OFFSET(0x1D2444E0)
#define SYSTEM_NET_MAIL_SMTPCLIENT_ENCODEBODY_1_OFFSET UNITYSDK_OFFSET(0x1D244D20)
#define SYSTEM_NET_MAIL_SMTPCLIENT_ENCODEBODY_OFFSET UNITYSDK_OFFSET(0x1D244B70)
#define SYSTEM_NET_MAIL_SMTPCLIENT_ENCODESUBJECTRFC2047_OFFSET UNITYSDK_OFFSET(0x1D244B00)
#define SYSTEM_NET_MAIL_SMTPCLIENT_ENDSECTION_OFFSET UNITYSDK_OFFSET(0x1D245230)
#define SYSTEM_NET_MAIL_SMTPCLIENT_GENERATEBOUNDARY_1_OFFSET UNITYSDK_OFFSET(0x1D245660)
#define SYSTEM_NET_MAIL_SMTPCLIENT_GENERATEBOUNDARY_OFFSET UNITYSDK_OFFSET(0x1D2455B0)
#define SYSTEM_NET_MAIL_SMTPCLIENT_GETTRANSFERENCODINGNAME_OFFSET UNITYSDK_OFFSET(0x1D249540)
#define SYSTEM_NET_MAIL_SMTPCLIENT_GET_CLIENTCERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1D243C60)
#define SYSTEM_NET_MAIL_SMTPCLIENT_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1D243D60)
#define SYSTEM_NET_MAIL_SMTPCLIENT_GET_DELIVERYFORMAT_OFFSET UNITYSDK_OFFSET(0x1D244150)
#define SYSTEM_NET_MAIL_SMTPCLIENT_GET_DELIVERYMETHOD_OFFSET UNITYSDK_OFFSET(0x1D243E50)
#define SYSTEM_NET_MAIL_SMTPCLIENT_GET_ENABLESSL_OFFSET UNITYSDK_OFFSET(0x1D243ED0)
#define SYSTEM_NET_MAIL_SMTPCLIENT_GET_HOST_OFFSET UNITYSDK_OFFSET(0x1D243F50)
#define SYSTEM_NET_MAIL_SMTPCLIENT_GET_PICKUPDIRECTORYLOCATION_OFFSET UNITYSDK_OFFSET(0x1D244060)
#define SYSTEM_NET_MAIL_SMTPCLIENT_GET_PORT_OFFSET UNITYSDK_OFFSET(0x1D244080)
#define SYSTEM_NET_MAIL_SMTPCLIENT_GET_SERVICEPOINT_OFFSET UNITYSDK_OFFSET(0x1D2441D0)
#define SYSTEM_NET_MAIL_SMTPCLIENT_GET_TARGETNAME_OFFSET UNITYSDK_OFFSET(0x1D243D40)
#define SYSTEM_NET_MAIL_SMTPCLIENT_GET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D244220)
#define SYSTEM_NET_MAIL_SMTPCLIENT_GET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1D2442F0)
#define SYSTEM_NET_MAIL_SMTPCLIENT_INITIATESECURECONNECTION_OFFSET UNITYSDK_OFFSET(0x1D2485F0)
#define SYSTEM_NET_MAIL_SMTPCLIENT_ISERROR_OFFSET UNITYSDK_OFFSET(0x1D245700)
#define SYSTEM_NET_MAIL_SMTPCLIENT_ONSENDCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1D245710)
#define SYSTEM_NET_MAIL_SMTPCLIENT_PARSEEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x1D245AE0)
#define SYSTEM_NET_MAIL_SMTPCLIENT_READ_OFFSET UNITYSDK_OFFSET(0x1D245810)
#define SYSTEM_NET_MAIL_SMTPCLIENT_REMOVE_SENDCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1D244440)
#define SYSTEM_NET_MAIL_SMTPCLIENT_RESETEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x1D245AD0)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SENDASYNCCANCEL_OFFSET UNITYSDK_OFFSET(0x1D249190)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SENDASYNC_1_OFFSET UNITYSDK_OFFSET(0x1D249100)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SENDASYNC_OFFSET UNITYSDK_OFFSET(0x1D248DC0)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SENDATTACHMENTS_OFFSET UNITYSDK_OFFSET(0x1D24A810)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SENDBODYLESSSINGLEALTERNATE_OFFSET UNITYSDK_OFFSET(0x1D249590)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SENDBODYWITHALTERNATEVIEWS_OFFSET UNITYSDK_OFFSET(0x1D2497B0)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SENDCOMMAND_OFFSET UNITYSDK_OFFSET(0x1D248540)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SENDCORE_OFFSET UNITYSDK_OFFSET(0x1D246AD0)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SENDDATA_OFFSET UNITYSDK_OFFSET(0x1D2452B0)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SENDDOT_OFFSET UNITYSDK_OFFSET(0x1D248B70)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SENDHEADER_OFFSET UNITYSDK_OFFSET(0x1D247CD0)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SENDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D246820)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SENDLINKEDRESOURCES_OFFSET UNITYSDK_OFFSET(0x1D24B230)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SENDMAILASYNCCOMPLETEDHANDLER_OFFSET UNITYSDK_OFFSET(0x1D248FA0)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SENDMAILASYNC_1_OFFSET UNITYSDK_OFFSET(0x1D248F20)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SENDMAILASYNC_OFFSET UNITYSDK_OFFSET(0x1D248C60)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SENDSIMPLEBODY_OFFSET UNITYSDK_OFFSET(0x1D249260)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SENDTOFILE_OFFSET UNITYSDK_OFFSET(0x1D2460E0)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SENDWITHATTACHMENTS_OFFSET UNITYSDK_OFFSET(0x1D248010)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SENDWITHOUTATTACHMENTS_OFFSET UNITYSDK_OFFSET(0x1D248450)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SEND_1_OFFSET UNITYSDK_OFFSET(0x1D248BE0)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SEND_OFFSET UNITYSDK_OFFSET(0x1D245DA0)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1D243D70)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SET_DELIVERYFORMAT_OFFSET UNITYSDK_OFFSET(0x1D244160)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SET_DELIVERYMETHOD_OFFSET UNITYSDK_OFFSET(0x1D243E60)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SET_ENABLESSL_OFFSET UNITYSDK_OFFSET(0x1D243EE0)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SET_HOST_OFFSET UNITYSDK_OFFSET(0x1D243F60)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SET_PICKUPDIRECTORYLOCATION_OFFSET UNITYSDK_OFFSET(0x1D244070)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SET_PORT_OFFSET UNITYSDK_OFFSET(0x1D244090)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SET_TARGETNAME_OFFSET UNITYSDK_OFFSET(0x1D243D50)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SET_TIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D244230)
#define SYSTEM_NET_MAIL_SMTPCLIENT_SET_USEDEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1D244300)
#define SYSTEM_NET_MAIL_SMTPCLIENT_STARTSECTION_1_OFFSET UNITYSDK_OFFSET(0x1D24AF70)
#define SYSTEM_NET_MAIL_SMTPCLIENT_STARTSECTION_2_OFFSET UNITYSDK_OFFSET(0x1D24B790)
#define SYSTEM_NET_MAIL_SMTPCLIENT_STARTSECTION_OFFSET UNITYSDK_OFFSET(0x1D24AE00)
#define SYSTEM_NET_MAIL_SMTPCLIENT_THROWIFERROR_OFFSET UNITYSDK_OFFSET(0x1D24C280)
#define SYSTEM_NET_MAIL_SMTPCLIENT_TOQUOTEDPRINTABLE_1_OFFSET UNITYSDK_OFFSET(0x1D244F10)
#define SYSTEM_NET_MAIL_SMTPCLIENT_TOQUOTEDPRINTABLE_OFFSET UNITYSDK_OFFSET(0x1D244CF0)
#define SYSTEM_NET_MAIL_SMTPCLIENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D243BD0)
#define SYSTEM_NET_MAIL_SMTPCLIENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D243B30)
#define SYSTEM_NET_MAIL_SMTPCLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D243AC0)

namespace System::Net::Mail
{
	inline static constexpr unsigned int SmtpClient_TypeDefinitionIndex = 3593;

	class SmtpClient : public ::System::Object
	{
	public:
		::System::IO::StreamReader* reader; // 0x10
		::System::Net::Sockets::TcpClient* client; // 0x18
		::System::Net::ICredentialsByHost* credentials; // 0x20
		::System::Net::Mail::MailMessage* messageInProcess; // 0x28
		::System::Net::Mail::MailAddress* defaultFrom; // 0x30
		::System::ComponentModel::BackgroundWorker* worker; // 0x38
		::System::Object* user_async_state; // 0x40
		::System::String* pickupDirectoryLocation; // 0x48
		::System::String* host; // 0x50
		::System::IO::Stream* stream; // 0x58
		::System::Net::Mail::SendCompletedEventHandler* SendCompleted; // 0x60
		::System::IO::StreamWriter* writer; // 0x68
		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates; // 0x70
		::System::String* _TargetName_k__BackingField; // 0x78
		::System::Threading::Mutex* mutex; // 0x80
		::System::Int32 timeout; // 0x88
		::System::Boolean enableSsl; // 0x8C
		::System::Int32 port; // 0x90
		::System::Net::Mail::SmtpDeliveryFormat deliveryFormat; // 0x94
		::System::Net::Mail::SmtpDeliveryMethod deliveryMethod; // 0x98
		::System::Net::Mail::SmtpClient_AuthMechs authMechs; // 0x9C
		::System::Int32 boundaryIndex; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* host)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT__CTOR_1_OFFSET))(this, host);
		}

		::System::Void _ctor_2(::System::String* host, ::System::Int32 port)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT__CTOR_2_OFFSET))(this, host, port);
		}

		::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_GET_CLIENTCERTIFICATES_OFFSET))(this);
		}

		::System::String* get_TargetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_GET_TARGETNAME_OFFSET))(this);
		}

		::System::Void set_TargetName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SET_TARGETNAME_OFFSET))(this, value);
		}

		::System::Net::ICredentialsByHost* get_Credentials()
		{
			return ((::System::Net::ICredentialsByHost*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_GET_CREDENTIALS_OFFSET))(this);
		}

		::System::Void set_Credentials(::System::Net::ICredentialsByHost* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::ICredentialsByHost*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SET_CREDENTIALS_OFFSET))(this, value);
		}

		::System::Net::Mail::SmtpDeliveryMethod get_DeliveryMethod()
		{
			return ((::System::Net::Mail::SmtpDeliveryMethod(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_GET_DELIVERYMETHOD_OFFSET))(this);
		}

		::System::Void set_DeliveryMethod(::System::Net::Mail::SmtpDeliveryMethod value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::SmtpDeliveryMethod))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SET_DELIVERYMETHOD_OFFSET))(this, value);
		}

		::System::Boolean get_EnableSsl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_GET_ENABLESSL_OFFSET))(this);
		}

		::System::Void set_EnableSsl(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SET_ENABLESSL_OFFSET))(this, value);
		}

		::System::String* get_Host()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_GET_HOST_OFFSET))(this);
		}

		::System::Void set_Host(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SET_HOST_OFFSET))(this, value);
		}

		::System::String* get_PickupDirectoryLocation()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_GET_PICKUPDIRECTORYLOCATION_OFFSET))(this);
		}

		::System::Void set_PickupDirectoryLocation(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SET_PICKUPDIRECTORYLOCATION_OFFSET))(this, value);
		}

		::System::Int32 get_Port()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_GET_PORT_OFFSET))(this);
		}

		::System::Void set_Port(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SET_PORT_OFFSET))(this, value);
		}

		::System::Net::Mail::SmtpDeliveryFormat get_DeliveryFormat()
		{
			return ((::System::Net::Mail::SmtpDeliveryFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_GET_DELIVERYFORMAT_OFFSET))(this);
		}

		::System::Void set_DeliveryFormat(::System::Net::Mail::SmtpDeliveryFormat value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::SmtpDeliveryFormat))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SET_DELIVERYFORMAT_OFFSET))(this, value);
		}

		::System::Net::ServicePoint* get_ServicePoint()
		{
			return ((::System::Net::ServicePoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_GET_SERVICEPOINT_OFFSET))(this);
		}

		::System::Int32 get_Timeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_GET_TIMEOUT_OFFSET))(this);
		}

		::System::Void set_Timeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SET_TIMEOUT_OFFSET))(this, value);
		}

		::System::Boolean get_UseDefaultCredentials()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_GET_USEDEFAULTCREDENTIALS_OFFSET))(this);
		}

		::System::Void set_UseDefaultCredentials(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SET_USEDEFAULTCREDENTIALS_OFFSET))(this, value);
		}

		::System::Void add_SendCompleted(::System::Net::Mail::SendCompletedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::SendCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_ADD_SENDCOMPLETED_OFFSET))(this, value);
		}

		::System::Void remove_SendCompleted(::System::Net::Mail::SendCompletedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::SendCompletedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_REMOVE_SENDCOMPLETED_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void CheckState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_CHECKSTATE_OFFSET))(this);
		}

		static ::System::String* EncodeAddress(::System::Net::Mail::MailAddress* address)
		{
			return ((::System::String*(*)(::System::Net::Mail::MailAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_ENCODEADDRESS_OFFSET))(address);
		}

		static ::System::String* EncodeAddresses(::System::Net::Mail::MailAddressCollection* addresses)
		{
			return ((::System::String*(*)(::System::Net::Mail::MailAddressCollection*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_ENCODEADDRESSES_OFFSET))(addresses);
		}

		::System::String* EncodeSubjectRFC2047(::System::Net::Mail::MailMessage* message)
		{
			return ((::System::String*(*)(::PVOID, ::System::Net::Mail::MailMessage*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_ENCODESUBJECTRFC2047_OFFSET))(this, message);
		}

		::System::String* EncodeBody(::System::Net::Mail::MailMessage* message)
		{
			return ((::System::String*(*)(::PVOID, ::System::Net::Mail::MailMessage*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_ENCODEBODY_OFFSET))(this, message);
		}

		::System::String* EncodeBody_1(::System::Net::Mail::AlternateView* av)
		{
			return ((::System::String*(*)(::PVOID, ::System::Net::Mail::AlternateView*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_ENCODEBODY_1_OFFSET))(this, av);
		}

		::System::Void EndSection(::System::String* section)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_ENDSECTION_OFFSET))(this, section);
		}

		::System::String* GenerateBoundary()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_GENERATEBOUNDARY_OFFSET))(this);
		}

		static ::System::String* GenerateBoundary_1(::System::Int32 index)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_GENERATEBOUNDARY_1_OFFSET))(index);
		}

		::System::Boolean IsError(::System::Net::Mail::SmtpClient_SmtpResponse status)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Mail::SmtpClient_SmtpResponse))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_ISERROR_OFFSET))(this, status);
		}

		::System::Void OnSendCompleted(::System::ComponentModel::AsyncCompletedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::AsyncCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_ONSENDCOMPLETED_OFFSET))(this, e);
		}

		::System::Void CheckCancellation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_CHECKCANCELLATION_OFFSET))(this);
		}

		::System::Net::Mail::SmtpClient_SmtpResponse Read()
		{
			return ((::System::Net::Mail::SmtpClient_SmtpResponse(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_READ_OFFSET))(this);
		}

		::System::Void ResetExtensions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_RESETEXTENSIONS_OFFSET))(this);
		}

		::System::Void ParseExtensions(::System::String* extens)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_PARSEEXTENSIONS_OFFSET))(this, extens);
		}

		::System::Void Send(::System::Net::Mail::MailMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::MailMessage*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SEND_OFFSET))(this, message);
		}

		::System::Void SendInternal(::System::Net::Mail::MailMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::MailMessage*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SENDINTERNAL_OFFSET))(this, message);
		}

		::System::Void SendToFile(::System::Net::Mail::MailMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::MailMessage*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SENDTOFILE_OFFSET))(this, message);
		}

		::System::Void SendCore(::System::Net::Mail::MailMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::MailMessage*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SENDCORE_OFFSET))(this, message);
		}

		::System::Void Send_1(::System::String* from, ::System::String* recipients, ::System::String* subject, ::System::String* body)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SEND_1_OFFSET))(this, from, recipients, subject, body);
		}

		::System::Threading::Tasks::Task* SendMailAsync(::System::Net::Mail::MailMessage* message)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Net::Mail::MailMessage*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SENDMAILASYNC_OFFSET))(this, message);
		}

		::System::Threading::Tasks::Task* SendMailAsync_1(::System::String* from, ::System::String* recipients, ::System::String* subject, ::System::String* body)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SENDMAILASYNC_1_OFFSET))(this, from, recipients, subject, body);
		}

		static ::System::Void SendMailAsyncCompletedHandler(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* source, ::System::ComponentModel::AsyncCompletedEventArgs* e, ::System::Net::Mail::SendCompletedEventHandler* handler, ::System::Net::Mail::SmtpClient* client)
		{
			return ((::System::Void(*)(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*, ::System::ComponentModel::AsyncCompletedEventArgs*, ::System::Net::Mail::SendCompletedEventHandler*, ::System::Net::Mail::SmtpClient*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SENDMAILASYNCCOMPLETEDHANDLER_OFFSET))(source, e, handler, client);
		}

		::System::Void SendDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SENDDOT_OFFSET))(this);
		}

		::System::Void SendData(::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SENDDATA_OFFSET))(this, data);
		}

		::System::Void SendAsync(::System::Net::Mail::MailMessage* message, ::System::Object* userToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::MailMessage*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SENDASYNC_OFFSET))(this, message, userToken);
		}

		::System::Void SendAsync_1(::System::String* from, ::System::String* recipients, ::System::String* subject, ::System::String* body, ::System::Object* userToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SENDASYNC_1_OFFSET))(this, from, recipients, subject, body, userToken);
		}

		::System::Void SendAsyncCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SENDASYNCCANCEL_OFFSET))(this);
		}

		::System::Void AddPriorityHeader(::System::Net::Mail::MailMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::MailMessage*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_ADDPRIORITYHEADER_OFFSET))(this, message);
		}

		::System::Void SendSimpleBody(::System::Net::Mail::MailMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::MailMessage*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SENDSIMPLEBODY_OFFSET))(this, message);
		}

		::System::Void SendBodylessSingleAlternate(::System::Net::Mail::AlternateView* av)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::AlternateView*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SENDBODYLESSSINGLEALTERNATE_OFFSET))(this, av);
		}

		::System::Void SendWithoutAttachments(::System::Net::Mail::MailMessage* message, ::System::String* boundary, ::System::Boolean attachmentExists)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::MailMessage*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SENDWITHOUTATTACHMENTS_OFFSET))(this, message, boundary, attachmentExists);
		}

		::System::Void SendWithAttachments(::System::Net::Mail::MailMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::MailMessage*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SENDWITHATTACHMENTS_OFFSET))(this, message);
		}

		::System::Void SendBodyWithAlternateViews(::System::Net::Mail::MailMessage* message, ::System::String* boundary, ::System::Boolean attachmentExists)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::MailMessage*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SENDBODYWITHALTERNATEVIEWS_OFFSET))(this, message, boundary, attachmentExists);
		}

		::System::Void SendLinkedResources(::System::Net::Mail::MailMessage* message, ::System::Net::Mail::LinkedResourceCollection* resources, ::System::String* boundary)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::MailMessage*, ::System::Net::Mail::LinkedResourceCollection*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SENDLINKEDRESOURCES_OFFSET))(this, message, resources, boundary);
		}

		::System::Void SendAttachments(::System::Net::Mail::MailMessage* message, ::System::Net::Mail::Attachment* body, ::System::String* boundary)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::MailMessage*, ::System::Net::Mail::Attachment*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SENDATTACHMENTS_OFFSET))(this, message, body, boundary);
		}

		::System::Net::Mail::SmtpClient_SmtpResponse SendCommand(::System::String* command)
		{
			return ((::System::Net::Mail::SmtpClient_SmtpResponse(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SENDCOMMAND_OFFSET))(this, command);
		}

		::System::Void SendHeader(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_SENDHEADER_OFFSET))(this, name, value);
		}

		::System::Void StartSection(::System::String* section, ::System::Net::Mime::ContentType* sectionContentType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::Mime::ContentType*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_STARTSECTION_OFFSET))(this, section, sectionContentType);
		}

		::System::Void StartSection_1(::System::String* section, ::System::Net::Mime::ContentType* sectionContentType, ::System::Net::Mail::AttachmentBase* att)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::Mime::ContentType*, ::System::Net::Mail::AttachmentBase*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_STARTSECTION_1_OFFSET))(this, section, sectionContentType, att);
		}

		::System::Void StartSection_2(::System::String* section, ::System::Net::Mime::ContentType* sectionContentType, ::System::Net::Mail::Attachment* att, ::System::Boolean sendDisposition)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::Mime::ContentType*, ::System::Net::Mail::Attachment*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_STARTSECTION_2_OFFSET))(this, section, sectionContentType, att, sendDisposition);
		}

		::System::String* ToQuotedPrintable(::System::String* input, ::System::Text::Encoding* enc)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_TOQUOTEDPRINTABLE_OFFSET))(this, input, enc);
		}

		::System::String* ToQuotedPrintable_1(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_TOQUOTEDPRINTABLE_1_OFFSET))(this, bytes);
		}

		static ::System::String* GetTransferEncodingName(::System::Net::Mime::TransferEncoding encoding)
		{
			return ((::System::String*(*)(::System::Net::Mime::TransferEncoding))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_GETTRANSFERENCODINGNAME_OFFSET))(encoding);
		}

		::System::Void InitiateSecureConnection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_INITIATESECURECONNECTION_OFFSET))(this);
		}

		::System::Void Authenticate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_AUTHENTICATE_OFFSET))(this);
		}

		::System::Void CheckStatus(::System::Net::Mail::SmtpClient_SmtpResponse status, ::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::SmtpClient_SmtpResponse, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_CHECKSTATUS_OFFSET))(this, status, i);
		}

		::System::Void ThrowIfError(::System::Net::Mail::SmtpClient_SmtpResponse status)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::SmtpClient_SmtpResponse))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_THROWIFERROR_OFFSET))(this, status);
		}

		::System::Void Authenticate_1(::System::String* user, ::System::String* password)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT_AUTHENTICATE_1_OFFSET))(this, user, password);
		}
	};
}
