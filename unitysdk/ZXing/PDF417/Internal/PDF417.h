#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZXing/PDF417/Internal/Compaction.h"

namespace System { class String; }
namespace System::Text { class Encoding; }
namespace ZXing::PDF417::Internal { class BarcodeMatrix; }
namespace ZXing::PDF417::Internal { class BarcodeRow; }

#define ZXING_PDF417_INTERNAL_PDF417_CALCULATENUMBEROFROWS_OFFSET UNITYSDK_OFFSET(0x1F000FB0)
#define ZXING_PDF417_INTERNAL_PDF417_DETERMINEDIMENSIONS_OFFSET UNITYSDK_OFFSET(0x1F002730)
#define ZXING_PDF417_INTERNAL_PDF417_ENCODECHAR_OFFSET UNITYSDK_OFFSET(0x1F001000)
#define ZXING_PDF417_INTERNAL_PDF417_ENCODELOWLEVEL_OFFSET UNITYSDK_OFFSET(0x1F001120)
#define ZXING_PDF417_INTERNAL_PDF417_GENERATEBARCODELOGIC_OFFSET UNITYSDK_OFFSET(0x1F0018B0)
#define ZXING_PDF417_INTERNAL_PDF417_GETNUMBEROFPADCODEWORDS_OFFSET UNITYSDK_OFFSET(0x1F000FE0)
#define ZXING_PDF417_INTERNAL_PDF417_GET_BARCODEMATRIX_OFFSET UNITYSDK_OFFSET(0x1F000FA0)
#define ZXING_PDF417_INTERNAL_PDF417_SETCOMPACTION_OFFSET UNITYSDK_OFFSET(0x1F003130)
#define ZXING_PDF417_INTERNAL_PDF417_SETCOMPACT_OFFSET UNITYSDK_OFFSET(0x1F003140)
#define ZXING_PDF417_INTERNAL_PDF417_SETDIMENSIONS_OFFSET UNITYSDK_OFFSET(0x1F003110)
#define ZXING_PDF417_INTERNAL_PDF417_SETDISABLEECI_OFFSET UNITYSDK_OFFSET(0x1F0031C0)
#define ZXING_PDF417_INTERNAL_PDF417_SETENCODING_OFFSET UNITYSDK_OFFSET(0x1F003150)
#define ZXING_PDF417_INTERNAL_PDF417__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0031D0)
#define ZXING_PDF417_INTERNAL_PDF417__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F000F60)
#define ZXING_PDF417_INTERNAL_PDF417__CTOR_OFFSET UNITYSDK_OFFSET(0x1F000F20)

namespace ZXing::PDF417::Internal
{
	inline static constexpr unsigned int PDF417_TypeDefinitionIndex = 7023;

	class PDF417 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_CODEWORD_TABLE()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(PDF417_TypeDefinitionIndex)->GetStaticField(0x278F0);
		}
		::System::Text::Encoding* encoding; // 0x10
		::ZXing::PDF417::Internal::BarcodeMatrix* barcodeMatrix; // 0x18
		::System::Int32 maxRows; // 0x20
		::System::Int32 minRows; // 0x24
		::System::Int32 minCols; // 0x28
		::System::Boolean disableEci; // 0x2C
		::System::Boolean compact; // 0x2D
		::ZXing::PDF417::Internal::Compaction compaction; // 0x30
		::System::Int32 maxCols; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417__CCTOR_OFFSET))();
		}

		::ZXing::PDF417::Internal::BarcodeMatrix* get_BarcodeMatrix()
		{
			return ((::ZXing::PDF417::Internal::BarcodeMatrix*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417_GET_BARCODEMATRIX_OFFSET))(this);
		}

		static ::System::Int32 calculateNumberOfRows(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417_CALCULATENUMBEROFROWS_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 getNumberOfPadCodewords(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417_GETNUMBEROFPADCODEWORDS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void encodeChar(::System::Int32 a1, ::System::Int32 a2, ::ZXing::PDF417::Internal::BarcodeRow* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::ZXing::PDF417::Internal::BarcodeRow*))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417_ENCODECHAR_OFFSET))(a1, a2, a3);
		}

		::System::Void encodeLowLevel(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::ZXing::PDF417::Internal::BarcodeMatrix* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::ZXing::PDF417::Internal::BarcodeMatrix*))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417_ENCODELOWLEVEL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void generateBarcodeLogic(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417_GENERATEBARCODELOGIC_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Int32>* determineDimensions(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417_DETERMINEDIMENSIONS_OFFSET))(this, a1, a2);
		}

		::System::Void setDimensions(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417_SETDIMENSIONS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void setCompaction(::ZXing::PDF417::Internal::Compaction a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::PDF417::Internal::Compaction))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417_SETCOMPACTION_OFFSET))(this, a1);
		}

		::System::Void setCompact(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417_SETCOMPACT_OFFSET))(this, a1);
		}

		::System::Void setEncoding(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417_SETENCODING_OFFSET))(this, a1);
		}

		::System::Void setDisableEci(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417_SETDISABLEECI_OFFSET))(this, a1);
		}
	};
}
