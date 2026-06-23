#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/OneD/UPCEANReader.h"

#define ZXING_ONED_EAN13READER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB4CF10)
#define ZXING_ONED_EAN13READER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB4CCD0)

namespace ZXing::OneD
{
	inline static constexpr unsigned int EAN13Reader_TypeDefinitionIndex = 19139;

	class EAN13Reader : public ::ZXing::OneD::UPCEANReader
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_FIRST_DIGIT_ENCODINGS()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EAN13Reader_TypeDefinitionIndex)->GetStaticField(0x8CB0);
		}
		::Il2CppArray<::System::Int32>* decodeMiddleCounters; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_EAN13READER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_EAN13READER__CCTOR_OFFSET))();
		}
	};
}
