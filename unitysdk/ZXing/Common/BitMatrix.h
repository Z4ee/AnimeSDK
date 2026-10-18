#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZXing::Common { class BitArray; }

#define ZXING_COMMON_BITMATRIX_BUILDTOSTRING_OFFSET UNITYSDK_OFFSET(0x1F676D90)
#define ZXING_COMMON_BITMATRIX_CLEAR_OFFSET UNITYSDK_OFFSET(0x1F676B10)
#define ZXING_COMMON_BITMATRIX_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F676B50)
#define ZXING_COMMON_BITMATRIX_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F676C10)
#define ZXING_COMMON_BITMATRIX_GETROW_OFFSET UNITYSDK_OFFSET(0x1F675CB0)
#define ZXING_COMMON_BITMATRIX_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1F676B00)
#define ZXING_COMMON_BITMATRIX_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1F66ED60)
#define ZXING_COMMON_BITMATRIX_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1F676AF0)
#define ZXING_COMMON_BITMATRIX_SETREGION_OFFSET UNITYSDK_OFFSET(0x1F66EDA0)
#define ZXING_COMMON_BITMATRIX_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1F6701B0)
#define ZXING_COMMON_BITMATRIX_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1F676D80)
#define ZXING_COMMON_BITMATRIX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F676CD0)
#define ZXING_COMMON_BITMATRIX__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F66ECD0)
#define ZXING_COMMON_BITMATRIX__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6700E0)

namespace ZXing::Common
{
	inline static constexpr unsigned int BitMatrix_TypeDefinitionIndex = 7021;

	class BitMatrix : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* bits; // 0x10
		::System::Int32 rowSize; // 0x18
		::System::Int32 height; // 0x1C
		::System::Int32 width; // 0x20

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX_GET_WIDTH_OFFSET))(this);
		}

		::System::Int32 get_Height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX_GET_HEIGHT_OFFSET))(this);
		}

		::System::Boolean get_Item(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX_GET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX_SET_ITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX_CLEAR_OFFSET))(this);
		}

		::System::Void setRegion(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX_SETREGION_OFFSET))(this, a1, a2, a3, a4);
		}

		::ZXing::Common::BitArray* getRow(::System::Int32 a1, ::ZXing::Common::BitArray* a2)
		{
			return ((::ZXing::Common::BitArray*(*)(::PVOID, ::System::Int32, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX_GETROW_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX_TOSTRING_1_OFFSET))(this, a1, a2, a3);
		}

		::System::String* buildToString(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX_BUILDTOSTRING_OFFSET))(this, a1, a2, a3);
		}
	};
}
