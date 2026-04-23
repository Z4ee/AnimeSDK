#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ZXING_ONED_ONEDREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A75BA20)

namespace ZXing::OneD
{
	inline static constexpr unsigned int OneDReader_TypeDefinitionIndex = 6030;

	class OneDReader : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_PATTERN_MATCH_RESULT_SCALE_FACTOR()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OneDReader_TypeDefinitionIndex)->GetStaticField(0x26C0);
		}
		static ::System::Int32* StaticGet_INTEGER_MATH_SHIFT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OneDReader_TypeDefinitionIndex)->GetStaticField(0x26C4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_ONEDREADER__CCTOR_OFFSET))();
		}
	};
}
