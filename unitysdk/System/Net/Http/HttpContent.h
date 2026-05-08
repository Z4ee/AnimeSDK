#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Net { class TransportContext; }
namespace System::Net::Http { class HttpContent_FixedMemoryStream; }
namespace System::Net::Http::Headers { class HttpContentHeaders; }
namespace System::Text { class Encoding; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_NET_HTTP_HTTPCONTENT_COPYTOASYNC_1_OFFSET UNITYSDK_OFFSET(0x1B0249C0)
#define SYSTEM_NET_HTTP_HTTPCONTENT_COPYTOASYNC_OFFSET UNITYSDK_OFFSET(0x1B0246F0)
#define SYSTEM_NET_HTTP_HTTPCONTENT_COPYTO_OFFSET UNITYSDK_OFFSET(0x1B0248A0)
#define SYSTEM_NET_HTTP_HTTPCONTENT_CREATEFIXEDMEMORYSTREAM_OFFSET UNITYSDK_OFFSET(0x1B024AE0)
#define SYSTEM_NET_HTTP_HTTPCONTENT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B024C30)
#define SYSTEM_NET_HTTP_HTTPCONTENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B024C10)
#define SYSTEM_NET_HTTP_HTTPCONTENT_GETENCODINGFROMBUFFER_OFFSET UNITYSDK_OFFSET(0x1B024F80)
#define SYSTEM_NET_HTTP_HTTPCONTENT_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1B021B40)
#define SYSTEM_NET_HTTP_HTTPCONTENT_GET_LOADEDBUFFERLENGTH_OFFSET UNITYSDK_OFFSET(0x1B0119C0)
#define SYSTEM_NET_HTTP_HTTPCONTENT_LOADINTOBUFFERASYNC_1_OFFSET UNITYSDK_OFFSET(0x1B020900)
#define SYSTEM_NET_HTTP_HTTPCONTENT_LOADINTOBUFFERASYNC_OFFSET UNITYSDK_OFFSET(0x1B024C60)
#define SYSTEM_NET_HTTP_HTTPCONTENT_READASBYTEARRAYASYNC_OFFSET UNITYSDK_OFFSET(0x1B024E40)
#define SYSTEM_NET_HTTP_HTTPCONTENT_READASSTRINGASYNC_OFFSET UNITYSDK_OFFSET(0x1B024EE0)
#define SYSTEM_NET_HTTP_HTTPCONTENT_STARTSWITH_OFFSET UNITYSDK_OFFSET(0x1B025470)
#define SYSTEM_NET_HTTP_HTTPCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B00CA20)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpContent_TypeDefinitionIndex = 24712;

	class HttpContent : public ::System::Object
	{
	public:
		::System::Net::Http::Headers::HttpContentHeaders* headers; // 0x10
		::System::Net::Http::HttpContent_FixedMemoryStream* buffer; // 0x18
		::System::Boolean disposed; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT__CTOR_OFFSET))(this);
		}

		::System::Net::Http::Headers::HttpContentHeaders* get_Headers()
		{
			return ((::System::Net::Http::Headers::HttpContentHeaders*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_GET_HEADERS_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int64> get_LoadedBufferLength()
		{
			return ((::System::Nullable_1<::System::Int64>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_GET_LOADEDBUFFERLENGTH_OFFSET))(this);
		}

		::System::Void CopyTo(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_COPYTO_OFFSET))(this, stream);
		}

		::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* stream)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_COPYTOASYNC_OFFSET))(this, stream);
		}

		::System::Threading::Tasks::Task* CopyToAsync_1(::System::IO::Stream* stream, ::System::Net::TransportContext* context)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::IO::Stream*, ::System::Net::TransportContext*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_COPYTOASYNC_1_OFFSET))(this, stream, context);
		}

		static ::System::Net::Http::HttpContent_FixedMemoryStream* CreateFixedMemoryStream(::System::Int64 maxBufferSize)
		{
			return ((::System::Net::Http::HttpContent_FixedMemoryStream*(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_CREATEFIXEDMEMORYSTREAM_OFFSET))(maxBufferSize);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Threading::Tasks::Task* LoadIntoBufferAsync()
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_LOADINTOBUFFERASYNC_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* LoadIntoBufferAsync_1(::System::Int64 maxBufferSize)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_LOADINTOBUFFERASYNC_1_OFFSET))(this, maxBufferSize);
		}

		::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>* ReadAsByteArrayAsync()
		{
			return ((::System::Threading::Tasks::Task_1<::Il2CppArray<::System::Byte>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_READASBYTEARRAYASYNC_OFFSET))(this);
		}

		::System::Threading::Tasks::Task_1<::System::String*>* ReadAsStringAsync()
		{
			return ((::System::Threading::Tasks::Task_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_READASSTRINGASYNC_OFFSET))(this);
		}

		static ::System::Text::Encoding* GetEncodingFromBuffer(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 length, ::System::Int32& preambleLength)
		{
			return ((::System::Text::Encoding*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_GETENCODINGFROMBUFFER_OFFSET))(buffer, length, preambleLength);
		}

		static ::System::Int32 StartsWith(::Il2CppArray<::System::Byte>* array, ::System::Int32 length, ::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_STARTSWITH_OFFSET))(array, length, value);
		}
	};
}
