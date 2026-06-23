#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"
#include "unitysdk/System/Security/Cryptography/CryptoStreamMode.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System::Security::Cryptography { class ICryptoTransform; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C2D2EE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C2D2EF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_FLUSHASYNC_OFFSET UNITYSDK_OFFSET(0x1C2D1480)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_FLUSHFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x1C2D1240)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1C2D1470)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1C2D10F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1C2D1100)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1C2D1110)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1C2D1120)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1C2D1180)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_INITIALIZEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C2D0F60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_READASYNCINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C2D1FD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_READASYNC_OFFSET UNITYSDK_OFFSET(0x1C2D1D80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1C2D1620)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1C2D1560)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1C2D15C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1C2D11E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_WRITEASYNCINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C2D2CA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_WRITEASYNC_OFFSET UNITYSDK_OFFSET(0x1C2D2840)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1C2D2240)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2D0DB0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CryptoStream_TypeDefinitionIndex = 1051;

	class CryptoStream : public ::System::IO::Stream
	{
	public:
		::Il2CppArray<::System::Byte>* _InputBuffer; // 0x28
		::System::IO::Stream* _stream; // 0x30
		::Il2CppArray<::System::Byte>* _OutputBuffer; // 0x38
		::System::Security::Cryptography::ICryptoTransform* _Transform; // 0x40
		::System::Int32 _InputBlockSize; // 0x48
		::System::Int32 _OutputBlockSize; // 0x4C
		::System::Boolean _canRead; // 0x50
		::System::Boolean _canWrite; // 0x51
		::System::Boolean _finalBlockTransformed; // 0x52
		::System::Int32 _OutputBufferIndex; // 0x54
		::System::Int32 _InputBufferIndex; // 0x58
		::System::Security::Cryptography::CryptoStreamMode _transformMode; // 0x5C

		::System::Void _ctor(::System::IO::Stream* stream, ::System::Security::Cryptography::ICryptoTransform* transform, ::System::Security::Cryptography::CryptoStreamMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Security::Cryptography::ICryptoTransform*, ::System::Security::Cryptography::CryptoStreamMode))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM__CTOR_OFFSET))(this, stream, transform, mode);
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

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_SET_POSITION_OFFSET))(this, value);
		}

		::System::Void FlushFinalBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_FLUSHFINALBLOCK_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* FlushAsync(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_FLUSHASYNC_OFFSET))(this, cancellationToken);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_SETLENGTH_OFFSET))(this, value);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* ReadAsync(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_READASYNC_OFFSET))(this, buffer, offset, count, cancellationToken);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* ReadAsyncInternal(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_READASYNCINTERNAL_OFFSET))(this, buffer, offset, count, cancellationToken);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}

		::System::Threading::Tasks::Task* WriteAsync(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_WRITEASYNC_OFFSET))(this, buffer, offset, count, cancellationToken);
		}

		::System::Threading::Tasks::Task* WriteAsyncInternal(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_WRITEASYNCINTERNAL_OFFSET))(this, buffer, offset, count, cancellationToken);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void InitializeBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOSTREAM_INITIALIZEBUFFER_OFFSET))(this);
		}
	};
}
