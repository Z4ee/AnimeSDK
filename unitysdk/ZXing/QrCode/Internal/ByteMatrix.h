#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ZXING_QRCODE_INTERNAL_BYTEMATRIX_CLEAR_OFFSET UNITYSDK_OFFSET(0x16D71AC0)
#define ZXING_QRCODE_INTERNAL_BYTEMATRIX_GET_ARRAY_OFFSET UNITYSDK_OFFSET(0x16D71AB0)
#define ZXING_QRCODE_INTERNAL_BYTEMATRIX_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x16D71A40)
#define ZXING_QRCODE_INTERNAL_BYTEMATRIX_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x16D4C180)
#define ZXING_QRCODE_INTERNAL_BYTEMATRIX_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x16D71A50)
#define ZXING_QRCODE_INTERNAL_BYTEMATRIX_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x16D71A60)
#define ZXING_QRCODE_INTERNAL_BYTEMATRIX_SET_OFFSET UNITYSDK_OFFSET(0x16D4BF30)
#define ZXING_QRCODE_INTERNAL_BYTEMATRIX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16D71B60)
#define ZXING_QRCODE_INTERNAL_BYTEMATRIX__CTOR_OFFSET UNITYSDK_OFFSET(0x16D4BE30)

namespace ZXing::QrCode::Internal
{
	inline static constexpr unsigned int ByteMatrix_TypeDefinitionIndex = 6995;

	class ByteMatrix : public ::System::Object
	{
	public:
		::Il2CppArray<::Il2CppArray<::System::Byte>*>* bytes; // 0x10
		::System::Int32 width; // 0x18
		::System::Int32 height; // 0x1C

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_BYTEMATRIX__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_BYTEMATRIX_GET_HEIGHT_OFFSET))(this);
		}

		::System::Int32 get_Width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_BYTEMATRIX_GET_WIDTH_OFFSET))(this);
		}

		::System::Int32 get_Item(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_BYTEMATRIX_GET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_BYTEMATRIX_SET_ITEM_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::Il2CppArray<::System::Byte>*>* get_Array()
		{
			return ((::Il2CppArray<::Il2CppArray<::System::Byte>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_BYTEMATRIX_GET_ARRAY_OFFSET))(this);
		}

		::System::Void set(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_BYTEMATRIX_SET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void clear(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_BYTEMATRIX_CLEAR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_BYTEMATRIX_TOSTRING_OFFSET))(this);
		}
	};
}
