#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/MemoryStream.h"

#define SYSTEM_NET_HTTP_HTTPCONTENT_FIXEDMEMORYSTREAM_CHECKOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1D49CA20)
#define SYSTEM_NET_HTTP_HTTPCONTENT_FIXEDMEMORYSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x1D49CB50)
#define SYSTEM_NET_HTTP_HTTPCONTENT_FIXEDMEMORYSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1D49CB80)
#define SYSTEM_NET_HTTP_HTTPCONTENT_FIXEDMEMORYSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D49B290)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpContent_FixedMemoryStream_TypeDefinitionIndex = 26113;

	class HttpContent_FixedMemoryStream : public ::System::IO::MemoryStream
	{
	public:
		::System::Int64 maxSize; // 0x50

		::System::Void _ctor(::System::Int64 maxSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_FIXEDMEMORYSTREAM__CTOR_OFFSET))(this, maxSize);
		}

		::System::Void CheckOverflow(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_FIXEDMEMORYSTREAM_CHECKOVERFLOW_OFFSET))(this, count);
		}

		::System::Void WriteByte(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_FIXEDMEMORYSTREAM_WRITEBYTE_OFFSET))(this, value);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_FIXEDMEMORYSTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}
	};
}
