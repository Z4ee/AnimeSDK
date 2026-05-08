#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZXing/BarcodeFormat.h"
#include "unitysdk/ZXing/EncodeHintType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace ZXing::Common { class BitMatrix; }
namespace ZXing::OneD { class EAN13Writer; }

#define ZXING_ONED_UPCAWRITER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1887E230)
#define ZXING_ONED_UPCAWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1886C610)

namespace ZXing::OneD
{
	inline static constexpr unsigned int UPCAWriter_TypeDefinitionIndex = 8639;

	class UPCAWriter : public ::System::Object
	{
	public:
		::ZXing::OneD::EAN13Writer* subWriter; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_UPCAWRITER__CTOR_OFFSET))(this);
		}

		::ZXing::Common::BitMatrix* encode(::System::String* contents, ::ZXing::BarcodeFormat format, ::System::Int32 width, ::System::Int32 height, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>* hints)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::PVOID, ::System::String*, ::ZXing::BarcodeFormat, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>*))((::PBYTE)hIl2Cpp + ZXING_ONED_UPCAWRITER_ENCODE_OFFSET))(this, contents, format, width, height, hints);
		}
	};
}
