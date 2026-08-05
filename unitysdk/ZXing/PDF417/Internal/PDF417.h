#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZXing/PDF417/Internal/Compaction.h"

namespace System { class String; }
namespace System::Text { class Encoding; }
namespace ZXing::PDF417::Internal { class BarcodeMatrix; }
namespace ZXing::PDF417::Internal { class BarcodeRow; }

#define ZXING_PDF417_INTERNAL_PDF417_CALCULATENUMBEROFROWS_OFFSET UNITYSDK_OFFSET(0x1BE96DA0)
#define ZXING_PDF417_INTERNAL_PDF417_DETERMINEDIMENSIONS_OFFSET UNITYSDK_OFFSET(0x1BE984D0)
#define ZXING_PDF417_INTERNAL_PDF417_ENCODECHAR_OFFSET UNITYSDK_OFFSET(0x1BE96DF0)
#define ZXING_PDF417_INTERNAL_PDF417_ENCODELOWLEVEL_OFFSET UNITYSDK_OFFSET(0x1BE96F40)
#define ZXING_PDF417_INTERNAL_PDF417_GENERATEBARCODELOGIC_OFFSET UNITYSDK_OFFSET(0x1BE977D0)
#define ZXING_PDF417_INTERNAL_PDF417_GETNUMBEROFPADCODEWORDS_OFFSET UNITYSDK_OFFSET(0x1BE96DD0)
#define ZXING_PDF417_INTERNAL_PDF417_GET_BARCODEMATRIX_OFFSET UNITYSDK_OFFSET(0x1BE96D90)
#define ZXING_PDF417_INTERNAL_PDF417_SETCOMPACTION_OFFSET UNITYSDK_OFFSET(0x1BE98F60)
#define ZXING_PDF417_INTERNAL_PDF417_SETCOMPACT_OFFSET UNITYSDK_OFFSET(0x1BE98F70)
#define ZXING_PDF417_INTERNAL_PDF417_SETDIMENSIONS_OFFSET UNITYSDK_OFFSET(0x1BE98F40)
#define ZXING_PDF417_INTERNAL_PDF417_SETDISABLEECI_OFFSET UNITYSDK_OFFSET(0x1BE99020)
#define ZXING_PDF417_INTERNAL_PDF417_SETENCODING_OFFSET UNITYSDK_OFFSET(0x1BE98F80)
#define ZXING_PDF417_INTERNAL_PDF417__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE99030)
#define ZXING_PDF417_INTERNAL_PDF417__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BE96D50)
#define ZXING_PDF417_INTERNAL_PDF417__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE96D10)

namespace ZXing::PDF417::Internal
{
	inline static constexpr unsigned int PDF417_TypeDefinitionIndex = 19508;

	class PDF417 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_CODEWORD_TABLE()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(PDF417_TypeDefinitionIndex)->GetStaticField(0x8E10);
		}
		::System::Text::Encoding* encoding; // 0x10
		::ZXing::PDF417::Internal::BarcodeMatrix* barcodeMatrix; // 0x18
		::System::Int32 minRows; // 0x20
		::System::Int32 maxRows; // 0x24
		::System::Int32 maxCols; // 0x28
		::System::Boolean disableEci; // 0x2C
		::System::Boolean compact; // 0x2D
		::ZXing::PDF417::Internal::Compaction compaction; // 0x30
		::System::Int32 minCols; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean compact)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417__CTOR_1_OFFSET))(this, compact);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417__CCTOR_OFFSET))();
		}

		::ZXing::PDF417::Internal::BarcodeMatrix* get_BarcodeMatrix()
		{
			return ((::ZXing::PDF417::Internal::BarcodeMatrix*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417_GET_BARCODEMATRIX_OFFSET))(this);
		}

		static ::System::Int32 calculateNumberOfRows(::System::Int32 m, ::System::Int32 k, ::System::Int32 c)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417_CALCULATENUMBEROFROWS_OFFSET))(m, k, c);
		}

		static ::System::Int32 getNumberOfPadCodewords(::System::Int32 m, ::System::Int32 k, ::System::Int32 c, ::System::Int32 r)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417_GETNUMBEROFPADCODEWORDS_OFFSET))(m, k, c, r);
		}

		static ::System::Void encodeChar(::System::Int32 pattern, ::System::Int32 len, ::ZXing::PDF417::Internal::BarcodeRow* logic)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::ZXing::PDF417::Internal::BarcodeRow*))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417_ENCODECHAR_OFFSET))(pattern, len, logic);
		}

		::System::Void encodeLowLevel(::System::String* fullCodewords, ::System::Int32 c, ::System::Int32 r, ::System::Int32 errorCorrectionLevel, ::ZXing::PDF417::Internal::BarcodeMatrix* logic)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::ZXing::PDF417::Internal::BarcodeMatrix*))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417_ENCODELOWLEVEL_OFFSET))(this, fullCodewords, c, r, errorCorrectionLevel, logic);
		}

		::System::Void generateBarcodeLogic(::System::String* msg, ::System::Int32 errorCorrectionLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417_GENERATEBARCODELOGIC_OFFSET))(this, msg, errorCorrectionLevel);
		}

		::Il2CppArray<::System::Int32>* determineDimensions(::System::Int32 sourceCodeWords, ::System::Int32 errorCorrectionCodeWords)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417_DETERMINEDIMENSIONS_OFFSET))(this, sourceCodeWords, errorCorrectionCodeWords);
		}

		::System::Void setDimensions(::System::Int32 maxCols, ::System::Int32 minCols, ::System::Int32 maxRows, ::System::Int32 minRows)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417_SETDIMENSIONS_OFFSET))(this, maxCols, minCols, maxRows, minRows);
		}

		::System::Void setCompaction(::ZXing::PDF417::Internal::Compaction compaction)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::PDF417::Internal::Compaction))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417_SETCOMPACTION_OFFSET))(this, compaction);
		}

		::System::Void setCompact(::System::Boolean compact)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417_SETCOMPACT_OFFSET))(this, compact);
		}

		::System::Void setEncoding(::System::String* encodingname)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417_SETENCODING_OFFSET))(this, encodingname);
		}

		::System::Void setDisableEci(::System::Boolean disabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417_SETDISABLEECI_OFFSET))(this, disabled);
		}
	};
}
