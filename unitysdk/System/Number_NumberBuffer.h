#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_NUMBER_NUMBERBUFFER_PACKFORNATIVE_OFFSET UNITYSDK_OFFSET(0x383ADB0)
#define SYSTEM_NUMBER_NUMBERBUFFER__CCTOR_OFFSET UNITYSDK_OFFSET(0x187395C0)
#define SYSTEM_NUMBER_NUMBERBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x383AD90)

namespace System
{
	inline static constexpr unsigned int Number_NumberBuffer_TypeDefinitionIndex = 305;

	struct alignas(8) Number_NumberBuffer
	{
		static ::System::Int32* StaticGet_NumberBufferBytes()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Number_NumberBuffer_TypeDefinitionIndex)->GetStaticField(0x3950);
		}
		::System::Byte* baseAddress; // 0x10
		::System::Char* digits; // 0x18
		::System::Int32 precision; // 0x20
		::System::Int32 scale; // 0x24
		::System::Boolean sign; // 0x28

		::System::Void _ctor(::System::Byte* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_NUMBERBUFFER__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_NUMBERBUFFER__CCTOR_OFFSET))();
		}

		::System::Byte* PackForNative()
		{
			return ((::System::Byte*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NUMBER_NUMBERBUFFER_PACKFORNATIVE_OFFSET))(this);
		}
	};
}
