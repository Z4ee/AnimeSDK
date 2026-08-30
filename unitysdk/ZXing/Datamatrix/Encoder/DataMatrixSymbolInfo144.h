#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/Datamatrix/Encoder/SymbolInfo.h"

#define ZXING_DATAMATRIX_ENCODER_DATAMATRIXSYMBOLINFO144_GETDATALENGTHFORINTERLEAVEDBLOCK_OFFSET UNITYSDK_OFFSET(0x16D4F100)
#define ZXING_DATAMATRIX_ENCODER_DATAMATRIXSYMBOLINFO144_GETINTERLEAVEDBLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0x16D4F0F0)
#define ZXING_DATAMATRIX_ENCODER_DATAMATRIXSYMBOLINFO144__CTOR_OFFSET UNITYSDK_OFFSET(0x16D4F030)

namespace ZXing::Datamatrix::Encoder
{
	inline static constexpr unsigned int DataMatrixSymbolInfo144_TypeDefinitionIndex = 7035;

	class DataMatrixSymbolInfo144 : public ::ZXing::Datamatrix::Encoder::SymbolInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_DATAMATRIXSYMBOLINFO144__CTOR_OFFSET))(this);
		}

		::System::Int32 getInterleavedBlockCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_DATAMATRIXSYMBOLINFO144_GETINTERLEAVEDBLOCKCOUNT_OFFSET))(this);
		}

		::System::Int32 getDataLengthForInterleavedBlock(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_DATAMATRIXSYMBOLINFO144_GETDATALENGTHFORINTERLEAVEDBLOCK_OFFSET))(this, a1);
		}
	};
}
