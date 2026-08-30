#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/OneDReader.h"

#define ZXING_ONED_CODE128READER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D57F10)

namespace ZXing::OneD
{
	inline static constexpr unsigned int Code128Reader_TypeDefinitionIndex = 7034;

	class Code128Reader : public ::ZXing::OneD::OneDReader
	{
	public:
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_CODE_PATTERNS()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Code128Reader_TypeDefinitionIndex)->GetStaticField(0x31420);
		}
		static ::System::Int32* StaticGet_MAX_AVG_VARIANCE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Code128Reader_TypeDefinitionIndex)->GetStaticField(0xD070);
		}
		static ::System::Int32* StaticGet_MAX_INDIVIDUAL_VARIANCE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Code128Reader_TypeDefinitionIndex)->GetStaticField(0xD074);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_CODE128READER__CCTOR_OFFSET))();
		}
	};
}
