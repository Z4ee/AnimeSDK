#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_BITS_COUNT_OFFSET UNITYSDK_OFFSET(0x19F7E260)
#define SYSTEM_XML_BITS_LEASTPOSITION_OFFSET UNITYSDK_OFFSET(0x19F7E300)
#define SYSTEM_XML_BITS__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F7E420)

namespace System::Xml
{
	inline static constexpr unsigned int Bits_TypeDefinitionIndex = 1786;

	class Bits : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_MASK_0011001100110011()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Bits_TypeDefinitionIndex)->GetStaticField(0x6D30);
		}
		static ::System::UInt32* StaticGet_MASK_0000000011111111()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Bits_TypeDefinitionIndex)->GetStaticField(0x6D34);
		}
		static ::System::UInt32* StaticGet_MASK_0000111100001111()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Bits_TypeDefinitionIndex)->GetStaticField(0x6D38);
		}
		static ::System::UInt32* StaticGet_MASK_0101010101010101()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Bits_TypeDefinitionIndex)->GetStaticField(0x6D3C);
		}
		static ::System::UInt32* StaticGet_MASK_1111111111111111()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Bits_TypeDefinitionIndex)->GetStaticField(0x6D40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_BITS__CCTOR_OFFSET))();
		}

		static ::System::Int32 Count(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BITS_COUNT_OFFSET))(a1);
		}

		static ::System::Int32 LeastPosition(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_XML_BITS_LEASTPOSITION_OFFSET))(a1);
		}
	};
}
