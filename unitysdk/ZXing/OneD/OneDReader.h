#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ZXING_ONED_ONEDREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15555F90)

namespace ZXing::OneD
{
	inline static constexpr unsigned int OneDReader_TypeDefinitionIndex = 6408;

	class OneDReader : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_PATTERN_MATCH_RESULT_SCALE_FACTOR()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OneDReader_TypeDefinitionIndex)->GetStaticField(0xDE0);
		}
		static ::System::Int32* StaticGet_INTEGER_MATH_SHIFT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OneDReader_TypeDefinitionIndex)->GetStaticField(0xDE4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_ONEDREADER__CCTOR_OFFSET))();
		}
	};
}
