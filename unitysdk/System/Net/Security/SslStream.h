#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/Net/Security/AuthenticatedStream.h"
#include "unitysdk/System/Security/Authentication/SslProtocols.h"

namespace Mono::Security::Interface { class IMonoSslStream; }
namespace Mono::Security::Interface { class MonoTlsProvider; }
namespace Mono::Security::Interface { class MonoTlsSettings; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::IO { class Stream; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }

#define SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASSERVER_OFFSET UNITYSDK_OFFSET(0x1A13E470)
#define SYSTEM_NET_SECURITY_SSLSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1A13EB30)
#define SYSTEM_NET_SECURITY_SSLSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1A13EC10)
#define SYSTEM_NET_SECURITY_SSLSTREAM_CHECKDISPOSED_OFFSET UNITYSDK_OFFSET(0x1A13E170)
#define SYSTEM_NET_SECURITY_SSLSTREAM_CREATEMONOSSLSTREAM_OFFSET UNITYSDK_OFFSET(0x1A13E3A0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A13E8F0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1A13EB80)
#define SYSTEM_NET_SECURITY_SSLSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1A13EC60)
#define SYSTEM_NET_SECURITY_SSLSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1A13E8C0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GETPROVIDER_OFFSET UNITYSDK_OFFSET(0x1A13E1B0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1A13E520)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1A13E510)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1A13E540)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_IMPL_OFFSET UNITYSDK_OFFSET(0x1A13E120)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_ISAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x1A13E4C0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1A13E6E0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1A13E740)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A13E560)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A13E620)
#define SYSTEM_NET_SECURITY_SSLSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1A13EA90)
#define SYSTEM_NET_SECURITY_SSLSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1A13E860)
#define SYSTEM_NET_SECURITY_SSLSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1A13E800)
#define SYSTEM_NET_SECURITY_SSLSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1A13E7A0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_SET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A13E5C0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_SET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A13E680)
#define SYSTEM_NET_SECURITY_SSLSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1A13EAE0)
#define SYSTEM_NET_SECURITY_SSLSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A13E310)
#define SYSTEM_NET_SECURITY_SSLSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A13E220)

namespace System::Net::Security
{
	inline static constexpr unsigned int SslStream_TypeDefinitionIndex = 2916;

	class SslStream : public ::System::Net::Security::AuthenticatedStream
	{
	public:
		::Mono::Security::Interface::MonoTlsProvider* provider; // 0x38
		::Mono::Security::Interface::IMonoSslStream* impl; // 0x40

		::System::Void _ctor(::System::IO::Stream* innerStream, ::System::Boolean leaveInnerStreamOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM__CTOR_OFFSET))(this, innerStream, leaveInnerStreamOpen);
		}

		::System::Void _ctor_1(::System::IO::Stream* innerStream, ::System::Boolean leaveInnerStreamOpen, ::Mono::Security::Interface::MonoTlsProvider* provider, ::Mono::Security::Interface::MonoTlsSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean, ::Mono::Security::Interface::MonoTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM__CTOR_1_OFFSET))(this, innerStream, leaveInnerStreamOpen, provider, settings);
		}

		::Mono::Security::Interface::IMonoSslStream* get_Impl()
		{
			return ((::Mono::Security::Interface::IMonoSslStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_IMPL_OFFSET))(this);
		}

		static ::Mono::Security::Interface::MonoTlsProvider* GetProvider()
		{
			return ((::Mono::Security::Interface::MonoTlsProvider*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GETPROVIDER_OFFSET))();
		}

		static ::Mono::Security::Interface::IMonoSslStream* CreateMonoSslStream(::System::IO::Stream* innerStream, ::System::Boolean leaveInnerStreamOpen, ::Mono::Security::Interface::MonoTlsProvider* provider, ::Mono::Security::Interface::MonoTlsSettings* settings)
		{
			return ((::Mono::Security::Interface::IMonoSslStream*(*)(::System::IO::Stream*, ::System::Boolean, ::Mono::Security::Interface::MonoTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_CREATEMONOSSLSTREAM_OFFSET))(innerStream, leaveInnerStreamOpen, provider, settings);
		}

		::System::Void AuthenticateAsServer(::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::Boolean clientCertificateRequired, ::System::Security::Authentication::SslProtocols enabledSslProtocols, ::System::Boolean checkCertificateRevocation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Boolean, ::System::Security::Authentication::SslProtocols, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASSERVER_OFFSET))(this, serverCertificate, clientCertificateRequired, enabledSslProtocols, checkCertificateRevocation);
		}

		::System::Boolean get_IsAuthenticated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_ISAUTHENTICATED_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_CANREAD_OFFSET))(this);
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

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_WRITE_OFFSET))(this, buffer, offset, count);
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
	};
}
