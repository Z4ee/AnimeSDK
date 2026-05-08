#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ZXING_ONED_ONEDREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1887C070)
#define ZXING_ONED_ONEDREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1886CA90)

namespace ZXing::OneD
{
	inline static constexpr unsigned int OneDReader_TypeDefinitionIndex = 8595;

	class OneDReader : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_INTEGER_MATH_SHIFT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OneDReader_TypeDefinitionIndex)->GetStaticField(0x3BD0);
		}
		static ::System::Int32* StaticGet_PATTERN_MATCH_RESULT_SCALE_FACTOR()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OneDReader_TypeDefinitionIndex)->GetStaticField(0x3BD4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_ONEDREADER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_ONEDREADER__CCTOR_OFFSET))();
		}
	};
}
