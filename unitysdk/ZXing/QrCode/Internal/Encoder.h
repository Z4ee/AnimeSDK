#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZXing/EncodeHintType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace ZXing::Common { class BitArray; }
namespace ZXing::Common { class CharacterSetECI; }
namespace ZXing::QrCode::Internal { class ByteMatrix; }
namespace ZXing::QrCode::Internal { class ErrorCorrectionLevel; }
namespace ZXing::QrCode::Internal { class Mode; }
namespace ZXing::QrCode::Internal { class QRCode; }
namespace ZXing::QrCode::Internal { class Version; }

#define ZXING_QRCODE_INTERNAL_ENCODER_APPEND8BITBYTES_OFFSET UNITYSDK_OFFSET(0x1A76B240)
#define ZXING_QRCODE_INTERNAL_ENCODER_APPENDALPHANUMERICBYTES_OFFSET UNITYSDK_OFFSET(0x1A76AFB0)
#define ZXING_QRCODE_INTERNAL_ENCODER_APPENDBYTES_OFFSET UNITYSDK_OFFSET(0x1A768B20)
#define ZXING_QRCODE_INTERNAL_ENCODER_APPENDECI_OFFSET UNITYSDK_OFFSET(0x1A768A30)
#define ZXING_QRCODE_INTERNAL_ENCODER_APPENDKANJIBYTES_OFFSET UNITYSDK_OFFSET(0x1A76B400)
#define ZXING_QRCODE_INTERNAL_ENCODER_APPENDLENGTHINFO_OFFSET UNITYSDK_OFFSET(0x1A7690D0)
#define ZXING_QRCODE_INTERNAL_ENCODER_APPENDMODEINFO_OFFSET UNITYSDK_OFFSET(0x1A768AF0)
#define ZXING_QRCODE_INTERNAL_ENCODER_APPENDNUMERICBYTES_OFFSET UNITYSDK_OFFSET(0x1A76ADC0)
#define ZXING_QRCODE_INTERNAL_ENCODER_CALCULATEBITSNEEDED_OFFSET UNITYSDK_OFFSET(0x1A768E20)
#define ZXING_QRCODE_INTERNAL_ENCODER_CALCULATEMASKPENALTY_OFFSET UNITYSDK_OFFSET(0x1A7670D0)
#define ZXING_QRCODE_INTERNAL_ENCODER_CHOOSEMASKPATTERN_OFFSET UNITYSDK_OFFSET(0x1A76A3B0)
#define ZXING_QRCODE_INTERNAL_ENCODER_CHOOSEMODE_OFFSET UNITYSDK_OFFSET(0x1A768850)
#define ZXING_QRCODE_INTERNAL_ENCODER_CHOOSEVERSION_OFFSET UNITYSDK_OFFSET(0x1A76A630)
#define ZXING_QRCODE_INTERNAL_ENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1A767D00)
#define ZXING_QRCODE_INTERNAL_ENCODER_GENERATEECBYTES_OFFSET UNITYSDK_OFFSET(0x1A76ABF0)
#define ZXING_QRCODE_INTERNAL_ENCODER_GETALPHANUMERICCODE_OFFSET UNITYSDK_OFFSET(0x1A76A7B0)
#define ZXING_QRCODE_INTERNAL_ENCODER_GETNUMDATABYTESANDNUMECBYTESFORBLOCKID_OFFSET UNITYSDK_OFFSET(0x1A76AA20)
#define ZXING_QRCODE_INTERNAL_ENCODER_INTERLEAVEWITHECBYTES_OFFSET UNITYSDK_OFFSET(0x1A769520)
#define ZXING_QRCODE_INTERNAL_ENCODER_ISONLYDOUBLEBYTEKANJI_OFFSET UNITYSDK_OFFSET(0x1A76A890)
#define ZXING_QRCODE_INTERNAL_ENCODER_RECOMMENDVERSION_OFFSET UNITYSDK_OFFSET(0x1A768F30)
#define ZXING_QRCODE_INTERNAL_ENCODER_TERMINATEBITS_OFFSET UNITYSDK_OFFSET(0x1A769260)
#define ZXING_QRCODE_INTERNAL_ENCODER_WILLFIT_OFFSET UNITYSDK_OFFSET(0x1A768E60)
#define ZXING_QRCODE_INTERNAL_ENCODER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A76B6D0)

namespace ZXing::QrCode::Internal
{
	inline static constexpr unsigned int Encoder_TypeDefinitionIndex = 6097;

	class Encoder : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_DEFAULT_BYTE_MODE_ENCODING()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Encoder_TypeDefinitionIndex)->GetStaticField(0x4FE0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_ALPHANUMERIC_TABLE()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Encoder_TypeDefinitionIndex)->GetStaticField(0x4FE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER__CCTOR_OFFSET))();
		}

		static ::System::Int32 calculateMaskPenalty(::ZXing::QrCode::Internal::ByteMatrix* matrix)
		{
			return ((::System::Int32(*)(::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_CALCULATEMASKPENALTY_OFFSET))(matrix);
		}

		static ::ZXing::QrCode::Internal::QRCode* encode(::System::String* content, ::ZXing::QrCode::Internal::ErrorCorrectionLevel* ecLevel, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>* hints)
		{
			return ((::ZXing::QrCode::Internal::QRCode*(*)(::System::String*, ::ZXing::QrCode::Internal::ErrorCorrectionLevel*, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_ENCODE_OFFSET))(content, ecLevel, hints);
		}

		static ::ZXing::QrCode::Internal::Version* recommendVersion(::ZXing::QrCode::Internal::ErrorCorrectionLevel* ecLevel, ::ZXing::QrCode::Internal::Mode* mode, ::ZXing::Common::BitArray* headerBits, ::ZXing::Common::BitArray* dataBits)
		{
			return ((::ZXing::QrCode::Internal::Version*(*)(::ZXing::QrCode::Internal::ErrorCorrectionLevel*, ::ZXing::QrCode::Internal::Mode*, ::ZXing::Common::BitArray*, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_RECOMMENDVERSION_OFFSET))(ecLevel, mode, headerBits, dataBits);
		}

		static ::System::Int32 calculateBitsNeeded(::ZXing::QrCode::Internal::Mode* mode, ::ZXing::Common::BitArray* headerBits, ::ZXing::Common::BitArray* dataBits, ::ZXing::QrCode::Internal::Version* version)
		{
			return ((::System::Int32(*)(::ZXing::QrCode::Internal::Mode*, ::ZXing::Common::BitArray*, ::ZXing::Common::BitArray*, ::ZXing::QrCode::Internal::Version*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_CALCULATEBITSNEEDED_OFFSET))(mode, headerBits, dataBits, version);
		}

		static ::System::Int32 getAlphanumericCode(::System::Int32 code)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_GETALPHANUMERICCODE_OFFSET))(code);
		}

		static ::ZXing::QrCode::Internal::Mode* chooseMode(::System::String* content, ::System::String* encoding)
		{
			return ((::ZXing::QrCode::Internal::Mode*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_CHOOSEMODE_OFFSET))(content, encoding);
		}

		static ::System::Boolean isOnlyDoubleByteKanji(::System::String* content)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_ISONLYDOUBLEBYTEKANJI_OFFSET))(content);
		}

		static ::System::Int32 chooseMaskPattern(::ZXing::Common::BitArray* bits, ::ZXing::QrCode::Internal::ErrorCorrectionLevel* ecLevel, ::ZXing::QrCode::Internal::Version* version, ::ZXing::QrCode::Internal::ByteMatrix* matrix)
		{
			return ((::System::Int32(*)(::ZXing::Common::BitArray*, ::ZXing::QrCode::Internal::ErrorCorrectionLevel*, ::ZXing::QrCode::Internal::Version*, ::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_CHOOSEMASKPATTERN_OFFSET))(bits, ecLevel, version, matrix);
		}

		static ::ZXing::QrCode::Internal::Version* chooseVersion(::System::Int32 numInputBits, ::ZXing::QrCode::Internal::ErrorCorrectionLevel* ecLevel)
		{
			return ((::ZXing::QrCode::Internal::Version*(*)(::System::Int32, ::ZXing::QrCode::Internal::ErrorCorrectionLevel*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_CHOOSEVERSION_OFFSET))(numInputBits, ecLevel);
		}

		static ::System::Boolean willFit(::System::Int32 numInputBits, ::ZXing::QrCode::Internal::Version* version, ::ZXing::QrCode::Internal::ErrorCorrectionLevel* ecLevel)
		{
			return ((::System::Boolean(*)(::System::Int32, ::ZXing::QrCode::Internal::Version*, ::ZXing::QrCode::Internal::ErrorCorrectionLevel*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_WILLFIT_OFFSET))(numInputBits, version, ecLevel);
		}

		static ::System::Void terminateBits(::System::Int32 numDataBytes, ::ZXing::Common::BitArray* bits)
		{
			return ((::System::Void(*)(::System::Int32, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_TERMINATEBITS_OFFSET))(numDataBytes, bits);
		}

		static ::System::Void getNumDataBytesAndNumECBytesForBlockID(::System::Int32 numTotalBytes, ::System::Int32 numDataBytes, ::System::Int32 numRSBlocks, ::System::Int32 blockID, ::Il2CppArray<::System::Int32>* numDataBytesInBlock, ::Il2CppArray<::System::Int32>* numECBytesInBlock)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_GETNUMDATABYTESANDNUMECBYTESFORBLOCKID_OFFSET))(numTotalBytes, numDataBytes, numRSBlocks, blockID, numDataBytesInBlock, numECBytesInBlock);
		}

		static ::ZXing::Common::BitArray* interleaveWithECBytes(::ZXing::Common::BitArray* bits, ::System::Int32 numTotalBytes, ::System::Int32 numDataBytes, ::System::Int32 numRSBlocks)
		{
			return ((::ZXing::Common::BitArray*(*)(::ZXing::Common::BitArray*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_INTERLEAVEWITHECBYTES_OFFSET))(bits, numTotalBytes, numDataBytes, numRSBlocks);
		}

		static ::Il2CppArray<::System::Byte>* generateECBytes(::Il2CppArray<::System::Byte>* dataBytes, ::System::Int32 numEcBytesInBlock)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_GENERATEECBYTES_OFFSET))(dataBytes, numEcBytesInBlock);
		}

		static ::System::Void appendModeInfo(::ZXing::QrCode::Internal::Mode* mode, ::ZXing::Common::BitArray* bits)
		{
			return ((::System::Void(*)(::ZXing::QrCode::Internal::Mode*, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_APPENDMODEINFO_OFFSET))(mode, bits);
		}

		static ::System::Void appendLengthInfo(::System::Int32 numLetters, ::ZXing::QrCode::Internal::Version* version, ::ZXing::QrCode::Internal::Mode* mode, ::ZXing::Common::BitArray* bits)
		{
			return ((::System::Void(*)(::System::Int32, ::ZXing::QrCode::Internal::Version*, ::ZXing::QrCode::Internal::Mode*, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_APPENDLENGTHINFO_OFFSET))(numLetters, version, mode, bits);
		}

		static ::System::Void appendBytes(::System::String* content, ::ZXing::QrCode::Internal::Mode* mode, ::ZXing::Common::BitArray* bits, ::System::String* encoding)
		{
			return ((::System::Void(*)(::System::String*, ::ZXing::QrCode::Internal::Mode*, ::ZXing::Common::BitArray*, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_APPENDBYTES_OFFSET))(content, mode, bits, encoding);
		}

		static ::System::Void appendNumericBytes(::System::String* content, ::ZXing::Common::BitArray* bits)
		{
			return ((::System::Void(*)(::System::String*, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_APPENDNUMERICBYTES_OFFSET))(content, bits);
		}

		static ::System::Void appendAlphanumericBytes(::System::String* content, ::ZXing::Common::BitArray* bits)
		{
			return ((::System::Void(*)(::System::String*, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_APPENDALPHANUMERICBYTES_OFFSET))(content, bits);
		}

		static ::System::Void append8BitBytes(::System::String* content, ::ZXing::Common::BitArray* bits, ::System::String* encoding)
		{
			return ((::System::Void(*)(::System::String*, ::ZXing::Common::BitArray*, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_APPEND8BITBYTES_OFFSET))(content, bits, encoding);
		}

		static ::System::Void appendKanjiBytes(::System::String* content, ::ZXing::Common::BitArray* bits)
		{
			return ((::System::Void(*)(::System::String*, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_APPENDKANJIBYTES_OFFSET))(content, bits);
		}

		static ::System::Void appendECI(::ZXing::Common::CharacterSetECI* eci, ::ZXing::Common::BitArray* bits)
		{
			return ((::System::Void(*)(::ZXing::Common::CharacterSetECI*, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_APPENDECI_OFFSET))(eci, bits);
		}
	};
}
