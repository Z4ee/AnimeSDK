#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZXing/Datamatrix/Encoder/SymbolShapeHint.h"

namespace System { class String; }
namespace ZXing { class Dimension; }

#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETDATALENGTHFORINTERLEAVEDBLOCK_OFFSET UNITYSDK_OFFSET(0x1B54CBE0)
#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETERRORLENGTHFORINTERLEAVEDBLOCK_OFFSET UNITYSDK_OFFSET(0x1B54CBF0)
#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETHORIZONTALDATAREGIONS_OFFSET UNITYSDK_OFFSET(0x1B54C970)
#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETINTERLEAVEDBLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0x1B54CBD0)
#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETSYMBOLDATAHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B543EA0)
#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETSYMBOLDATAWIDTH_OFFSET UNITYSDK_OFFSET(0x1B543E80)
#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETSYMBOLHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B544C40)
#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETSYMBOLWIDTH_OFFSET UNITYSDK_OFFSET(0x1B544C10)
#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETVERTICALDATAREGIONS_OFFSET UNITYSDK_OFFSET(0x1B54CAA0)
#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_LOOKUP_OFFSET UNITYSDK_OFFSET(0x1B5431B0)
#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B54CC00)
#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B54CF80)
#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B547EF0)
#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B54C940)

namespace ZXing::Datamatrix::Encoder
{
	inline static constexpr unsigned int SymbolInfo_TypeDefinitionIndex = 6466;

	class SymbolInfo : public ::System::Object
	{
	public:
		static ::Il2CppArray<::ZXing::Datamatrix::Encoder::SymbolInfo*>** StaticGet_symbols()
		{
			return (::Il2CppArray<::ZXing::Datamatrix::Encoder::SymbolInfo*>**)Il2CppClass::FromTypeDefinitionIndex(SymbolInfo_TypeDefinitionIndex)->GetStaticField(0x3960);
		}
		static ::Il2CppArray<::ZXing::Datamatrix::Encoder::SymbolInfo*>** StaticGet_PROD_SYMBOLS()
		{
			return (::Il2CppArray<::ZXing::Datamatrix::Encoder::SymbolInfo*>**)Il2CppClass::FromTypeDefinitionIndex(SymbolInfo_TypeDefinitionIndex)->GetStaticField(0x3968);
		}
		::System::Int32 matrixHeight; // 0x10
		::System::Int32 rsBlockError; // 0x14
		::System::Boolean rectangular; // 0x18
		::System::Int32 dataRegions; // 0x1C
		::System::Int32 dataCapacity; // 0x20
		::System::Int32 matrixWidth; // 0x24
		::System::Int32 rsBlockData; // 0x28
		::System::Int32 errorCodewords; // 0x2C

		::System::Void _ctor(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_SYMBOLINFO__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ctor_1(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_SYMBOLINFO__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_SYMBOLINFO__CCTOR_OFFSET))();
		}

		static ::ZXing::Datamatrix::Encoder::SymbolInfo* lookup(::System::Int32 a1, ::ZXing::Datamatrix::Encoder::SymbolShapeHint a2, ::ZXing::Dimension* a3, ::ZXing::Dimension* a4, ::System::Boolean a5)
		{
			return ((::ZXing::Datamatrix::Encoder::SymbolInfo*(*)(::System::Int32, ::ZXing::Datamatrix::Encoder::SymbolShapeHint, ::ZXing::Dimension*, ::ZXing::Dimension*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_LOOKUP_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Int32 getHorizontalDataRegions()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETHORIZONTALDATAREGIONS_OFFSET))(this);
		}

		::System::Int32 getVerticalDataRegions()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETVERTICALDATAREGIONS_OFFSET))(this);
		}

		::System::Int32 getSymbolDataWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETSYMBOLDATAWIDTH_OFFSET))(this);
		}

		::System::Int32 getSymbolDataHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETSYMBOLDATAHEIGHT_OFFSET))(this);
		}

		::System::Int32 getSymbolWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETSYMBOLWIDTH_OFFSET))(this);
		}

		::System::Int32 getSymbolHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETSYMBOLHEIGHT_OFFSET))(this);
		}

		::System::Int32 getInterleavedBlockCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETINTERLEAVEDBLOCKCOUNT_OFFSET))(this);
		}

		::System::Int32 getDataLengthForInterleavedBlock(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETDATALENGTHFORINTERLEAVEDBLOCK_OFFSET))(this, a1);
		}

		::System::Int32 getErrorLengthForInterleavedBlock(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETERRORLENGTHFORINTERLEAVEDBLOCK_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_TOSTRING_OFFSET))(this);
		}
	};
}
