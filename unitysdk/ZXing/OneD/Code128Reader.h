#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"

#define ZXING_ONED_CODE128READER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15549320)

namespace ZXing::OneD
{
	inline static constexpr unsigned int Code128Reader_TypeDefinitionIndex = 6489;

	class Code128Reader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_CODE_PATTERNS()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Code128Reader_TypeDefinitionIndex)->GetStaticField(0x20F0);
		}
		static ::System::Int32* StaticGet_MAX_INDIVIDUAL_VARIANCE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Code128Reader_TypeDefinitionIndex)->GetStaticField(0xE30);
		}
		static ::System::Int32* StaticGet_MAX_AVG_VARIANCE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Code128Reader_TypeDefinitionIndex)->GetStaticField(0xE34);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_CODE128READER__CCTOR_OFFSET))();
		}
	};
}
