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

#define ZXING_QRCODE_INTERNAL_ENCODER_APPEND8BITBYTES_OFFSET UNITYSDK_OFFSET(0x15567490)
#define ZXING_QRCODE_INTERNAL_ENCODER_APPENDALPHANUMERICBYTES_OFFSET UNITYSDK_OFFSET(0x15567200)
#define ZXING_QRCODE_INTERNAL_ENCODER_APPENDBYTES_OFFSET UNITYSDK_OFFSET(0x15564FA0)
#define ZXING_QRCODE_INTERNAL_ENCODER_APPENDECI_OFFSET UNITYSDK_OFFSET(0x15564EB0)
#define ZXING_QRCODE_INTERNAL_ENCODER_APPENDKANJIBYTES_OFFSET UNITYSDK_OFFSET(0x155676B0)
#define ZXING_QRCODE_INTERNAL_ENCODER_APPENDLENGTHINFO_OFFSET UNITYSDK_OFFSET(0x15565530)
#define ZXING_QRCODE_INTERNAL_ENCODER_APPENDMODEINFO_OFFSET UNITYSDK_OFFSET(0x15564F70)
#define ZXING_QRCODE_INTERNAL_ENCODER_APPENDNUMERICBYTES_OFFSET UNITYSDK_OFFSET(0x15567010)
#define ZXING_QRCODE_INTERNAL_ENCODER_CALCULATEBITSNEEDED_OFFSET UNITYSDK_OFFSET(0x15565290)
#define ZXING_QRCODE_INTERNAL_ENCODER_CALCULATEMASKPENALTY_OFFSET UNITYSDK_OFFSET(0x15563340)
#define ZXING_QRCODE_INTERNAL_ENCODER_CHOOSEMASKPATTERN_OFFSET UNITYSDK_OFFSET(0x15566650)
#define ZXING_QRCODE_INTERNAL_ENCODER_CHOOSEMODE_OFFSET UNITYSDK_OFFSET(0x15564CD0)
#define ZXING_QRCODE_INTERNAL_ENCODER_CHOOSEVERSION_OFFSET UNITYSDK_OFFSET(0x155668D0)
#define ZXING_QRCODE_INTERNAL_ENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x15563D20)
#define ZXING_QRCODE_INTERNAL_ENCODER_GENERATEECBYTES_OFFSET UNITYSDK_OFFSET(0x15566E80)
#define ZXING_QRCODE_INTERNAL_ENCODER_GETALPHANUMERICCODE_OFFSET UNITYSDK_OFFSET(0x15566A40)
#define ZXING_QRCODE_INTERNAL_ENCODER_GETNUMDATABYTESANDNUMECBYTESFORBLOCKID_OFFSET UNITYSDK_OFFSET(0x15566D00)
#define ZXING_QRCODE_INTERNAL_ENCODER_INTERLEAVEWITHECBYTES_OFFSET UNITYSDK_OFFSET(0x15565980)
#define ZXING_QRCODE_INTERNAL_ENCODER_ISONLYDOUBLEBYTEKANJI_OFFSET UNITYSDK_OFFSET(0x15566B10)
#define ZXING_QRCODE_INTERNAL_ENCODER_RECOMMENDVERSION_OFFSET UNITYSDK_OFFSET(0x15565390)
#define ZXING_QRCODE_INTERNAL_ENCODER_TERMINATEBITS_OFFSET UNITYSDK_OFFSET(0x155656C0)
#define ZXING_QRCODE_INTERNAL_ENCODER_WILLFIT_OFFSET UNITYSDK_OFFSET(0x155652D0)
#define ZXING_QRCODE_INTERNAL_ENCODER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15567A00)

namespace ZXing::QrCode::Internal
{
	inline static constexpr unsigned int Encoder_TypeDefinitionIndex = 6475;

	class Encoder : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_DEFAULT_BYTE_MODE_ENCODING()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Encoder_TypeDefinitionIndex)->GetStaticField(0x25C0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_ALPHANUMERIC_TABLE()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Encoder_TypeDefinitionIndex)->GetStaticField(0x25C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER__CCTOR_OFFSET))();
		}

		static ::System::Int32 calculateMaskPenalty(::ZXing::QrCode::Internal::ByteMatrix* a1)
		{
			return ((::System::Int32(*)(::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_CALCULATEMASKPENALTY_OFFSET))(a1);
		}

		static ::ZXing::QrCode::Internal::QRCode* encode(::System::String* a1, ::ZXing::QrCode::Internal::ErrorCorrectionLevel* a2, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>* a3)
		{
			return ((::ZXing::QrCode::Internal::QRCode*(*)(::System::String*, ::ZXing::QrCode::Internal::ErrorCorrectionLevel*, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_ENCODE_OFFSET))(a1, a2, a3);
		}

		static ::ZXing::QrCode::Internal::Version* recommendVersion(::ZXing::QrCode::Internal::ErrorCorrectionLevel* a1, ::ZXing::QrCode::Internal::Mode* a2, ::ZXing::Common::BitArray* a3, ::ZXing::Common::BitArray* a4)
		{
			return ((::ZXing::QrCode::Internal::Version*(*)(::ZXing::QrCode::Internal::ErrorCorrectionLevel*, ::ZXing::QrCode::Internal::Mode*, ::ZXing::Common::BitArray*, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_RECOMMENDVERSION_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 calculateBitsNeeded(::ZXing::QrCode::Internal::Mode* a1, ::ZXing::Common::BitArray* a2, ::ZXing::Common::BitArray* a3, ::ZXing::QrCode::Internal::Version* a4)
		{
			return ((::System::Int32(*)(::ZXing::QrCode::Internal::Mode*, ::ZXing::Common::BitArray*, ::ZXing::Common::BitArray*, ::ZXing::QrCode::Internal::Version*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_CALCULATEBITSNEEDED_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 getAlphanumericCode(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_GETALPHANUMERICCODE_OFFSET))(a1);
		}

		static ::ZXing::QrCode::Internal::Mode* chooseMode(::System::String* a1, ::System::String* a2)
		{
			return ((::ZXing::QrCode::Internal::Mode*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_CHOOSEMODE_OFFSET))(a1, a2);
		}

		static ::System::Boolean isOnlyDoubleByteKanji(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_ISONLYDOUBLEBYTEKANJI_OFFSET))(a1);
		}

		static ::System::Int32 chooseMaskPattern(::ZXing::Common::BitArray* a1, ::ZXing::QrCode::Internal::ErrorCorrectionLevel* a2, ::ZXing::QrCode::Internal::Version* a3, ::ZXing::QrCode::Internal::ByteMatrix* a4)
		{
			return ((::System::Int32(*)(::ZXing::Common::BitArray*, ::ZXing::QrCode::Internal::ErrorCorrectionLevel*, ::ZXing::QrCode::Internal::Version*, ::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_CHOOSEMASKPATTERN_OFFSET))(a1, a2, a3, a4);
		}

		static ::ZXing::QrCode::Internal::Version* chooseVersion(::System::Int32 a1, ::ZXing::QrCode::Internal::ErrorCorrectionLevel* a2)
		{
			return ((::ZXing::QrCode::Internal::Version*(*)(::System::Int32, ::ZXing::QrCode::Internal::ErrorCorrectionLevel*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_CHOOSEVERSION_OFFSET))(a1, a2);
		}

		static ::System::Boolean willFit(::System::Int32 a1, ::ZXing::QrCode::Internal::Version* a2, ::ZXing::QrCode::Internal::ErrorCorrectionLevel* a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::ZXing::QrCode::Internal::Version*, ::ZXing::QrCode::Internal::ErrorCorrectionLevel*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_WILLFIT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void terminateBits(::System::Int32 a1, ::ZXing::Common::BitArray* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_TERMINATEBITS_OFFSET))(a1, a2);
		}

		static ::System::Void getNumDataBytesAndNumECBytesForBlockID(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::Il2CppArray<::System::Int32>* a5, ::Il2CppArray<::System::Int32>* a6)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_GETNUMDATABYTESANDNUMECBYTESFORBLOCKID_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::ZXing::Common::BitArray* interleaveWithECBytes(::ZXing::Common::BitArray* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::ZXing::Common::BitArray*(*)(::ZXing::Common::BitArray*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_INTERLEAVEWITHECBYTES_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::System::Byte>* generateECBytes(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_GENERATEECBYTES_OFFSET))(a1, a2);
		}

		static ::System::Void appendModeInfo(::ZXing::QrCode::Internal::Mode* a1, ::ZXing::Common::BitArray* a2)
		{
			return ((::System::Void(*)(::ZXing::QrCode::Internal::Mode*, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_APPENDMODEINFO_OFFSET))(a1, a2);
		}

		static ::System::Void appendLengthInfo(::System::Int32 a1, ::ZXing::QrCode::Internal::Version* a2, ::ZXing::QrCode::Internal::Mode* a3, ::ZXing::Common::BitArray* a4)
		{
			return ((::System::Void(*)(::System::Int32, ::ZXing::QrCode::Internal::Version*, ::ZXing::QrCode::Internal::Mode*, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_APPENDLENGTHINFO_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void appendBytes(::System::String* a1, ::ZXing::QrCode::Internal::Mode* a2, ::ZXing::Common::BitArray* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::String*, ::ZXing::QrCode::Internal::Mode*, ::ZXing::Common::BitArray*, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_APPENDBYTES_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void appendNumericBytes(::System::String* a1, ::ZXing::Common::BitArray* a2)
		{
			return ((::System::Void(*)(::System::String*, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_APPENDNUMERICBYTES_OFFSET))(a1, a2);
		}

		static ::System::Void appendAlphanumericBytes(::System::String* a1, ::ZXing::Common::BitArray* a2)
		{
			return ((::System::Void(*)(::System::String*, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_APPENDALPHANUMERICBYTES_OFFSET))(a1, a2);
		}

		static ::System::Void append8BitBytes(::System::String* a1, ::ZXing::Common::BitArray* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::String*, ::ZXing::Common::BitArray*, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_APPEND8BITBYTES_OFFSET))(a1, a2, a3);
		}

		static ::System::Void appendKanjiBytes(::System::String* a1, ::ZXing::Common::BitArray* a2)
		{
			return ((::System::Void(*)(::System::String*, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_APPENDKANJIBYTES_OFFSET))(a1, a2);
		}

		static ::System::Void appendECI(::ZXing::Common::CharacterSetECI* a1, ::ZXing::Common::BitArray* a2)
		{
			return ((::System::Void(*)(::ZXing::Common::CharacterSetECI*, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ENCODER_APPENDECI_OFFSET))(a1, a2);
		}
	};
}
