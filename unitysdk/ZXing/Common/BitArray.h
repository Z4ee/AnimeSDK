#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ZXING_COMMON_BITARRAY_APPENDBITARRAY_OFFSET UNITYSDK_OFFSET(0x1A73CEC0)
#define ZXING_COMMON_BITARRAY_APPENDBITS_OFFSET UNITYSDK_OFFSET(0x1A735E70)
#define ZXING_COMMON_BITARRAY_APPENDBIT_OFFSET UNITYSDK_OFFSET(0x1A73CE50)
#define ZXING_COMMON_BITARRAY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A73CE10)
#define ZXING_COMMON_BITARRAY_ENSURECAPACITY_OFFSET UNITYSDK_OFFSET(0x1A73CD20)
#define ZXING_COMMON_BITARRAY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A73D3B0)
#define ZXING_COMMON_BITARRAY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A73D480)
#define ZXING_COMMON_BITARRAY_GET_ARRAY_OFFSET UNITYSDK_OFFSET(0x1A73CEB0)
#define ZXING_COMMON_BITARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A736D50)
#define ZXING_COMMON_BITARRAY_GET_SIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x1A73CC50)
#define ZXING_COMMON_BITARRAY_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1A73CC40)
#define ZXING_COMMON_BITARRAY_MAKEARRAY_OFFSET UNITYSDK_OFFSET(0x1A73CD00)
#define ZXING_COMMON_BITARRAY_SETBULK_OFFSET UNITYSDK_OFFSET(0x1A73CDD0)
#define ZXING_COMMON_BITARRAY_TOBYTES_OFFSET UNITYSDK_OFFSET(0x1A73D110)
#define ZXING_COMMON_BITARRAY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A73D530)
#define ZXING_COMMON_BITARRAY_XOR_OFFSET UNITYSDK_OFFSET(0x1A73CF90)
#define ZXING_COMMON_BITARRAY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A73D640)
#define ZXING_COMMON_BITARRAY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A73CC60)
#define ZXING_COMMON_BITARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A737670)

namespace ZXing::Common
{
	inline static constexpr unsigned int BitArray_TypeDefinitionIndex = 6048;

	class BitArray : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet__lookup()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BitArray_TypeDefinitionIndex)->GetStaticField(0x1990);
		}
		::Il2CppArray<::System::Int32>* bits; // 0x10
		::System::Int32 size; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY__CTOR_1_OFFSET))(this, size);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY__CCTOR_OFFSET))();
		}

		::System::Int32 get_Size()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_GET_SIZE_OFFSET))(this);
		}

		::System::Int32 get_SizeInBytes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_GET_SIZEINBYTES_OFFSET))(this);
		}

		::System::Boolean get_Item(::System::Int32 i)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_GET_ITEM_OFFSET))(this, i);
		}

		::System::Void ensureCapacity(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_ENSURECAPACITY_OFFSET))(this, size);
		}

		::System::Void setBulk(::System::Int32 i, ::System::Int32 newBits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_SETBULK_OFFSET))(this, i, newBits);
		}

		::System::Void clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_CLEAR_OFFSET))(this);
		}

		::System::Void appendBit(::System::Boolean bit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_APPENDBIT_OFFSET))(this, bit);
		}

		::Il2CppArray<::System::Int32>* get_Array()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_GET_ARRAY_OFFSET))(this);
		}

		::System::Void appendBits(::System::Int32 value, ::System::Int32 numBits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_APPENDBITS_OFFSET))(this, value, numBits);
		}

		::System::Void appendBitArray(::ZXing::Common::BitArray* other)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_APPENDBITARRAY_OFFSET))(this, other);
		}

		::System::Void xor(::ZXing::Common::BitArray* other)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_XOR_OFFSET))(this, other);
		}

		::System::Void toBytes(::System::Int32 bitOffset, ::Il2CppArray<::System::Byte>* array, ::System::Int32 offset, ::System::Int32 numBytes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_TOBYTES_OFFSET))(this, bitOffset, array, offset, numBytes);
		}

		static ::Il2CppArray<::System::Int32>* makeArray(::System::Int32 size)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_MAKEARRAY_OFFSET))(size);
		}

		::System::Boolean Equals(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_EQUALS_OFFSET))(this, o);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_BITARRAY_TOSTRING_OFFSET))(this);
		}
	};
}
