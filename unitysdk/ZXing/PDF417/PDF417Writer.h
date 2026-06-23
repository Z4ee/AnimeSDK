#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZXing/BarcodeFormat.h"
#include "unitysdk/ZXing/EncodeHintType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace ZXing::Common { class BitMatrix; }
namespace ZXing::PDF417::Internal { class PDF417; }

#define ZXING_PDF417_PDF417WRITER_BITMATRIXFROMBITARRAY_OFFSET UNITYSDK_OFFSET(0x1AB5E360)
#define ZXING_PDF417_PDF417WRITER_BITMATRIXFROMENCODER_OFFSET UNITYSDK_OFFSET(0x1AB5DF60)
#define ZXING_PDF417_PDF417WRITER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1AB5CD00)
#define ZXING_PDF417_PDF417WRITER_ROTATEARRAY_OFFSET UNITYSDK_OFFSET(0x1AB5E0B0)
#define ZXING_PDF417_PDF417WRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB41DB0)

namespace ZXing::PDF417
{
	inline static constexpr unsigned int PDF417Writer_TypeDefinitionIndex = 19181;

	class PDF417Writer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_PDF417_PDF417WRITER__CTOR_OFFSET))(this);
		}

		::ZXing::Common::BitMatrix* encode(::System::String* contents, ::ZXing::BarcodeFormat format, ::System::Int32 width, ::System::Int32 height, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>* hints)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::PVOID, ::System::String*, ::ZXing::BarcodeFormat, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>*))((::PBYTE)hIl2Cpp + ZXING_PDF417_PDF417WRITER_ENCODE_OFFSET))(this, contents, format, width, height, hints);
		}

		static ::ZXing::Common::BitMatrix* bitMatrixFromEncoder(::ZXing::PDF417::Internal::PDF417* encoder, ::System::String* contents, ::System::Int32 errorCorrectionLevel, ::System::Int32 width, ::System::Int32 height, ::System::Int32 margin)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::ZXing::PDF417::Internal::PDF417*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_PDF417WRITER_BITMATRIXFROMENCODER_OFFSET))(encoder, contents, errorCorrectionLevel, width, height, margin);
		}

		static ::ZXing::Common::BitMatrix* bitMatrixFromBitArray(::Il2CppArray<::Il2CppArray<::System::SByte>*>* input, ::System::Int32 margin)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::Il2CppArray<::Il2CppArray<::System::SByte>*>*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_PDF417WRITER_BITMATRIXFROMBITARRAY_OFFSET))(input, margin);
		}

		static ::Il2CppArray<::Il2CppArray<::System::SByte>*>* rotateArray(::Il2CppArray<::Il2CppArray<::System::SByte>*>* bitarray)
		{
			return ((::Il2CppArray<::Il2CppArray<::System::SByte>*>*(*)(::Il2CppArray<::Il2CppArray<::System::SByte>*>*))((::PBYTE)hIl2Cpp + ZXING_PDF417_PDF417WRITER_ROTATEARRAY_OFFSET))(bitarray);
		}
	};
}
