#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZXing::Common { class BitArray; }

#define ZXING_COMMON_BITMATRIX_BUILDTOSTRING_OFFSET UNITYSDK_OFFSET(0x1BE6FB90)
#define ZXING_COMMON_BITMATRIX_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BE6F8F0)
#define ZXING_COMMON_BITMATRIX_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BE6F930)
#define ZXING_COMMON_BITMATRIX_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BE6F9F0)
#define ZXING_COMMON_BITMATRIX_GETROW_OFFSET UNITYSDK_OFFSET(0x1BE6EA20)
#define ZXING_COMMON_BITMATRIX_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1BE6F8E0)
#define ZXING_COMMON_BITMATRIX_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1BE677C0)
#define ZXING_COMMON_BITMATRIX_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1BE6F8D0)
#define ZXING_COMMON_BITMATRIX_SETREGION_OFFSET UNITYSDK_OFFSET(0x1BE67810)
#define ZXING_COMMON_BITMATRIX_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1BE68B40)
#define ZXING_COMMON_BITMATRIX_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1BE6FB80)
#define ZXING_COMMON_BITMATRIX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BE6FAD0)
#define ZXING_COMMON_BITMATRIX__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BE67730)
#define ZXING_COMMON_BITMATRIX__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE68A70)

namespace ZXing::Common
{
	inline static constexpr unsigned int BitMatrix_TypeDefinitionIndex = 19497;

	class BitMatrix : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* bits; // 0x10
		::System::Int32 rowSize; // 0x18
		::System::Int32 height; // 0x1C
		::System::Int32 width; // 0x20

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
