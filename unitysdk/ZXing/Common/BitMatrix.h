#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZXing::Common { class BitArray; }

#define ZXING_COMMON_BITMATRIX_BUILDTOSTRING_OFFSET UNITYSDK_OFFSET(0x18859B20)
#define ZXING_COMMON_BITMATRIX_CLEAR_OFFSET UNITYSDK_OFFSET(0x18859650)
#define ZXING_COMMON_BITMATRIX_EQUALS_OFFSET UNITYSDK_OFFSET(0x188598E0)
#define ZXING_COMMON_BITMATRIX_FLIP_OFFSET UNITYSDK_OFFSET(0x18859600)
#define ZXING_COMMON_BITMATRIX_GETENCLOSINGRECTANGLE_OFFSET UNITYSDK_OFFSET(0x18859690)
#define ZXING_COMMON_BITMATRIX_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x188599A0)
#define ZXING_COMMON_BITMATRIX_GETROW_OFFSET UNITYSDK_OFFSET(0x188588B0)
#define ZXING_COMMON_BITMATRIX_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x188595F0)
#define ZXING_COMMON_BITMATRIX_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x188515A0)
#define ZXING_COMMON_BITMATRIX_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x188595E0)
#define ZXING_COMMON_BITMATRIX_SETREGION_OFFSET UNITYSDK_OFFSET(0x188515F0)
#define ZXING_COMMON_BITMATRIX_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x18852990)
#define ZXING_COMMON_BITMATRIX_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x18859B10)
#define ZXING_COMMON_BITMATRIX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18859A60)
#define ZXING_COMMON_BITMATRIX__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18851510)
#define ZXING_COMMON_BITMATRIX__CTOR_OFFSET UNITYSDK_OFFSET(0x188528C0)

namespace ZXing::Common
{
	inline static constexpr unsigned int BitMatrix_TypeDefinitionIndex = 8654;

	class BitMatrix : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* bits; // 0x10
		::System::Int32 width; // 0x18
		::System::Int32 rowSize; // 0x1C
		::System::Int32 height; // 0x20

		::System::Void _ctor(::System::Int32 dimension)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX__CTOR_OFFSET))(this, dimension);
		}

		::System::Void _ctor_1(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX__CTOR_1_OFFSET))(this, width, height);
		}

		::System::Int32 get_Width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX_GET_WIDTH_OFFSET))(this);
		}

		::System::Int32 get_Height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX_GET_HEIGHT_OFFSET))(this);
		}

		::System::Boolean get_Item(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX_GET_ITEM_OFFSET))(this, x, y);
		}

		::System::Void set_Item(::System::Int32 x, ::System::Int32 y, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX_SET_ITEM_OFFSET))(this, x, y, value);
		}

		::System::Void flip(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX_FLIP_OFFSET))(this, x, y);
		}

		::System::Void clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX_CLEAR_OFFSET))(this);
		}

		::System::Void setRegion(::System::Int32 left, ::System::Int32 top, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX_SETREGION_OFFSET))(this, left, top, width, height);
		}

		::ZXing::Common::BitArray* getRow(::System::Int32 y, ::ZXing::Common::BitArray* row)
		{
			return ((::ZXing::Common::BitArray*(*)(::PVOID, ::System::Int32, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX_GETROW_OFFSET))(this, y, row);
		}

		::Il2CppArray<::System::Int32>* getEnclosingRectangle()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX_GETENCLOSINGRECTANGLE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* setString, ::System::String* unsetString, ::System::String* lineSeparator)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX_TOSTRING_1_OFFSET))(this, setString, unsetString, lineSeparator);
		}

		::System::String* buildToString(::System::String* setString, ::System::String* unsetString, ::System::String* lineSeparator)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITMATRIX_BUILDTOSTRING_OFFSET))(this, setString, unsetString, lineSeparator);
		}
	};
}
