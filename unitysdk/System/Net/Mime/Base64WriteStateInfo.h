#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Mime/WriteStateInfoBase.h"

#define SYSTEM_NET_MIME_BASE64WRITESTATEINFO_GET_LASTBITS_OFFSET UNITYSDK_OFFSET(0x193B8A10)
#define SYSTEM_NET_MIME_BASE64WRITESTATEINFO_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x193B89F0)
#define SYSTEM_NET_MIME_BASE64WRITESTATEINFO_SET_LASTBITS_OFFSET UNITYSDK_OFFSET(0x193B8A20)
#define SYSTEM_NET_MIME_BASE64WRITESTATEINFO_SET_PADDING_OFFSET UNITYSDK_OFFSET(0x193B8A00)
#define SYSTEM_NET_MIME_BASE64WRITESTATEINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193B8970)
#define SYSTEM_NET_MIME_BASE64WRITESTATEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x193B3E20)

namespace System::Net::Mime
{
	inline static constexpr unsigned int Base64WriteStateInfo_TypeDefinitionIndex = 3608;

	class Base64WriteStateInfo : public ::System::Net::Mime::WriteStateInfoBase
	{
	public:
		::System::Byte _LastBits_k__BackingField; // 0x38
		::System::Int32 _Padding_k__BackingField; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_BASE64WRITESTATEINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 bufferSize, ::Il2CppArray<::System::Byte>* header, ::Il2CppArray<::System::Byte>* footer, ::System::Int32 maxLineLength, ::System::Int32 mimeHeaderLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_BASE64WRITESTATEINFO__CTOR_1_OFFSET))(this, bufferSize, header, footer, maxLineLength, mimeHeaderLength);
		}

		::System::Int32 get_Padding()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_BASE64WRITESTATEINFO_GET_PADDING_OFFSET))(this);
		}

		::System::Void set_Padding(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_BASE64WRITESTATEINFO_SET_PADDING_OFFSET))(this, value);
		}

		::System::Byte get_LastBits()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_BASE64WRITESTATEINFO_GET_LASTBITS_OFFSET))(this);
		}

		::System::Void set_LastBits(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_BASE64WRITESTATEINFO_SET_LASTBITS_OFFSET))(this, value);
		}
	};
}
