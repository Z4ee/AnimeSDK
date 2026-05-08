#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/Net/Security/AuthenticatedStream.h"
#include "unitysdk/System/Net/Security/EncryptionPolicy.h"
#include "unitysdk/System/Security/Authentication/CipherAlgorithmType.h"
#include "unitysdk/System/Security/Authentication/ExchangeAlgorithmType.h"
#include "unitysdk/System/Security/Authentication/HashAlgorithmType.h"
#include "unitysdk/System/Security/Authentication/SslProtocols.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Mono::Security::Interface { class IMonoSslStream; }
namespace Mono::Security::Interface { class MonoTlsProvider; }
namespace Mono::Security::Interface { class MonoTlsSettings; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Net { class TransportContext; }
namespace System::Net::Security { class LocalCertificateSelectionCallback; }
namespace System::Net::Security { class RemoteCertificateValidationCallback; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASCLIENTASYNC_1_OFFSET UNITYSDK_OFFSET(0x1A259F50)
#define SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASCLIENTASYNC_2_OFFSET UNITYSDK_OFFSET(0x1A25CD60)
#define SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASCLIENTASYNC_OFFSET UNITYSDK_OFFSET(0x1A259E10)
#define SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASCLIENT_1_OFFSET UNITYSDK_OFFSET(0x1A2591A0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASCLIENT_2_OFFSET UNITYSDK_OFFSET(0x1A25CD20)
#define SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASCLIENT_OFFSET UNITYSDK_OFFSET(0x1A259060)
#define SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASSERVERASYNC_1_OFFSET UNITYSDK_OFFSET(0x1A25A1F0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASSERVERASYNC_2_OFFSET UNITYSDK_OFFSET(0x1A25CDE0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASSERVERASYNC_OFFSET UNITYSDK_OFFSET(0x1A25A0B0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASSERVER_1_OFFSET UNITYSDK_OFFSET(0x1A259850)
#define SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASSERVER_2_OFFSET UNITYSDK_OFFSET(0x1A25CDA0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASSERVER_OFFSET UNITYSDK_OFFSET(0x1A259710)
#define SYSTEM_NET_SECURITY_SSLSTREAM_BEGINAUTHENTICATEASCLIENT_1_OFFSET UNITYSDK_OFFSET(0x1A259450)
#define SYSTEM_NET_SECURITY_SSLSTREAM_BEGINAUTHENTICATEASCLIENT_2_OFFSET UNITYSDK_OFFSET(0x1A25CE20)
#define SYSTEM_NET_SECURITY_SSLSTREAM_BEGINAUTHENTICATEASCLIENT_OFFSET UNITYSDK_OFFSET(0x1A259300)
#define SYSTEM_NET_SECURITY_SSLSTREAM_BEGINAUTHENTICATEASSERVER_1_OFFSET UNITYSDK_OFFSET(0x1A259B00)
#define SYSTEM_NET_SECURITY_SSLSTREAM_BEGINAUTHENTICATEASSERVER_2_OFFSET UNITYSDK_OFFSET(0x1A25CE60)
#define SYSTEM_NET_SECURITY_SSLSTREAM_BEGINAUTHENTICATEASSERVER_OFFSET UNITYSDK_OFFSET(0x1A2599B0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1A25C7A0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1A25CA60)
#define SYSTEM_NET_SECURITY_SSLSTREAM_CHECKDISPOSED_OFFSET UNITYSDK_OFFSET(0x1A258B90)
#define SYSTEM_NET_SECURITY_SSLSTREAM_CREATEMONOSSLSTREAM_OFFSET UNITYSDK_OFFSET(0x1A258F70)
#define SYSTEM_NET_SECURITY_SSLSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A25C1F0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_ENDAUTHENTICATEASCLIENT_OFFSET UNITYSDK_OFFSET(0x1A2595D0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_ENDAUTHENTICATEASSERVER_OFFSET UNITYSDK_OFFSET(0x1A259C80)
#define SYSTEM_NET_SECURITY_SSLSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1A25C920)
#define SYSTEM_NET_SECURITY_SSLSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1A25CBE0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_FLUSHASYNC_OFFSET UNITYSDK_OFFSET(0x1A25C190)
#define SYSTEM_NET_SECURITY_SSLSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1A25C1C0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GETPROVIDER_OFFSET UNITYSDK_OFFSET(0x1A258C70)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1A25B660)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1A25B650)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_CANTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A25B740)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1A25B770)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_CHECKCERTREVOCATIONSTATUS_OFFSET UNITYSDK_OFFSET(0x1A25ABA0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_CIPHERALGORITHM_OFFSET UNITYSDK_OFFSET(0x1A25AF30)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_CIPHERSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1A25B060)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_HASHALGORITHM_OFFSET UNITYSDK_OFFSET(0x1A25B190)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_HASHSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1A25B2C0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_IMPL_OFFSET UNITYSDK_OFFSET(0x1A258B20)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_ISAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x1A25A480)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_ISENCRYPTED_OFFSET UNITYSDK_OFFSET(0x1A25A6E0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_ISMUTUALLYAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x1A25A5B0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_ISSERVER_OFFSET UNITYSDK_OFFSET(0x1A25A940)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_ISSIGNED_OFFSET UNITYSDK_OFFSET(0x1A25A810)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_KEYEXCHANGEALGORITHM_OFFSET UNITYSDK_OFFSET(0x1A25B3F0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_KEYEXCHANGESTRENGTH_OFFSET UNITYSDK_OFFSET(0x1A25B520)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1A25BD30)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_LOCALCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1A25ACD0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1A25BE60)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x1A258C00)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A25B850)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_REMOTECERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1A25AE00)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_SSLPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1A25AA70)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_TRANSPORTCONTEXT_OFFSET UNITYSDK_OFFSET(0x1A259DC0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A25BAC0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1A25C3C0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1A25C130)
#define SYSTEM_NET_SECURITY_SSLSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1A25BFF0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1A25BF90)
#define SYSTEM_NET_SECURITY_SSLSTREAM_SET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A25B980)
#define SYSTEM_NET_SECURITY_SSLSTREAM_SET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A25BBF0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_SHUTDOWNASYNC_OFFSET UNITYSDK_OFFSET(0x1A25A350)
#define SYSTEM_NET_SECURITY_SSLSTREAM_WRITE_1_OFFSET UNITYSDK_OFFSET(0x1A25C650)
#define SYSTEM_NET_SECURITY_SSLSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1A25C510)
#define SYSTEM_NET_SECURITY_SSLSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A258CE0)
#define SYSTEM_NET_SECURITY_SSLSTREAM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A258D40)
#define SYSTEM_NET_SECURITY_SSLSTREAM__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A258D60)
#define SYSTEM_NET_SECURITY_SSLSTREAM__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1A258F00)
#define SYSTEM_NET_SECURITY_SSLSTREAM__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1A258F10)
#define SYSTEM_NET_SECURITY_SSLSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A258C80)

namespace System::Net::Security
{
	inline static constexpr unsigned int SslStream_TypeDefinitionIndex = 3703;

	class SslStream : public ::System::Net::Security::AuthenticatedStream
	{
	public:
		::Mono::Security::Interface::MonoTlsProvider* provider; // 0x38
		::Mono::Security::Interface::IMonoSslStream* impl; // 0x40

		::System::Void _ctor(::System::IO::Stream* innerStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM__CTOR_OFFSET))(this, innerStream);
		}

		::System::Void _ctor_1(::System::IO::Stream* innerStream, ::System::Boolean leaveInnerStreamOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM__CTOR_1_OFFSET))(this, innerStream, leaveInnerStreamOpen);
		}

		::System::Void _ctor_2(::System::IO::Stream* innerStream, ::System::Boolean leaveInnerStreamOpen, ::System::Net::Security::RemoteCertificateValidationCallback* userCertificateValidationCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean, ::System::Net::Security::RemoteCertificateValidationCallback*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM__CTOR_2_OFFSET))(this, innerStream, leaveInnerStreamOpen, userCertificateValidationCallback);
		}

		::System::Void _ctor_3(::System::IO::Stream* innerStream, ::System::Boolean leaveInnerStreamOpen, ::System::Net::Security::RemoteCertificateValidationCallback* userCertificateValidationCallback, ::System::Net::Security::LocalCertificateSelectionCallback* userCertificateSelectionCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean, ::System::Net::Security::RemoteCertificateValidationCallback*, ::System::Net::Security::LocalCertificateSelectionCallback*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM__CTOR_3_OFFSET))(this, innerStream, leaveInnerStreamOpen, userCertificateValidationCallback, userCertificateSelectionCallback);
		}

		::System::Void _ctor_4(::System::IO::Stream* innerStream, ::System::Boolean leaveInnerStreamOpen, ::System::Net::Security::RemoteCertificateValidationCallback* userCertificateValidationCallback, ::System::Net::Security::LocalCertificateSelectionCallback* userCertificateSelectionCallback, ::System::Net::Security::EncryptionPolicy encryptionPolicy)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean, ::System::Net::Security::RemoteCertificateValidationCallback*, ::System::Net::Security::LocalCertificateSelectionCallback*, ::System::Net::Security::EncryptionPolicy))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM__CTOR_4_OFFSET))(this, innerStream, leaveInnerStreamOpen, userCertificateValidationCallback, userCertificateSelectionCallback, encryptionPolicy);
		}

		::System::Void _ctor_5(::System::IO::Stream* innerStream, ::System::Boolean leaveInnerStreamOpen, ::Mono::Security::Interface::MonoTlsProvider* provider, ::Mono::Security::Interface::MonoTlsSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean, ::Mono::Security::Interface::MonoTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM__CTOR_5_OFFSET))(this, innerStream, leaveInnerStreamOpen, provider, settings);
		}

		::Mono::Security::Interface::IMonoSslStream* get_Impl()
		{
			return ((::Mono::Security::Interface::IMonoSslStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_IMPL_OFFSET))(this);
		}

		::Mono::Security::Interface::MonoTlsProvider* get_Provider()
		{
			return ((::Mono::Security::Interface::MonoTlsProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_PROVIDER_OFFSET))(this);
		}

		static ::Mono::Security::Interface::MonoTlsProvider* GetProvider()
		{
			return ((::Mono::Security::Interface::MonoTlsProvider*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GETPROVIDER_OFFSET))();
		}

		static ::Mono::Security::Interface::IMonoSslStream* CreateMonoSslStream(::System::IO::Stream* innerStream, ::System::Boolean leaveInnerStreamOpen, ::Mono::Security::Interface::MonoTlsProvider* provider, ::Mono::Security::Interface::MonoTlsSettings* settings)
		{
			return ((::Mono::Security::Interface::IMonoSslStream*(*)(::System::IO::Stream*, ::System::Boolean, ::Mono::Security::Interface::MonoTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_CREATEMONOSSLSTREAM_OFFSET))(innerStream, leaveInnerStreamOpen, provider, settings);
		}

		::System::Void AuthenticateAsClient(::System::String* targetHost)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASCLIENT_OFFSET))(this, targetHost);
		}

		::System::Void AuthenticateAsClient_1(::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, ::System::Security::Authentication::SslProtocols enabledSslProtocols, ::System::Boolean checkCertificateRevocation)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Authentication::SslProtocols, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASCLIENT_1_OFFSET))(this, targetHost, clientCertificates, enabledSslProtocols, checkCertificateRevocation);
		}

		::System::IAsyncResult* BeginAuthenticateAsClient(::System::String* targetHost, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_BEGINAUTHENTICATEASCLIENT_OFFSET))(this, targetHost, asyncCallback, asyncState);
		}

		::System::IAsyncResult* BeginAuthenticateAsClient_1(::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, ::System::Security::Authentication::SslProtocols enabledSslProtocols, ::System::Boolean checkCertificateRevocation, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Authentication::SslProtocols, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_BEGINAUTHENTICATEASCLIENT_1_OFFSET))(this, targetHost, clientCertificates, enabledSslProtocols, checkCertificateRevocation, asyncCallback, asyncState);
		}

		::System::Void EndAuthenticateAsClient(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_ENDAUTHENTICATEASCLIENT_OFFSET))(this, asyncResult);
		}

		::System::Void AuthenticateAsServer(::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASSERVER_OFFSET))(this, serverCertificate);
		}

		::System::Void AuthenticateAsServer_1(::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::Boolean clientCertificateRequired, ::System::Security::Authentication::SslProtocols enabledSslProtocols, ::System::Boolean checkCertificateRevocation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Boolean, ::System::Security::Authentication::SslProtocols, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASSERVER_1_OFFSET))(this, serverCertificate, clientCertificateRequired, enabledSslProtocols, checkCertificateRevocation);
		}

		::System::IAsyncResult* BeginAuthenticateAsServer(::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_BEGINAUTHENTICATEASSERVER_OFFSET))(this, serverCertificate, asyncCallback, asyncState);
		}

		::System::IAsyncResult* BeginAuthenticateAsServer_1(::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::Boolean clientCertificateRequired, ::System::Security::Authentication::SslProtocols enabledSslProtocols, ::System::Boolean checkCertificateRevocation, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Boolean, ::System::Security::Authentication::SslProtocols, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_BEGINAUTHENTICATEASSERVER_1_OFFSET))(this, serverCertificate, clientCertificateRequired, enabledSslProtocols, checkCertificateRevocation, asyncCallback, asyncState);
		}

		::System::Void EndAuthenticateAsServer(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_ENDAUTHENTICATEASSERVER_OFFSET))(this, asyncResult);
		}

		::System::Net::TransportContext* get_TransportContext()
		{
			return ((::System::Net::TransportContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_TRANSPORTCONTEXT_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* AuthenticateAsClientAsync(::System::String* targetHost)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASCLIENTASYNC_OFFSET))(this, targetHost);
		}

		::System::Threading::Tasks::Task* AuthenticateAsClientAsync_1(::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, ::System::Security::Authentication::SslProtocols enabledSslProtocols, ::System::Boolean checkCertificateRevocation)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Authentication::SslProtocols, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASCLIENTASYNC_1_OFFSET))(this, targetHost, clientCertificates, enabledSslProtocols, checkCertificateRevocation);
		}

		::System::Threading::Tasks::Task* AuthenticateAsServerAsync(::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASSERVERASYNC_OFFSET))(this, serverCertificate);
		}

		::System::Threading::Tasks::Task* AuthenticateAsServerAsync_1(::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::Boolean clientCertificateRequired, ::System::Security::Authentication::SslProtocols enabledSslProtocols, ::System::Boolean checkCertificateRevocation)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Boolean, ::System::Security::Authentication::SslProtocols, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASSERVERASYNC_1_OFFSET))(this, serverCertificate, clientCertificateRequired, enabledSslProtocols, checkCertificateRevocation);
		}

		::System::Threading::Tasks::Task* ShutdownAsync()
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_SHUTDOWNASYNC_OFFSET))(this);
		}

		::System::Boolean get_IsAuthenticated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_ISAUTHENTICATED_OFFSET))(this);
		}

		::System::Boolean get_IsMutuallyAuthenticated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_ISMUTUALLYAUTHENTICATED_OFFSET))(this);
		}

		::System::Boolean get_IsEncrypted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_ISENCRYPTED_OFFSET))(this);
		}

		::System::Boolean get_IsSigned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_ISSIGNED_OFFSET))(this);
		}

		::System::Boolean get_IsServer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_ISSERVER_OFFSET))(this);
		}

		::System::Security::Authentication::SslProtocols get_SslProtocol()
		{
			return ((::System::Security::Authentication::SslProtocols(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_SSLPROTOCOL_OFFSET))(this);
		}

		::System::Boolean get_CheckCertRevocationStatus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_CHECKCERTREVOCATIONSTATUS_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalCertificate()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_LOCALCERTIFICATE_OFFSET))(this);
		}

		::System::Security::Cryptography::X509Certificates::X509Certificate* get_RemoteCertificate()
		{
			return ((::System::Security::Cryptography::X509Certificates::X509Certificate*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_REMOTECERTIFICATE_OFFSET))(this);
		}

		::System::Security::Authentication::CipherAlgorithmType get_CipherAlgorithm()
		{
			return ((::System::Security::Authentication::CipherAlgorithmType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_CIPHERALGORITHM_OFFSET))(this);
		}

		::System::Int32 get_CipherStrength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_CIPHERSTRENGTH_OFFSET))(this);
		}

		::System::Security::Authentication::HashAlgorithmType get_HashAlgorithm()
		{
			return ((::System::Security::Authentication::HashAlgorithmType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_HASHALGORITHM_OFFSET))(this);
		}

		::System::Int32 get_HashStrength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_HASHSTRENGTH_OFFSET))(this);
		}

		::System::Security::Authentication::ExchangeAlgorithmType get_KeyExchangeAlgorithm()
		{
			return ((::System::Security::Authentication::ExchangeAlgorithmType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_KEYEXCHANGEALGORITHM_OFFSET))(this);
		}

		::System::Int32 get_KeyExchangeStrength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_KEYEXCHANGESTRENGTH_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanTimeout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_CANTIMEOUT_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Int32 get_ReadTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_READTIMEOUT_OFFSET))(this);
		}

		::System::Void set_ReadTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_SET_READTIMEOUT_OFFSET))(this, value);
		}

		::System::Int32 get_WriteTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_WRITETIMEOUT_OFFSET))(this);
		}

		::System::Void set_WriteTimeout(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_SET_WRITETIMEOUT_OFFSET))(this, value);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_SET_POSITION_OFFSET))(this, value);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_SETLENGTH_OFFSET))(this, value);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_FLUSHASYNC_OFFSET))(this, cancellationToken);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Void CheckDisposed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_CHECKDISPOSED_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_WRITE_OFFSET))(this, buffer);
		}

		::System::Void Write_1(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_WRITE_1_OFFSET))(this, buffer, offset, count);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_BEGINREAD_OFFSET))(this, buffer, offset, count, asyncCallback, asyncState);
		}

		::System::Int32 EndRead(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_ENDREAD_OFFSET))(this, asyncResult);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_BEGINWRITE_OFFSET))(this, buffer, offset, count, asyncCallback, asyncState);
		}

		::System::Void EndWrite(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_ENDWRITE_OFFSET))(this, asyncResult);
		}

		::System::Void AuthenticateAsClient_2(::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, ::System::Boolean checkCertificateRevocation)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASCLIENT_2_OFFSET))(this, targetHost, clientCertificates, checkCertificateRevocation);
		}

		::System::Threading::Tasks::Task* AuthenticateAsClientAsync_2(::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, ::System::Boolean checkCertificateRevocation)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASCLIENTASYNC_2_OFFSET))(this, targetHost, clientCertificates, checkCertificateRevocation);
		}

		::System::Void AuthenticateAsServer_2(::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::Boolean clientCertificateRequired, ::System::Boolean checkCertificateRevocation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASSERVER_2_OFFSET))(this, serverCertificate, clientCertificateRequired, checkCertificateRevocation);
		}

		::System::Threading::Tasks::Task* AuthenticateAsServerAsync_2(::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::Boolean clientCertificateRequired, ::System::Boolean checkCertificateRevocation)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASSERVERASYNC_2_OFFSET))(this, serverCertificate, clientCertificateRequired, checkCertificateRevocation);
		}

		::System::IAsyncResult* BeginAuthenticateAsClient_2(::System::String* targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, ::System::Boolean checkCertificateRevocation, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_BEGINAUTHENTICATEASCLIENT_2_OFFSET))(this, targetHost, clientCertificates, checkCertificateRevocation, asyncCallback, asyncState);
		}

		::System::IAsyncResult* BeginAuthenticateAsServer_2(::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::Boolean clientCertificateRequired, ::System::Boolean checkCertificateRevocation, ::System::AsyncCallback* asyncCallback, ::System::Object* asyncState)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Boolean, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_BEGINAUTHENTICATEASSERVER_2_OFFSET))(this, serverCertificate, clientCertificateRequired, checkCertificateRevocation, asyncCallback, asyncState);
		}
	};
}
