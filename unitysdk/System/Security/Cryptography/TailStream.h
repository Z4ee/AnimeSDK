#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_CLEAR_OFFSET UNITYSDK_OFFSET(0x185C8DD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x185C8E50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x185C9100)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_BUFFER_OFFSET UNITYSDK_OFFSET(0x185C8ED0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x185C8FB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x185C8FC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x185C8FD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x185C8FE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x185C9040)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x185C91D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x185C9110)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x185C9170)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x185C90A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x185C9230)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TAILSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x185C8D90)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int TailStream_TypeDefinitionIndex = 1026;

	class TailStream : public ::System::IO::Stream
	{
	public:
		::Il2CppArray<::System::Byte>* _Buffer; // 0x28
		::System::Int32 _BufferSize; // 0x30
		::System::Int32 _BufferIndex; // 0x34
		::System::Boolean _BufferFull; // 0x38

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
