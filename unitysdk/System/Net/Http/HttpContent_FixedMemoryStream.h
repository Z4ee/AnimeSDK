#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/MemoryStream.h"

#define SYSTEM_NET_HTTP_HTTPCONTENT_FIXEDMEMORYSTREAM_CHECKOVERFLOW_OFFSET UNITYSDK_OFFSET(0x1ADE8CD0)
#define SYSTEM_NET_HTTP_HTTPCONTENT_FIXEDMEMORYSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x1ADE8E10)
#define SYSTEM_NET_HTTP_HTTPCONTENT_FIXEDMEMORYSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1ADE8EF0)
#define SYSTEM_NET_HTTP_HTTPCONTENT_FIXEDMEMORYSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADE7C40)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpContent_FixedMemoryStream_TypeDefinitionIndex = 3753;

	class HttpContent_FixedMemoryStream : public ::System::IO::MemoryStream
	{
	public:
		::System::Int64 maxSize; // 0x50

		::System::Void _ctor(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_FIXEDMEMORYSTREAM__CTOR_OFFSET))(this, a1);
		}

		::System::Void CheckOverflow(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_FIXEDMEMORYSTREAM_CHECKOVERFLOW_OFFSET))(this, a1);
		}

		::System::Void WriteByte(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_FIXEDMEMORYSTREAM_WRITEBYTE_OFFSET))(this, a1);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCONTENT_FIXEDMEMORYSTREAM_WRITE_OFFSET))(this, a1, a2, a3);
		}
	};
}
