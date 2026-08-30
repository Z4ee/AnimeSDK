#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZXing/BarcodeFormat.h"
#include "unitysdk/ZXing/EncodeHintType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace ZXing::Common { class BitMatrix; }
namespace ZXing::Datamatrix::Encoder { class DefaultPlacement; }
namespace ZXing::Datamatrix::Encoder { class SymbolInfo; }
namespace ZXing::QrCode::Internal { class ByteMatrix; }

#define ZXING_DATAMATRIX_DATAMATRIXWRITER_CONVERTBYTEMATRIXTOBITMATRIX_OFFSET UNITYSDK_OFFSET(0x16D4BFC0)
#define ZXING_DATAMATRIX_DATAMATRIXWRITER_ENCODELOWLEVEL_OFFSET UNITYSDK_OFFSET(0x16D4B3C0)
#define ZXING_DATAMATRIX_DATAMATRIXWRITER_ENCODE_OFFSET UNITYSDK_OFFSET(0x16D484E0)
#define ZXING_DATAMATRIX_DATAMATRIXWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x16D4C1D0)

namespace ZXing::Datamatrix
{
	inline static constexpr unsigned int DataMatrixWriter_TypeDefinitionIndex = 7045;

	class DataMatrixWriter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_DATAMATRIXWRITER__CTOR_OFFSET))(this);
		}

		::ZXing::Common::BitMatrix* encode(::System::String* a1, ::ZXing::BarcodeFormat a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>* a5)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::PVOID, ::System::String*, ::ZXing::BarcodeFormat, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_DATAMATRIXWRITER_ENCODE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::ZXing::Common::BitMatrix* encodeLowLevel(::ZXing::Datamatrix::Encoder::DefaultPlacement* a1, ::ZXing::Datamatrix::Encoder::SymbolInfo* a2)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::ZXing::Datamatrix::Encoder::DefaultPlacement*, ::ZXing::Datamatrix::Encoder::SymbolInfo*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_DATAMATRIXWRITER_ENCODELOWLEVEL_OFFSET))(a1, a2);
		}

		static ::ZXing::Common::BitMatrix* convertByteMatrixToBitMatrix(::ZXing::QrCode::Internal::ByteMatrix* a1)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_DATAMATRIXWRITER_CONVERTBYTEMATRIXTOBITMATRIX_OFFSET))(a1);
		}
	};
}
