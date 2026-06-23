#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_READSTATEINFO_GET_BYTE_OFFSET UNITYSDK_OFFSET(0x1C662C10)
#define SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_READSTATEINFO_GET_ISESCAPED_OFFSET UNITYSDK_OFFSET(0x1C662BF0)
#define SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_READSTATEINFO_SET_BYTE_OFFSET UNITYSDK_OFFSET(0x1C662C20)
#define SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_READSTATEINFO_SET_ISESCAPED_OFFSET UNITYSDK_OFFSET(0x1C662C00)
#define SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_READSTATEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C662C30)

namespace System::Net::Mime
{
	inline static constexpr unsigned int QuotedPrintableStream_ReadStateInfo_TypeDefinitionIndex = 3631;

	class QuotedPrintableStream_ReadStateInfo : public ::System::Object
	{
	public:
		::System::Boolean isEscaped; // 0x10
		::System::Int16 b1; // 0x12

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_READSTATEINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsEscaped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_READSTATEINFO_GET_ISESCAPED_OFFSET))(this);
		}

		::System::Void set_IsEscaped(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_READSTATEINFO_SET_ISESCAPED_OFFSET))(this, value);
		}

		::System::Int16 get_Byte()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_READSTATEINFO_GET_BYTE_OFFSET))(this);
		}

		::System::Void set_Byte(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_QUOTEDPRINTABLESTREAM_READSTATEINFO_SET_BYTE_OFFSET))(this, value);
		}
	};
}
