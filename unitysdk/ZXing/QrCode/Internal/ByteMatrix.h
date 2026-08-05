#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ZXING_QRCODE_INTERNAL_BYTEMATRIX_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BE9EE10)
#define ZXING_QRCODE_INTERNAL_BYTEMATRIX_GET_ARRAY_OFFSET UNITYSDK_OFFSET(0x1BE9EE00)
#define ZXING_QRCODE_INTERNAL_BYTEMATRIX_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1BE9ED80)
#define ZXING_QRCODE_INTERNAL_BYTEMATRIX_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1BE77D80)
#define ZXING_QRCODE_INTERNAL_BYTEMATRIX_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1BE9ED90)
#define ZXING_QRCODE_INTERNAL_BYTEMATRIX_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1BE9EDA0)
#define ZXING_QRCODE_INTERNAL_BYTEMATRIX_SET_OFFSET UNITYSDK_OFFSET(0x1BE77B00)
#define ZXING_QRCODE_INTERNAL_BYTEMATRIX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BE9EEC0)
#define ZXING_QRCODE_INTERNAL_BYTEMATRIX__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE779D0)

namespace ZXing::QrCode::Internal
{
	inline static constexpr unsigned int ByteMatrix_TypeDefinitionIndex = 19480;

	class ByteMatrix : public ::System::Object
	{
	public:
		::Il2CppArray<::Il2CppArray<::System::Byte>*>* bytes; // 0x10
		::System::Int32 width; // 0x18
		::System::Int32 height; // 0x1C

		::System::Void _ctor(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_BYTEMATRIX__CTOR_OFFSET))(this, width, height);
		}

		::System::Int32 get_Height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_BYTEMATRIX_GET_HEIGHT_OFFSET))(this);
		}

		::System::Int32 get_Width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_BYTEMATRIX_GET_WIDTH_OFFSET))(this);
		}

		::System::Int32 get_Item(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_BYTEMATRIX_GET_ITEM_OFFSET))(this, x, y);
		}

		::System::Void set_Item(::System::Int32 x, ::System::Int32 y, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_BYTEMATRIX_SET_ITEM_OFFSET))(this, x, y, value);
		}

		::Il2CppArray<::Il2CppArray<::System::Byte>*>* get_Array()
		{
			return ((::Il2CppArray<::Il2CppArray<::System::Byte>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_BYTEMATRIX_GET_ARRAY_OFFSET))(this);
		}

		::System::Void set(::System::Int32 x, ::System::Int32 y, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_BYTEMATRIX_SET_OFFSET))(this, x, y, value);
		}

		::System::Void clear(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_BYTEMATRIX_CLEAR_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_BYTEMATRIX_TOSTRING_OFFSET))(this);
		}
	};
}
