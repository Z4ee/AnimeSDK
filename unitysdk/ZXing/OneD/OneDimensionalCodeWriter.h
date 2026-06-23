#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZXing/BarcodeFormat.h"
#include "unitysdk/ZXing/EncodeHintType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace ZXing::Common { class BitMatrix; }

#define ZXING_ONED_ONEDIMENSIONALCODEWRITER_APPENDPATTERN_OFFSET UNITYSDK_OFFSET(0x1AB4A890)
#define ZXING_ONED_ONEDIMENSIONALCODEWRITER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1AB49B90)
#define ZXING_ONED_ONEDIMENSIONALCODEWRITER_GET_DEFAULTMARGIN_OFFSET UNITYSDK_OFFSET(0x1AB517A0)
#define ZXING_ONED_ONEDIMENSIONALCODEWRITER_RENDERRESULT_OFFSET UNITYSDK_OFFSET(0x1AB51620)
#define ZXING_ONED_ONEDIMENSIONALCODEWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB42F40)

namespace ZXing::OneD
{
	inline static constexpr unsigned int OneDimensionalCodeWriter_TypeDefinitionIndex = 19105;

	class OneDimensionalCodeWriter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_ONEDIMENSIONALCODEWRITER__CTOR_OFFSET))(this);
		}

		::ZXing::Common::BitMatrix* encode(::System::String* contents, ::ZXing::BarcodeFormat format, ::System::Int32 width, ::System::Int32 height, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>* hints)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::PVOID, ::System::String*, ::ZXing::BarcodeFormat, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>*))((::PBYTE)hIl2Cpp + ZXING_ONED_ONEDIMENSIONALCODEWRITER_ENCODE_OFFSET))(this, contents, format, width, height, hints);
		}

		static ::ZXing::Common::BitMatrix* renderResult(::Il2CppArray<::System::Boolean>* code, ::System::Int32 width, ::System::Int32 height, ::System::Int32 sidesMargin)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::Il2CppArray<::System::Boolean>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_ONED_ONEDIMENSIONALCODEWRITER_RENDERRESULT_OFFSET))(code, width, height, sidesMargin);
		}

		static ::System::Int32 appendPattern(::Il2CppArray<::System::Boolean>* target, ::System::Int32 pos, ::Il2CppArray<::System::Int32>* pattern, ::System::Boolean startColor)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Boolean>*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_ONED_ONEDIMENSIONALCODEWRITER_APPENDPATTERN_OFFSET))(target, pos, pattern, startColor);
		}

		::System::Int32 get_DefaultMargin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_ONEDIMENSIONALCODEWRITER_GET_DEFAULTMARGIN_OFFSET))(this);
		}
	};
}
