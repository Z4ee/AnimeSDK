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

#define SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASSERVER_OFFSET UNITYSDK_OFFSET(0x19EDC9A0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x19EDD3B0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x19EDD4A0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_CHECKDISPOSED_OFFSET UNITYSDK_OFFSET(0x19EDC680)
#define SYSTEM_NET_SECURITY_SSLSTREAM_CREATEMONOSSLSTREAM_OFFSET UNITYSDK_OFFSET(0x19EDC8B0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19EDD190)
#define SYSTEM_NET_SECURITY_SSLSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x19EDD400)
#define SYSTEM_NET_SECURITY_SSLSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x19EDD4F0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x19EDD100)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GETPROVIDER_OFFSET UNITYSDK_OFFSET(0x19EDC6C0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x19EDCA50)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x19EDCA40)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x19EDCA70)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_IMPL_OFFSET UNITYSDK_OFFSET(0x19EDC630)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_ISAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x19EDC9F0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x19EDCDD0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x19EDCEA0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x19EDCA90)
#define SYSTEM_NET_SECURITY_SSLSTREAM_GET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x19EDCC30)
#define SYSTEM_NET_SECURITY_SSLSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x19EDD310)
#define SYSTEM_NET_SECURITY_SSLSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x19EDD0A0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x19EDCFD0)
#define SYSTEM_NET_SECURITY_SSLSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x19EDCF70)
#define SYSTEM_NET_SECURITY_SSLSTREAM_SET_READTIMEOUT_OFFSET UNITYSDK_OFFSET(0x19EDCB60)
#define SYSTEM_NET_SECURITY_SSLSTREAM_SET_WRITETIMEOUT_OFFSET UNITYSDK_OFFSET(0x19EDCD00)
#define SYSTEM_NET_SECURITY_SSLSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x19EDD360)
#define SYSTEM_NET_SECURITY_SSLSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19EDC820)
#define SYSTEM_NET_SECURITY_SSLSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x19EDC730)

namespace System::Net::Security
{
	inline static constexpr unsigned int SslStream_TypeDefinitionIndex = 2920;

	class SslStream : public ::System::Net::Security::AuthenticatedStream
	{
	public:
		::Mono::Security::Interface::MonoTlsProvider* provider; // 0x38
		::Mono::Security::Interface::IMonoSslStream* impl; // 0x40

		::System::Void _ctor(::System::IO::Stream* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::IO::Stream* a1, ::System::Boolean a2, ::Mono::Security::Interface::MonoTlsProvider* a3, ::Mono::Security::Interface::MonoTlsSettings* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean, ::Mono::Security::Interface::MonoTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::Mono::Security::Interface::IMonoSslStream* get_Impl()
		{
			return ((::Mono::Security::Interface::IMonoSslStream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_IMPL_OFFSET))(this);
		}

		static ::Mono::Security::Interface::MonoTlsProvider* GetProvider()
		{
			return ((::Mono::Security::Interface::MonoTlsProvider*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GETPROVIDER_OFFSET))();
		}

		static ::Mono::Security::Interface::IMonoSslStream* CreateMonoSslStream(::System::IO::Stream* a1, ::System::Boolean a2, ::Mono::Security::Interface::MonoTlsProvider* a3, ::Mono::Security::Interface::MonoTlsSettings* a4)
		{
			return ((::Mono::Security::Interface::IMonoSslStream*(*)(::System::IO::Stream*, ::System::Boolean, ::Mono::Security::Interface::MonoTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_CREATEMONOSSLSTREAM_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void AuthenticateAsServer(::System::Security::Cryptography::X509Certificates::X509Certificate* a1, ::System::Boolean a2, ::System::Security::Authentication::SslProtocols a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Boolean, ::System::Security::Authentication::SslProtocols, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_AUTHENTICATEASSERVER_OFFSET))(this, a1, a2, a3, a4);
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

		::System::Void set_ReadTimeout(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_SET_READTIMEOUT_OFFSET))(this, a1);
		}

		::System::Int32 get_WriteTimeout()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_WRITETIMEOUT_OFFSET))(this);
		}

		::System::Void set_WriteTimeout(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_SET_WRITETIMEOUT_OFFSET))(this, a1);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_SET_POSITION_OFFSET))(this, a1);
		}

		::System::Void SetLength(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_SETLENGTH_OFFSET))(this, a1);
		}

		::System::Int64 Seek(::System::Int64 a1, ::System::IO::SeekOrigin a2)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_SEEK_OFFSET))(this, a1, a2);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Void CheckDisposed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_CHECKDISPOSED_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_DISPOSE_OFFSET))(this, a1);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_READ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_WRITE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_BEGINREAD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 EndRead(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_ENDREAD_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_BEGINWRITE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndWrite(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITY_SSLSTREAM_ENDWRITE_OFFSET))(this, a1);
		}
	};
}
