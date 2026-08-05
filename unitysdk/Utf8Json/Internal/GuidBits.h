#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/ValueType.h"

#define UTF8JSON_INTERNAL_GUIDBITS_PARSE_OFFSET UNITYSDK_OFFSET(0x1F5A65C0)
#define UTF8JSON_INTERNAL_GUIDBITS_SWITCHPARSE_OFFSET UNITYSDK_OFFSET(0x1F5A6760)
#define UTF8JSON_INTERNAL_GUIDBITS_WRITE_OFFSET UNITYSDK_OFFSET(0xAA92D0)
#define UTF8JSON_INTERNAL_GUIDBITS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5A7B10)
#define UTF8JSON_INTERNAL_GUIDBITS__CTOR_1_OFFSET UNITYSDK_OFFSET(0xAA92C0)
#define UTF8JSON_INTERNAL_GUIDBITS__CTOR_OFFSET UNITYSDK_OFFSET(0x9BCE70)

namespace Utf8Json::Internal
{
	inline static constexpr unsigned int GuidBits_TypeDefinitionIndex = 95170;

	struct alignas(1) GuidBits
	{
		static ::Il2CppArray<::System::Byte>** StaticGet_byteToHexStringLow()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(GuidBits_TypeDefinitionIndex)->GetStaticField(0x53400);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_byteToHexStringHigh()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(GuidBits_TypeDefinitionIndex)->GetStaticField(0x53408);
		}
		::System::Guid Value; // 0x10
		::System::Byte Byte0; // 0x10
		::System::Byte Byte1; // 0x11
		::System::Byte Byte2; // 0x12
		::System::Byte Byte3; // 0x13
		::System::Byte Byte4; // 0x14
		::System::Byte Byte5; // 0x15
		::System::Byte Byte6; // 0x16
		::System::Byte Byte7; // 0x17
		::System::Byte Byte8; // 0x18
		::System::Byte Byte9; // 0x19
		::System::Byte Byte10; // 0x1A
		::System::Byte Byte11; // 0x1B
		::System::Byte Byte12; // 0x1C
		::System::Byte Byte13; // 0x1D
		::System::Byte Byte14; // 0x1E
		::System::Byte Byte15; // 0x1F

		::System::Void _ctor(::System::Guid& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_GUIDBITS__CTOR_OFFSET))(this, value);
		}

		/*
		::System::Void _ctor_1(::System::ArraySegment_1<::System::Byte>& utf8string)
		{
			return ((::System::Void(*)(::PVOID, ::System::ArraySegment_1<::System::Byte>&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_GUIDBITS__CTOR_1_OFFSET))(this, utf8string);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_GUIDBITS__CCTOR_OFFSET))();
		}

		static ::System::Byte Parse(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 highOffset)
		{
			return ((::System::Byte(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_GUIDBITS_PARSE_OFFSET))(bytes, highOffset);
		}

		static ::System::Byte SwitchParse(::System::Byte b)
		{
			return ((::System::Byte(*)(::System::Byte))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_GUIDBITS_SWITCHPARSE_OFFSET))(b);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_GUIDBITS_WRITE_OFFSET))(this, buffer, offset);
		}
	};
}
