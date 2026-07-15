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

#define SYSTEM_NET_HTTP_HTTPCONTENT_COPYTOASYNC_1_OFFSET UNITYSDK_OFFSET(0x1CAA71C0)
#define SYSTEM_NET_HTTP_HTTPCONTENT_COPYTOASYNC_OFFSET UNITYSDK_OFFSET(0x1CAA7100)
#define SYSTEM_NET_HTTP_HTTPCONTENT_COPYTO_OFFSET UNITYSDK_OFFSET(0x1CAA7190)
#define SYSTEM_NET_HTTP_HTTPCONTENT_CREATEFIXEDMEMORYSTREAM_OFFSET UNITYSDK_OFFSET(0x1CAA72B0)
#define SYSTEM_NET_HTTP_HTTPCONTENT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1CAA73E0)
#define SYSTEM_NET_HTTP_HTTPCONTENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CAA7360)
#define SYSTEM_NET_HTTP_HTTPCONTENT_GETENCODINGFROMBUFFER_OFFSET UNITYSDK_OFFSET(0x1CAA76A0)
#define SYSTEM_NET_HTTP_HTTPCONTENT_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x1CAA4700)
#define SYSTEM_NET_HTTP_HTTPCONTENT_GET_LOADEDBUFFERLENGTH_OFFSET UNITYSDK_OFFSET(0x1CA93A20)
#define SYSTEM_NET_HTTP_HTTPCONTENT_LOADINTOBUFFERASYNC_1_OFFSET UNITYSDK_OFFSET(0x1CAA3320)
#define SYSTEM_NET_HTTP_HTTPCONTENT_LOADINTOBUFFERASYNC_OFFSET UNITYSDK_OFFSET(0x1CAA7480)
#define SYSTEM_NET_HTTP_HTTPCONTENT_READASSTRINGASYNC_OFFSET UNITYSDK_OFFSET(0x1CAA75F0)
#define SYSTEM_NET_HTTP_HTTPCONTENT_STARTSWITH_OFFSET UNITYSDK_OFFSET(0x1CAA7A30)
#define SYSTEM_NET_HTTP_HTTPCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA8E770)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpContent_TypeDefinitionIndex = 3756;

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

		::System::Void CopyTo(::System::IO::Stream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_COPYTO_OFFSET))(this, a1);
		}

		::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* a1)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_COPYTOASYNC_OFFSET))(this, a1);
		}

		::System::Threading::Tasks::Task* CopyToAsync_1(::System::IO::Stream* a1, ::System::Net::TransportContext* a2)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::IO::Stream*, ::System::Net::TransportContext*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_COPYTOASYNC_1_OFFSET))(this, a1, a2);
		}

		static ::System::Net::Http::HttpContent_FixedMemoryStream* CreateFixedMemoryStream(::System::Int64 a1)
		{
			return ((::System::Net::Http::HttpContent_FixedMemoryStream*(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_CREATEFIXEDMEMORYSTREAM_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Threading::Tasks::Task* LoadIntoBufferAsync()
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_LOADINTOBUFFERASYNC_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* LoadIntoBufferAsync_1(::System::Int64 a1)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_LOADINTOBUFFERASYNC_1_OFFSET))(this, a1);
		}

		::System::Threading::Tasks::Task_1<::System::String*>* ReadAsStringAsync()
		{
			return ((::System::Threading::Tasks::Task_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_READASSTRINGASYNC_OFFSET))(this);
		}

		static ::System::Text::Encoding* GetEncodingFromBuffer(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32& a3)
		{
			return ((::System::Text::Encoding*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_GETENCODINGFROMBUFFER_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 StartsWith(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::Il2CppArray<::System::Byte>* a3)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_STARTSWITH_OFFSET))(a1, a2, a3);
		}
	};
}
