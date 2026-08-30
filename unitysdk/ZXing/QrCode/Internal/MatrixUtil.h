#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZXing::Common { class BitArray; }
namespace ZXing::QrCode::Internal { class ByteMatrix; }
namespace ZXing::QrCode::Internal { class ErrorCorrectionLevel; }
namespace ZXing::QrCode::Internal { class Version; }

#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_BUILDMATRIX_OFFSET UNITYSDK_OFFSET(0x16D753C0)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_CALCULATEBCHCODE_OFFSET UNITYSDK_OFFSET(0x16D78780)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_CLEARMATRIX_OFFSET UNITYSDK_OFFSET(0x16D76D40)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDBASICPATTERNS_OFFSET UNITYSDK_OFFSET(0x16D76DE0)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDDARKDOTATLEFTBOTTOMCORNER_OFFSET UNITYSDK_OFFSET(0x16D77FC0)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDDATABITS_OFFSET UNITYSDK_OFFSET(0x16D77450)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDHORIZONTALSEPARATIONPATTERN_OFFSET UNITYSDK_OFFSET(0x16D78940)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDPOSITIONADJUSTMENTPATTERN_OFFSET UNITYSDK_OFFSET(0x16D78F30)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDPOSITIONDETECTIONPATTERNSANDSEPARATORS_OFFSET UNITYSDK_OFFSET(0x16D77E70)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDPOSITIONDETECTIONPATTERN_OFFSET UNITYSDK_OFFSET(0x16D79210)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDTIMINGPATTERNS_OFFSET UNITYSDK_OFFSET(0x16D78260)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDTYPEINFO_OFFSET UNITYSDK_OFFSET(0x16D76E60)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDVERTICALSEPARATIONPATTERN_OFFSET UNITYSDK_OFFSET(0x16D78A80)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_FINDMSBSET_OFFSET UNITYSDK_OFFSET(0x16D78760)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x16D78750)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_MAKETYPEINFOBITS_OFFSET UNITYSDK_OFFSET(0x16D78440)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_MAKEVERSIONINFOBITS_OFFSET UNITYSDK_OFFSET(0x16D78660)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_MAYBEEMBEDPOSITIONADJUSTMENTPATTERNS_OFFSET UNITYSDK_OFFSET(0x16D78060)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_MAYBEEMBEDVERSIONINFO_OFFSET UNITYSDK_OFFSET(0x16D77150)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D79590)

namespace ZXing::QrCode::Internal
{
	inline static constexpr unsigned int MatrixUtil_TypeDefinitionIndex = 7026;

	class MatrixUtil : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_POSITION_DETECTION_PATTERN()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(MatrixUtil_TypeDefinitionIndex)->GetStaticField(0x33070);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_POSITION_ADJUSTMENT_PATTERN_COORDINATE_TABLE()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(MatrixUtil_TypeDefinitionIndex)->GetStaticField(0x33078);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_POSITION_ADJUSTMENT_PATTERN()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(MatrixUtil_TypeDefinitionIndex)->GetStaticField(0x33080);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_TYPE_INFO_COORDINATES()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(MatrixUtil_TypeDefinitionIndex)->GetStaticField(0x33088);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL__CCTOR_OFFSET))();
		}

		static ::System::Void clearMatrix(::ZXing::QrCode::Internal::ByteMatrix* a1)
		{
			return ((::System::Void(*)(::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_CLEARMATRIX_OFFSET))(a1);
		}

		static ::System::Void buildMatrix(::ZXing::Common::BitArray* a1, ::ZXing::QrCode::Internal::ErrorCorrectionLevel* a2, ::ZXing::QrCode::Internal::Version* a3, ::System::Int32 a4, ::ZXing::QrCode::Internal::ByteMatrix* a5)
		{
			return ((::System::Void(*)(::ZXing::Common::BitArray*, ::ZXing::QrCode::Internal::ErrorCorrectionLevel*, ::ZXing::QrCode::Internal::Version*, ::System::Int32, ::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_BUILDMATRIX_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void embedBasicPatterns(::ZXing::QrCode::Internal::Version* a1, ::ZXing::QrCode::Internal::ByteMatrix* a2)
		{
			return ((::System::Void(*)(::ZXing::QrCode::Internal::Version*, ::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDBASICPATTERNS_OFFSET))(a1, a2);
		}

		static ::System::Void embedTypeInfo(::ZXing::QrCode::Internal::ErrorCorrectionLevel* a1, ::System::Int32 a2, ::ZXing::QrCode::Internal::ByteMatrix* a3)
		{
			return ((::System::Void(*)(::ZXing::QrCode::Internal::ErrorCorrectionLevel*, ::System::Int32, ::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDTYPEINFO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void maybeEmbedVersionInfo(::ZXing::QrCode::Internal::Version* a1, ::ZXing::QrCode::Internal::ByteMatrix* a2)
		{
			return ((::System::Void(*)(::ZXing::QrCode::Internal::Version*, ::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_MAYBEEMBEDVERSIONINFO_OFFSET))(a1, a2);
		}

		static ::System::Void embedDataBits(::ZXing::Common::BitArray* a1, ::System::Int32 a2, ::ZXing::QrCode::Internal::ByteMatrix* a3)
		{
			return ((::System::Void(*)(::ZXing::Common::BitArray*, ::System::Int32, ::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDDATABITS_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 findMSBSet(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_FINDMSBSET_OFFSET))(a1);
		}

		static ::System::Int32 calculateBCHCode(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_CALCULATEBCHCODE_OFFSET))(a1, a2);
		}

		static ::System::Void makeTypeInfoBits(::ZXing::QrCode::Internal::ErrorCorrectionLevel* a1, ::System::Int32 a2, ::ZXing::Common::BitArray* a3)
		{
			return ((::System::Void(*)(::ZXing::QrCode::Internal::ErrorCorrectionLevel*, ::System::Int32, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_MAKETYPEINFOBITS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void makeVersionInfoBits(::ZXing::QrCode::Internal::Version* a1, ::ZXing::Common::BitArray* a2)
		{
			return ((::System::Void(*)(::ZXing::QrCode::Internal::Version*, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_MAKEVERSIONINFOBITS_OFFSET))(a1, a2);
		}

		static ::System::Boolean isEmpty(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_ISEMPTY_OFFSET))(a1);
		}

		static ::System::Void embedTimingPatterns(::ZXing::QrCode::Internal::ByteMatrix* a1)
		{
			return ((::System::Void(*)(::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDTIMINGPATTERNS_OFFSET))(a1);
		}

		static ::System::Void embedDarkDotAtLeftBottomCorner(::ZXing::QrCode::Internal::ByteMatrix* a1)
		{
			return ((::System::Void(*)(::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDDARKDOTATLEFTBOTTOMCORNER_OFFSET))(a1);
		}

		static ::System::Void embedHorizontalSeparationPattern(::System::Int32 a1, ::System::Int32 a2, ::ZXing::QrCode::Internal::ByteMatrix* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDHORIZONTALSEPARATIONPATTERN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void embedVerticalSeparationPattern(::System::Int32 a1, ::System::Int32 a2, ::ZXing::QrCode::Internal::ByteMatrix* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDVERTICALSEPARATIONPATTERN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void embedPositionAdjustmentPattern(::System::Int32 a1, ::System::Int32 a2, ::ZXing::QrCode::Internal::ByteMatrix* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDPOSITIONADJUSTMENTPATTERN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void embedPositionDetectionPattern(::System::Int32 a1, ::System::Int32 a2, ::ZXing::QrCode::Internal::ByteMatrix* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDPOSITIONDETECTIONPATTERN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void embedPositionDetectionPatternsAndSeparators(::ZXing::QrCode::Internal::ByteMatrix* a1)
		{
			return ((::System::Void(*)(::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDPOSITIONDETECTIONPATTERNSANDSEPARATORS_OFFSET))(a1);
		}

		static ::System::Void maybeEmbedPositionAdjustmentPatterns(::ZXing::QrCode::Internal::Version* a1, ::ZXing::QrCode::Internal::ByteMatrix* a2)
		{
			return ((::System::Void(*)(::ZXing::QrCode::Internal::Version*, ::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_MAYBEEMBEDPOSITIONADJUSTMENTPATTERNS_OFFSET))(a1, a2);
		}
	};
}
