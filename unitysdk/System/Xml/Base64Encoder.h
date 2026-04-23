#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_BASE64ENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x19F9C980)
#define SYSTEM_XML_BASE64ENCODER_FLUSH_OFFSET UNITYSDK_OFFSET(0x19F9CD00)
#define SYSTEM_XML_BASE64ENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x19F9C950)

namespace System::Xml
{
	inline static constexpr unsigned int Base64Encoder_TypeDefinitionIndex = 1776;

	class Base64Encoder : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Char>* charsLine; // 0x10
		::Il2CppArray<::System::Byte>* leftOverBytes; // 0x18
		::System::Int32 leftOverBytesCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BASE64ENCODER__CTOR_OFFSET))(this);
		}

		::System::Void Encode(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BASE64ENCODER_ENCODE_OFFSET))(this, buffer, index, count);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BASE64ENCODER_FLUSH_OFFSET))(this);
		}
	};
}
