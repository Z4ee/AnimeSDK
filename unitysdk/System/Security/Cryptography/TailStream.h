#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BBD8340)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BBD8350)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1BBD8600)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0x1BBD83D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1BBD84B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1BBD84C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1BBD84D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1BBD84E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1BBD8540)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1BBD86D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1BBD8610)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1BBD8670)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1BBD85A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1BBD8730)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD8300)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int TailStream_TypeDefinitionIndex = 1034;

	class TailStream : public ::System::IO::Stream
	{
	public:
		::Il2CppArray<::System::Byte>* _Buffer; // 0x28
		::System::Boolean _BufferFull; // 0x30
		::System::Int32 _BufferSize; // 0x34
		::System::Int32 _BufferIndex; // 0x38

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM__CTOR_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_DISPOSE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* get_Buffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_BUFFER_OFFSET))(this);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_SET_POSITION_OFFSET))(this, a1);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Int64 Seek(::System::Int64 a1, ::System::IO::SeekOrigin a2)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_SEEK_OFFSET))(this, a1, a2);
		}

		::System::Void SetLength(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_SETLENGTH_OFFSET))(this, a1);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_READ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_WRITE_OFFSET))(this, a1, a2, a3);
		}
	};
}
