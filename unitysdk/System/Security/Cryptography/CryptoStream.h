#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"
#include "unitysdk/System/Security/Cryptography/CryptoStreamMode.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System::Security::Cryptography { class ICryptoTransform; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_CLEAR_OFFSET UNITYSDK_OFFSET(0x187E94F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x187E9570)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_FLUSHFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x187E79E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x187E7BF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x187E7880)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x187E7890)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x187E78A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_HASFLUSHEDFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x187E79D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x187E78B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x187E7910)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_INITIALIZEBUFFER_OFFSET UNITYSDK_OFFSET(0x187E7720)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_READASYNCINTERNAL_OFFSET UNITYSDK_OFFSET(0x187E8800)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x187E8420)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x187E7CC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x187E7C00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x187E7C60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x187E7970)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_WRITEASYNCINTERNAL_OFFSET UNITYSDK_OFFSET(0x187E9350)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x187E8FB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x187E89D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x187E75A0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CryptoStream_TypeDefinitionIndex = 1005;

	class CryptoStream : public ::System::IO::Stream
	{
	public:
		::System::Security::Cryptography::ICryptoTransform* _Transform; // 0x28
		::Il2CppArray<::System::Byte>* _OutputBuffer; // 0x30
		::System::IO::Stream* _stream; // 0x38
		::Il2CppArray<::System::Byte>* _InputBuffer; // 0x40
		::System::Int32 _OutputBufferIndex; // 0x48
		::System::Int32 _InputBlockSize; // 0x4C
		::System::Security::Cryptography::CryptoStreamMode _transformMode; // 0x50
		::System::Int32 _OutputBlockSize; // 0x54
		::System::Boolean _canWrite; // 0x58
		::System::Boolean _canRead; // 0x59
		::System::Boolean _finalBlockTransformed; // 0x5A
		::System::Int32 _InputBufferIndex; // 0x5C

		::System::Void _ctor(::System::IO::Stream* a1, ::System::Security::Cryptography::ICryptoTransform* a2, ::System::Security::Cryptography::CryptoStreamMode a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Security::Cryptography::ICryptoTransform*, ::System::Security::Cryptography::CryptoStreamMode))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_SET_POSITION_OFFSET))(this, a1);
		}

		::System::Boolean get_HasFlushedFinalBlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_HASFLUSHEDFINALBLOCK_OFFSET))(this);
		}

		::System::Void FlushFinalBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_FLUSHFINALBLOCK_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Int64 Seek(::System::Int64 a1, ::System::IO::SeekOrigin a2)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_SEEK_OFFSET))(this, a1, a2);
		}

		::System::Void SetLength(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_SETLENGTH_OFFSET))(this, a1);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_READ_OFFSET))(this, a1, a2, a3);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* ReadAsync(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Threading::CancellationToken a4)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_READASYNC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* ReadAsyncInternal(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Threading::CancellationToken a4)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_READASYNCINTERNAL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_WRITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Threading::CancellationToken a4)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_WRITEASYNC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Threading::Tasks::Task* WriteAsyncInternal(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Threading::CancellationToken a4)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_WRITEASYNCINTERNAL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void InitializeBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_INITIALIZEBUFFER_OFFSET))(this);
		}
	};
}
