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

#define ZXING_DATAMATRIX_DATAMATRIXWRITER_CONVERTBYTEMATRIXTOBITMATRIX_OFFSET UNITYSDK_OFFSET(0x1AB37370)
#define ZXING_DATAMATRIX_DATAMATRIXWRITER_ENCODELOWLEVEL_OFFSET UNITYSDK_OFFSET(0x1AB36680)
#define ZXING_DATAMATRIX_DATAMATRIXWRITER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1AB32BC0)
#define ZXING_DATAMATRIX_DATAMATRIXWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB375C0)

namespace ZXing::Datamatrix
{
	inline static constexpr unsigned int DataMatrixWriter_TypeDefinitionIndex = 19188;

	class DataMatrixWriter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_DATAMATRIXWRITER__CTOR_OFFSET))(this);
		}

		::ZXing::Common::BitMatrix* encode(::System::String* contents, ::ZXing::BarcodeFormat format, ::System::Int32 width, ::System::Int32 height, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>* hints)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::PVOID, ::System::String*, ::ZXing::BarcodeFormat, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_DATAMATRIXWRITER_ENCODE_OFFSET))(this, contents, format, width, height, hints);
		}

		static ::ZXing::Common::BitMatrix* encodeLowLevel(::ZXing::Datamatrix::Encoder::DefaultPlacement* placement, ::ZXing::Datamatrix::Encoder::SymbolInfo* symbolInfo)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::ZXing::Datamatrix::Encoder::DefaultPlacement*, ::ZXing::Datamatrix::Encoder::SymbolInfo*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_DATAMATRIXWRITER_ENCODELOWLEVEL_OFFSET))(placement, symbolInfo);
		}

		static ::ZXing::Common::BitMatrix* convertByteMatrixToBitMatrix(::ZXing::QrCode::Internal::ByteMatrix* matrix)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_DATAMATRIXWRITER_CONVERTBYTEMATRIXTOBITMATRIX_OFFSET))(matrix);
		}
	};
}
