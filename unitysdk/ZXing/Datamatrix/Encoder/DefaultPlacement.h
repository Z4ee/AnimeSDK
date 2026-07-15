#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_CORNER1_OFFSET UNITYSDK_OFFSET(0x155405A0)
#define ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_CORNER2_OFFSET UNITYSDK_OFFSET(0x15540AC0)
#define ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_CORNER3_OFFSET UNITYSDK_OFFSET(0x15541030)
#define ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_CORNER4_OFFSET UNITYSDK_OFFSET(0x155415A0)
#define ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_GETBIT_OFFSET UNITYSDK_OFFSET(0x1553D390)
#define ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_HASBIT_OFFSET UNITYSDK_OFFSET(0x15540560)
#define ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_MODULE_OFFSET UNITYSDK_OFFSET(0x155421D0)
#define ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_PLACE_OFFSET UNITYSDK_OFFSET(0x1553C4F0)
#define ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_SETBIT_OFFSET UNITYSDK_OFFSET(0x15540520)
#define ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_UTAH_OFFSET UNITYSDK_OFFSET(0x15541B00)
#define ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1553C490)

namespace ZXing::Datamatrix::Encoder
{
	inline static constexpr unsigned int DefaultPlacement_TypeDefinitionIndex = 6462;

	class DefaultPlacement : public ::System::Object
	{
	public:
		::System::String* codewords; // 0x10
		::Il2CppArray<::System::Byte>* bits; // 0x18
		::System::Int32 numrows; // 0x20
		::System::Int32 numcols; // 0x24

		::System::Void _ctor(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean getBit(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_GETBIT_OFFSET))(this, a1, a2);
		}

		::System::Void setBit(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_SETBIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean hasBit(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_HASBIT_OFFSET))(this, a1, a2);
		}

		::System::Void place()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_PLACE_OFFSET))(this);
		}

		::System::Void module(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_MODULE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void utah(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_UTAH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void corner1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_CORNER1_OFFSET))(this, a1);
		}

		::System::Void corner2(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_CORNER2_OFFSET))(this, a1);
		}

		::System::Void corner3(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_CORNER3_OFFSET))(this, a1);
		}

		::System::Void corner4(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_DEFAULTPLACEMENT_CORNER4_OFFSET))(this, a1);
		}
	};
}
