#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_CORNER1_OFFSET UNITYSDK_OFFSET(0x18864D40)
#define ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_CORNER2_OFFSET UNITYSDK_OFFSET(0x188651E0)
#define ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_CORNER3_OFFSET UNITYSDK_OFFSET(0x18865670)
#define ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_CORNER4_OFFSET UNITYSDK_OFFSET(0x18865B10)
#define ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_GETBIT_OFFSET UNITYSDK_OFFSET(0x18861DA0)
#define ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_HASBIT_OFFSET UNITYSDK_OFFSET(0x18864D00)
#define ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_MODULE_OFFSET UNITYSDK_OFFSET(0x18866160)
#define ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_PLACE_OFFSET UNITYSDK_OFFSET(0x1885F8E0)
#define ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_SETBIT_OFFSET UNITYSDK_OFFSET(0x18864CC0)
#define ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_UTAH_OFFSET UNITYSDK_OFFSET(0x18866060)
#define ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1885F850)

namespace ZXing::Datamatrix::Encoder
{
	inline static constexpr unsigned int DefaultPlacement_TypeDefinitionIndex = 8649;

	class DefaultPlacement : public ::System::Object
	{
	public:
		::System::String* codewords; // 0x10
		::Il2CppArray<::System::Byte>* bits; // 0x18
		::System::Int32 numcols; // 0x20
		::System::Int32 numrows; // 0x24

		::System::Void _ctor(::System::String* codewords, ::System::Int32 numcols, ::System::Int32 numrows)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT__CTOR_OFFSET))(this, codewords, numcols, numrows);
		}

		::System::Boolean getBit(::System::Int32 col, ::System::Int32 row)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_GETBIT_OFFSET))(this, col, row);
		}

		::System::Void setBit(::System::Int32 col, ::System::Int32 row, ::System::Boolean bit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_SETBIT_OFFSET))(this, col, row, bit);
		}

		::System::Boolean hasBit(::System::Int32 col, ::System::Int32 row)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_HASBIT_OFFSET))(this, col, row);
		}

		::System::Void place()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_PLACE_OFFSET))(this);
		}

		::System::Void module(::System::Int32 row, ::System::Int32 col, ::System::Int32 pos, ::System::Int32 bit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_MODULE_OFFSET))(this, row, col, pos, bit);
		}

		::System::Void utah(::System::Int32 row, ::System::Int32 col, ::System::Int32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_UTAH_OFFSET))(this, row, col, pos);
		}

		::System::Void corner1(::System::Int32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_CORNER1_OFFSET))(this, pos);
		}

		::System::Void corner2(::System::Int32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_CORNER2_OFFSET))(this, pos);
		}

		::System::Void corner3(::System::Int32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_CORNER3_OFFSET))(this, pos);
		}

		::System::Void corner4(::System::Int32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_CORNER4_OFFSET))(this, pos);
		}
	};
}
