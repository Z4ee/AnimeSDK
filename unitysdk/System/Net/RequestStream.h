#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_NET_REQUESTSTREAM_BEGINREAD_OFFSET UNITYSDK_OFFSET(0x1AF9FD60)
#define SYSTEM_NET_REQUESTSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1AFA0290)
#define SYSTEM_NET_REQUESTSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1AF9FA40)
#define SYSTEM_NET_REQUESTSTREAM_ENDREAD_OFFSET UNITYSDK_OFFSET(0x1AF9FEF0)
#define SYSTEM_NET_REQUESTSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1AFA02E0)
#define SYSTEM_NET_REQUESTSTREAM_FILLFROMBUFFER_OFFSET UNITYSDK_OFFSET(0x1AF9FA60)
#define SYSTEM_NET_REQUESTSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1AF9FA50)
#define SYSTEM_NET_REQUESTSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1AF9F920)
#define SYSTEM_NET_REQUESTSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1AF9F930)
#define SYSTEM_NET_REQUESTSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1AF9F940)
#define SYSTEM_NET_REQUESTSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1AF9F950)
#define SYSTEM_NET_REQUESTSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1AF9F9A0)
#define SYSTEM_NET_REQUESTSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1AF9FC60)
#define SYSTEM_NET_REQUESTSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1AFA01A0)
#define SYSTEM_NET_REQUESTSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1AFA01F0)
#define SYSTEM_NET_REQUESTSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1AF9F9F0)
#define SYSTEM_NET_REQUESTSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1AFA0240)
#define SYSTEM_NET_REQUESTSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AF7E760)
#define SYSTEM_NET_REQUESTSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF9F8C0)

namespace System::Net
{
	inline static constexpr unsigned int RequestStream_TypeDefinitionIndex = 2860;

	class RequestStream : public ::System::IO::Stream
	{
	public:
		::Il2CppArray<::System::Byte>* buffer; // 0x28
		::System::IO::Stream* stream; // 0x30
		::System::Int32 offset; // 0x38
		::System::Int64 remaining_body; // 0x40
		::System::Boolean disposed; // 0x48
		::System::Int32 length; // 0x4C

		::System::Void _ctor(::System::IO::Stream* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::IO::Stream* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int64 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_SET_POSITION_OFFSET))(this, a1);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_CLOSE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Int32 FillFromBuffer(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_FILLFROMBUFFER_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_READ_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginRead(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_BEGINREAD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 EndRead(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_ENDREAD_OFFSET))(this, a1);
		}

		::System::Int64 Seek(::System::Int64 a1, ::System::IO::SeekOrigin a2)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_SEEK_OFFSET))(this, a1, a2);
		}

		::System::Void SetLength(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_SETLENGTH_OFFSET))(this, a1);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_WRITE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_BEGINWRITE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndWrite(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_REQUESTSTREAM_ENDWRITE_OFFSET))(this, a1);
		}
	};
}
