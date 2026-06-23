#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/DelegatedStream.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Net::Mime { class WriteStateInfoBase; }

#define SYSTEM_NET_MIME_EIGHTBITSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1B764270)
#define SYSTEM_NET_MIME_EIGHTBITSTREAM_DECODEBYTES_OFFSET UNITYSDK_OFFSET(0x1B764CF0)
#define SYSTEM_NET_MIME_EIGHTBITSTREAM_ENCODEBYTES_OFFSET UNITYSDK_OFFSET(0x1B764D40)
#define SYSTEM_NET_MIME_EIGHTBITSTREAM_ENCODELINES_OFFSET UNITYSDK_OFFSET(0x1B7644E0)
#define SYSTEM_NET_MIME_EIGHTBITSTREAM_ENDWRITE_OFFSET UNITYSDK_OFFSET(0x1B764910)
#define SYSTEM_NET_MIME_EIGHTBITSTREAM_GETENCODEDSTRING_OFFSET UNITYSDK_OFFSET(0x1B764DA0)
#define SYSTEM_NET_MIME_EIGHTBITSTREAM_GETSTREAM_OFFSET UNITYSDK_OFFSET(0x1B764D90)
#define SYSTEM_NET_MIME_EIGHTBITSTREAM_GET_WRITESTATE_OFFSET UNITYSDK_OFFSET(0x1B764180)
#define SYSTEM_NET_MIME_EIGHTBITSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1B7649E0)
#define SYSTEM_NET_MIME_EIGHTBITSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B764250)
#define SYSTEM_NET_MIME_EIGHTBITSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B764240)

namespace System::Net::Mime
{
	inline static constexpr unsigned int EightBitStream_TypeDefinitionIndex = 3613;

	class EightBitStream : public ::System::Net::DelegatedStream
	{
	public:
		::System::Net::Mime::WriteStateInfoBase* writeState; // 0x38
		::System::Boolean shouldEncodeLeadingDots; // 0x40

		::System::Void _ctor(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_EIGHTBITSTREAM__CTOR_OFFSET))(this, stream);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream, ::System::Boolean shouldEncodeLeadingDots)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_EIGHTBITSTREAM__CTOR_1_OFFSET))(this, stream, shouldEncodeLeadingDots);
		}

		::System::Net::Mime::WriteStateInfoBase* get_WriteState()
		{
			return ((::System::Net::Mime::WriteStateInfoBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_EIGHTBITSTREAM_GET_WRITESTATE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_EIGHTBITSTREAM_BEGINWRITE_OFFSET))(this, buffer, offset, count, callback, state);
		}

		::System::Void EndWrite(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_EIGHTBITSTREAM_ENDWRITE_OFFSET))(this, asyncResult);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_EIGHTBITSTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}

		::System::Void EncodeLines(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_EIGHTBITSTREAM_ENCODELINES_OFFSET))(this, buffer, offset, count);
		}

		::System::Int32 DecodeBytes(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_EIGHTBITSTREAM_DECODEBYTES_OFFSET))(this, buffer, offset, count);
		}

		::System::Int32 EncodeBytes(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_EIGHTBITSTREAM_ENCODEBYTES_OFFSET))(this, buffer, offset, count);
		}

		::System::IO::Stream* GetStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_EIGHTBITSTREAM_GETSTREAM_OFFSET))(this);
		}

		::System::String* GetEncodedString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_EIGHTBITSTREAM_GETENCODEDSTRING_OFFSET))(this);
		}
	};
}
