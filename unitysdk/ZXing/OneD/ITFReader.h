#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"

#define ZXING_ONED_ITFREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D1DF50)

namespace ZXing::OneD
{
	inline static constexpr unsigned int ITFReader_TypeDefinitionIndex = 6029;

	class ITFReader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_START_PATTERN()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ITFReader_TypeDefinitionIndex)->GetStaticField(0x8880);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_PATTERNS()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ITFReader_TypeDefinitionIndex)->GetStaticField(0x8888);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DEFAULT_ALLOWED_LENGTHS()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ITFReader_TypeDefinitionIndex)->GetStaticField(0x8890);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_END_PATTERN_REVERSED()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ITFReader_TypeDefinitionIndex)->GetStaticField(0x8898);
		}
		static ::System::Int32* StaticGet_MAX_INDIVIDUAL_VARIANCE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ITFReader_TypeDefinitionIndex)->GetStaticField(0x4630);
		}
		static ::System::Int32* StaticGet_MAX_AVG_VARIANCE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ITFReader_TypeDefinitionIndex)->GetStaticField(0x4634);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_ITFREADER__CCTOR_OFFSET))();
		}
	};
}
