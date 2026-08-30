#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"

#define ZXING_ONED_ITFREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFFA550)

namespace ZXing::OneD
{
	inline static constexpr unsigned int ITFReader_TypeDefinitionIndex = 6964;

	class ITFReader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_END_PATTERN_REVERSED()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ITFReader_TypeDefinitionIndex)->GetStaticField(0x274A0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DEFAULT_ALLOWED_LENGTHS()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ITFReader_TypeDefinitionIndex)->GetStaticField(0x274A8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_START_PATTERN()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ITFReader_TypeDefinitionIndex)->GetStaticField(0x274B0);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_PATTERNS()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ITFReader_TypeDefinitionIndex)->GetStaticField(0x274B8);
		}
		static ::System::Int32* StaticGet_MAX_INDIVIDUAL_VARIANCE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ITFReader_TypeDefinitionIndex)->GetStaticField(0xB930);
		}
		static ::System::Int32* StaticGet_MAX_AVG_VARIANCE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ITFReader_TypeDefinitionIndex)->GetStaticField(0xB934);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_ITFREADER__CCTOR_OFFSET))();
		}
	};
}
