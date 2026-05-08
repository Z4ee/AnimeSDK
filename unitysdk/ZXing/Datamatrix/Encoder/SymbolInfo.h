#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZXing/Datamatrix/Encoder/SymbolShapeHint.h"

namespace System { class String; }
namespace ZXing { class Dimension; }

#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETDATALENGTHFORINTERLEAVEDBLOCK_OFFSET UNITYSDK_OFFSET(0x18869620)
#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETERRORLENGTHFORINTERLEAVEDBLOCK_OFFSET UNITYSDK_OFFSET(0x18869630)
#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETHORIZONTALDATAREGIONS_OFFSET UNITYSDK_OFFSET(0x188693B0)
#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETINTERLEAVEDBLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0x18869610)
#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETSYMBOLDATAHEIGHT_OFFSET UNITYSDK_OFFSET(0x1885F830)
#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETSYMBOLDATAWIDTH_OFFSET UNITYSDK_OFFSET(0x1885F810)
#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETSYMBOLHEIGHT_OFFSET UNITYSDK_OFFSET(0x18861BD0)
#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETSYMBOLWIDTH_OFFSET UNITYSDK_OFFSET(0x18861BA0)
#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETVERTICALDATAREGIONS_OFFSET UNITYSDK_OFFSET(0x188694E0)
#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_LOOKUP_OFFSET UNITYSDK_OFFSET(0x1885EB40)
#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18869640)
#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x18869A10)
#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18864C60)
#define ZXING_DATAMATRIX_ENCODER_SYMBOLINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18869380)

namespace ZXing::Datamatrix::Encoder
{
	inline static constexpr unsigned int SymbolInfo_TypeDefinitionIndex = 8658;

	class SymbolInfo : public ::System::Object
	{
	public:
		static ::Il2CppArray<::ZXing::Datamatrix::Encoder::SymbolInfo*>** StaticGet_symbols()
		{
			return (::Il2CppArray<::ZXing::Datamatrix::Encoder::SymbolInfo*>**)Il2CppClass::FromTypeDefinitionIndex(SymbolInfo_TypeDefinitionIndex)->GetStaticField(0x7960);
		}
		static ::Il2CppArray<::ZXing::Datamatrix::Encoder::SymbolInfo*>** StaticGet_PROD_SYMBOLS()
		{
			return (::Il2CppArray<::ZXing::Datamatrix::Encoder::SymbolInfo*>**)Il2CppClass::FromTypeDefinitionIndex(SymbolInfo_TypeDefinitionIndex)->GetStaticField(0x7968);
		}
		::System::Int32 dataCapacity; // 0x10
		::System::Int32 dataRegions; // 0x14
		::System::Int32 rsBlockData; // 0x18
		::System::Int32 matrixWidth; // 0x1C
		::System::Int32 matrixHeight; // 0x20
		::System::Int32 errorCodewords; // 0x24
		::System::Int32 rsBlockError; // 0x28
		::System::Boolean rectangular; // 0x2C

		::System::Void _ctor(::System::Boolean rectangular, ::System::Int32 dataCapacity, ::System::Int32 errorCodewords, ::System::Int32 matrixWidth, ::System::Int32 matrixHeight, ::System::Int32 dataRegions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_SYMBOLINFO__CTOR_OFFSET))(this, rectangular, dataCapacity, errorCodewords, matrixWidth, matrixHeight, dataRegions);
		}

		::System::Void _ctor_1(::System::Boolean rectangular, ::System::Int32 dataCapacity, ::System::Int32 errorCodewords, ::System::Int32 matrixWidth, ::System::Int32 matrixHeight, ::System::Int32 dataRegions, ::System::Int32 rsBlockData, ::System::Int32 rsBlockError)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_SYMBOLINFO__CTOR_1_OFFSET))(this, rectangular, dataCapacity, errorCodewords, matrixWidth, matrixHeight, dataRegions, rsBlockData, rsBlockError);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_SYMBOLINFO__CCTOR_OFFSET))();
		}

		static ::ZXing::Datamatrix::Encoder::SymbolInfo* lookup(::System::Int32 dataCodewords, ::ZXing::Datamatrix::Encoder::SymbolShapeHint shape, ::ZXing::Dimension* minSize, ::ZXing::Dimension* maxSize, ::System::Boolean fail)
		{
			return ((::ZXing::Datamatrix::Encoder::SymbolInfo*(*)(::System::Int32, ::ZXing::Datamatrix::Encoder::SymbolShapeHint, ::ZXing::Dimension*, ::ZXing::Dimension*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_LOOKUP_OFFSET))(dataCodewords, shape, minSize, maxSize, fail);
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

		::System::Int32 getDataLengthForInterleavedBlock(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETDATALENGTHFORINTERLEAVEDBLOCK_OFFSET))(this, index);
		}

		::System::Int32 getErrorLengthForInterleavedBlock(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_GETERRORLENGTHFORINTERLEAVEDBLOCK_OFFSET))(this, index);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_SYMBOLINFO_TOSTRING_OFFSET))(this);
		}
	};
}
