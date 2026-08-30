#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZXing/BarcodeFormat.h"
#include "unitysdk/ZXing/EncodeHintType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace ZXing::Common { class BitMatrix; }

#define ZXING_ONED_ONEDIMENSIONALCODEWRITER_APPENDPATTERN_OFFSET UNITYSDK_OFFSET(0x16D5D850)
#define ZXING_ONED_ONEDIMENSIONALCODEWRITER_ENCODE_OFFSET UNITYSDK_OFFSET(0x16D5C8D0)
#define ZXING_ONED_ONEDIMENSIONALCODEWRITER_GET_DEFAULTMARGIN_OFFSET UNITYSDK_OFFSET(0x16D64CB0)
#define ZXING_ONED_ONEDIMENSIONALCODEWRITER_RENDERRESULT_OFFSET UNITYSDK_OFFSET(0x16D64B40)
#define ZXING_ONED_ONEDIMENSIONALCODEWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x16D57D60)

namespace ZXing::OneD
{
	inline static constexpr unsigned int OneDimensionalCodeWriter_TypeDefinitionIndex = 6965;

	class OneDimensionalCodeWriter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_ONEDIMENSIONALCODEWRITER__CTOR_OFFSET))(this);
		}

		::ZXing::Common::BitMatrix* encode(::System::String* a1, ::ZXing::BarcodeFormat a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>* a5)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::PVOID, ::System::String*, ::ZXing::BarcodeFormat, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>*))((::PBYTE)hIl2Cpp + ZXING_ONED_ONEDIMENSIONALCODEWRITER_ENCODE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::ZXing::Common::BitMatrix* renderResult(::Il2CppArray<::System::Boolean>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::Il2CppArray<::System::Boolean>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_ONED_ONEDIMENSIONALCODEWRITER_RENDERRESULT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 appendPattern(::Il2CppArray<::System::Boolean>* a1, ::System::Int32 a2, ::Il2CppArray<::System::Int32>* a3, ::System::Boolean a4)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Boolean>*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_ONED_ONEDIMENSIONALCODEWRITER_APPENDPATTERN_OFFSET))(a1, a2, a3, a4);
		}

		::System::Int32 get_DefaultMargin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_ONEDIMENSIONALCODEWRITER_GET_DEFAULTMARGIN_OFFSET))(this);
		}
	};
}
