#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/BarcodeFormat.h"
#include "unitysdk/ZXing/EncodeHintType.h"
#include "unitysdk/ZXing/OneD/OneDimensionalCodeWriter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace ZXing::Common { class BitMatrix; }

#define ZXING_ONED_CODE39WRITER_ENCODE_1_OFFSET UNITYSDK_OFFSET(0x1B556680)
#define ZXING_ONED_CODE39WRITER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1B5565E0)
#define ZXING_ONED_CODE39WRITER_TOINTARRAY_OFFSET UNITYSDK_OFFSET(0x1B557370)
#define ZXING_ONED_CODE39WRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B54FB00)

namespace ZXing::OneD
{
	inline static constexpr unsigned int Code39Writer_TypeDefinitionIndex = 6482;

	class Code39Writer : public ::ZXing::OneD::OneDimensionalCodeWriter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_CODE39WRITER__CTOR_OFFSET))(this);
		}

		::ZXing::Common::BitMatrix* encode(::System::String* a1, ::ZXing::BarcodeFormat a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>* a5)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::PVOID, ::System::String*, ::ZXing::BarcodeFormat, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>*))((::PBYTE)hIl2Cpp + ZXING_ONED_CODE39WRITER_ENCODE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Il2CppArray<::System::Boolean>* encode_1(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Boolean>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_ONED_CODE39WRITER_ENCODE_1_OFFSET))(this, a1);
		}

		static ::System::Void toIntArray(::System::Int32 a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + ZXING_ONED_CODE39WRITER_TOINTARRAY_OFFSET))(a1, a2);
		}
	};
}
