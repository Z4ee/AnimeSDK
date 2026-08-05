#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZXing::Common { class BitArray; }
namespace ZXing::QrCode::Internal { class ByteMatrix; }
namespace ZXing::QrCode::Internal { class ErrorCorrectionLevel; }
namespace ZXing::QrCode::Internal { class Version; }

#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_BUILDMATRIX_OFFSET UNITYSDK_OFFSET(0x1BEA26F0)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_CALCULATEBCHCODE_OFFSET UNITYSDK_OFFSET(0x1BEA5E40)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_CLEARMATRIX_OFFSET UNITYSDK_OFFSET(0x1BEA41F0)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDBASICPATTERNS_OFFSET UNITYSDK_OFFSET(0x1BEA4210)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDDARKDOTATLEFTBOTTOMCORNER_OFFSET UNITYSDK_OFFSET(0x1BEA5570)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDDATABITS_OFFSET UNITYSDK_OFFSET(0x1BEA49C0)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDHORIZONTALSEPARATIONPATTERN_OFFSET UNITYSDK_OFFSET(0x1BEA5FF0)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDPOSITIONADJUSTMENTPATTERN_OFFSET UNITYSDK_OFFSET(0x1BEA6650)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDPOSITIONDETECTIONPATTERNSANDSEPARATORS_OFFSET UNITYSDK_OFFSET(0x1BEA5410)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDPOSITIONDETECTIONPATTERN_OFFSET UNITYSDK_OFFSET(0x1BEA6960)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDTIMINGPATTERNS_OFFSET UNITYSDK_OFFSET(0x1BEA5880)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDTYPEINFO_OFFSET UNITYSDK_OFFSET(0x1BEA4290)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDVERTICALSEPARATIONPATTERN_OFFSET UNITYSDK_OFFSET(0x1BEA6170)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_FINDMSBSET_OFFSET UNITYSDK_OFFSET(0x1BEA5E20)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1BEA5E10)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_MAKETYPEINFOBITS_OFFSET UNITYSDK_OFFSET(0x1BEA5AE0)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_MAKEVERSIONINFOBITS_OFFSET UNITYSDK_OFFSET(0x1BEA5D20)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_MAYBEEMBEDPOSITIONADJUSTMENTPATTERNS_OFFSET UNITYSDK_OFFSET(0x1BEA5630)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL_MAYBEEMBEDVERSIONINFO_OFFSET UNITYSDK_OFFSET(0x1BEA4640)
#define ZXING_QRCODE_INTERNAL_MATRIXUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEA6D10)

namespace ZXing::QrCode::Internal
{
	inline static constexpr unsigned int MatrixUtil_TypeDefinitionIndex = 19511;

	class MatrixUtil : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_POSITION_DETECTION_PATTERN()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(MatrixUtil_TypeDefinitionIndex)->GetStaticField(0x8EF0);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_TYPE_INFO_COORDINATES()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(MatrixUtil_TypeDefinitionIndex)->GetStaticField(0x8EF8);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_POSITION_ADJUSTMENT_PATTERN_COORDINATE_TABLE()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(MatrixUtil_TypeDefinitionIndex)->GetStaticField(0x8F00);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_POSITION_ADJUSTMENT_PATTERN()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(MatrixUtil_TypeDefinitionIndex)->GetStaticField(0x8F08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL__CCTOR_OFFSET))();
		}

		static ::System::Void clearMatrix(::ZXing::QrCode::Internal::ByteMatrix* matrix)
		{
			return ((::System::Void(*)(::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_CLEARMATRIX_OFFSET))(matrix);
		}

		static ::System::Void buildMatrix(::ZXing::Common::BitArray* dataBits, ::ZXing::QrCode::Internal::ErrorCorrectionLevel* ecLevel, ::ZXing::QrCode::Internal::Version* version, ::System::Int32 maskPattern, ::ZXing::QrCode::Internal::ByteMatrix* matrix)
		{
			return ((::System::Void(*)(::ZXing::Common::BitArray*, ::ZXing::QrCode::Internal::ErrorCorrectionLevel*, ::ZXing::QrCode::Internal::Version*, ::System::Int32, ::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_BUILDMATRIX_OFFSET))(dataBits, ecLevel, version, maskPattern, matrix);
		}

		static ::System::Void embedBasicPatterns(::ZXing::QrCode::Internal::Version* version, ::ZXing::QrCode::Internal::ByteMatrix* matrix)
		{
			return ((::System::Void(*)(::ZXing::QrCode::Internal::Version*, ::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDBASICPATTERNS_OFFSET))(version, matrix);
		}

		static ::System::Void embedTypeInfo(::ZXing::QrCode::Internal::ErrorCorrectionLevel* ecLevel, ::System::Int32 maskPattern, ::ZXing::QrCode::Internal::ByteMatrix* matrix)
		{
			return ((::System::Void(*)(::ZXing::QrCode::Internal::ErrorCorrectionLevel*, ::System::Int32, ::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDTYPEINFO_OFFSET))(ecLevel, maskPattern, matrix);
		}

		static ::System::Void maybeEmbedVersionInfo(::ZXing::QrCode::Internal::Version* version, ::ZXing::QrCode::Internal::ByteMatrix* matrix)
		{
			return ((::System::Void(*)(::ZXing::QrCode::Internal::Version*, ::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_MAYBEEMBEDVERSIONINFO_OFFSET))(version, matrix);
		}

		static ::System::Void embedDataBits(::ZXing::Common::BitArray* dataBits, ::System::Int32 maskPattern, ::ZXing::QrCode::Internal::ByteMatrix* matrix)
		{
			return ((::System::Void(*)(::ZXing::Common::BitArray*, ::System::Int32, ::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDDATABITS_OFFSET))(dataBits, maskPattern, matrix);
		}

		static ::System::Int32 findMSBSet(::System::Int32 value_Renamed)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_FINDMSBSET_OFFSET))(value_Renamed);
		}

		static ::System::Int32 calculateBCHCode(::System::Int32 value, ::System::Int32 poly)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_CALCULATEBCHCODE_OFFSET))(value, poly);
		}

		static ::System::Void makeTypeInfoBits(::ZXing::QrCode::Internal::ErrorCorrectionLevel* ecLevel, ::System::Int32 maskPattern, ::ZXing::Common::BitArray* bits)
		{
			return ((::System::Void(*)(::ZXing::QrCode::Internal::ErrorCorrectionLevel*, ::System::Int32, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_MAKETYPEINFOBITS_OFFSET))(ecLevel, maskPattern, bits);
		}

		static ::System::Void makeVersionInfoBits(::ZXing::QrCode::Internal::Version* version, ::ZXing::Common::BitArray* bits)
		{
			return ((::System::Void(*)(::ZXing::QrCode::Internal::Version*, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_MAKEVERSIONINFOBITS_OFFSET))(version, bits);
		}

		static ::System::Boolean isEmpty(::System::Int32 value)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_ISEMPTY_OFFSET))(value);
		}

		static ::System::Void embedTimingPatterns(::ZXing::QrCode::Internal::ByteMatrix* matrix)
		{
			return ((::System::Void(*)(::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDTIMINGPATTERNS_OFFSET))(matrix);
		}

		static ::System::Void embedDarkDotAtLeftBottomCorner(::ZXing::QrCode::Internal::ByteMatrix* matrix)
		{
			return ((::System::Void(*)(::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDDARKDOTATLEFTBOTTOMCORNER_OFFSET))(matrix);
		}

		static ::System::Void embedHorizontalSeparationPattern(::System::Int32 xStart, ::System::Int32 yStart, ::ZXing::QrCode::Internal::ByteMatrix* matrix)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDHORIZONTALSEPARATIONPATTERN_OFFSET))(xStart, yStart, matrix);
		}

		static ::System::Void embedVerticalSeparationPattern(::System::Int32 xStart, ::System::Int32 yStart, ::ZXing::QrCode::Internal::ByteMatrix* matrix)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDVERTICALSEPARATIONPATTERN_OFFSET))(xStart, yStart, matrix);
		}

		static ::System::Void embedPositionAdjustmentPattern(::System::Int32 xStart, ::System::Int32 yStart, ::ZXing::QrCode::Internal::ByteMatrix* matrix)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDPOSITIONADJUSTMENTPATTERN_OFFSET))(xStart, yStart, matrix);
		}

		static ::System::Void embedPositionDetectionPattern(::System::Int32 xStart, ::System::Int32 yStart, ::ZXing::QrCode::Internal::ByteMatrix* matrix)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDPOSITIONDETECTIONPATTERN_OFFSET))(xStart, yStart, matrix);
		}

		static ::System::Void embedPositionDetectionPatternsAndSeparators(::ZXing::QrCode::Internal::ByteMatrix* matrix)
		{
			return ((::System::Void(*)(::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_EMBEDPOSITIONDETECTIONPATTERNSANDSEPARATORS_OFFSET))(matrix);
		}

		static ::System::Void maybeEmbedPositionAdjustmentPatterns(::ZXing::QrCode::Internal::Version* version, ::ZXing::QrCode::Internal::ByteMatrix* matrix)
		{
			return ((::System::Void(*)(::ZXing::QrCode::Internal::Version*, ::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MATRIXUTIL_MAYBEEMBEDPOSITIONADJUSTMENTPATTERNS_OFFSET))(version, matrix);
		}
	};
}
