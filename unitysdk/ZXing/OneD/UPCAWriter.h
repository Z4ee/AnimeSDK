#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZXing/BarcodeFormat.h"
#include "unitysdk/ZXing/EncodeHintType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace ZXing::Common { class BitMatrix; }
namespace ZXing::OneD { class EAN13Writer; }

#define ZXING_ONED_UPCAWRITER_ENCODE_OFFSET UNITYSDK_OFFSET(0x16D66BE0)
#define ZXING_ONED_UPCAWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x16D56C80)

namespace ZXing::OneD
{
	inline static constexpr unsigned int UPCAWriter_TypeDefinitionIndex = 6997;

	class UPCAWriter : public ::System::Object
	{
	public:
		::ZXing::OneD::EAN13Writer* subWriter; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_UPCAWRITER__CTOR_OFFSET))(this);
		}

		::ZXing::Common::BitMatrix* encode(::System::String* a1, ::ZXing::BarcodeFormat a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>* a5)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::PVOID, ::System::String*, ::ZXing::BarcodeFormat, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>*))((::PBYTE)hIl2Cpp + ZXING_ONED_UPCAWRITER_ENCODE_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
