#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZXing::Aztec::Internal { class Token; }
namespace ZXing::Common { class BitArray; }

#define ZXING_AZTEC_INTERNAL_STATE_ADDBINARYSHIFTCHAR_OFFSET UNITYSDK_OFFSET(0x1AB2D0C0)
#define ZXING_AZTEC_INTERNAL_STATE_ENDBINARYSHIFT_OFFSET UNITYSDK_OFFSET(0x1AB2CAF0)
#define ZXING_AZTEC_INTERNAL_STATE_GET_BINARYSHIFTBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1AB2DA20)
#define ZXING_AZTEC_INTERNAL_STATE_GET_BITCOUNT_OFFSET UNITYSDK_OFFSET(0x1AB2DA30)
#define ZXING_AZTEC_INTERNAL_STATE_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1AB2DA10)
#define ZXING_AZTEC_INTERNAL_STATE_ISBETTERTHANOREQUALTO_OFFSET UNITYSDK_OFFSET(0x1AB2D640)
#define ZXING_AZTEC_INTERNAL_STATE_LATCHANDAPPEND_OFFSET UNITYSDK_OFFSET(0x1AB2CC10)
#define ZXING_AZTEC_INTERNAL_STATE_SHIFTANDAPPEND_OFFSET UNITYSDK_OFFSET(0x1AB2CE70)
#define ZXING_AZTEC_INTERNAL_STATE_TOBITARRAY_OFFSET UNITYSDK_OFFSET(0x1AB2B040)
#define ZXING_AZTEC_INTERNAL_STATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AB2DB80)
#define ZXING_AZTEC_INTERNAL_STATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB2DCA0)
#define ZXING_AZTEC_INTERNAL_STATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB2D9F0)

namespace ZXing::Aztec::Internal
{
	inline static constexpr unsigned int State_TypeDefinitionIndex = 19133;

	class State : public ::System::Object
	{
	public:
		static ::ZXing::Aztec::Internal::State** StaticGet_INITIAL_STATE()
		{
			return (::ZXing::Aztec::Internal::State**)Il2CppClass::FromTypeDefinitionIndex(State_TypeDefinitionIndex)->GetStaticField(0x8B30);
		}
		::ZXing::Aztec::Internal::Token* token; // 0x10
		::System::Int32 bitCount; // 0x18
		::System::Int32 binaryShiftByteCount; // 0x1C
		::System::Int32 mode; // 0x20

		::System::Void _ctor(::ZXing::Aztec::Internal::Token* token, ::System::Int32 mode, ::System::Int32 binaryBytes, ::System::Int32 bitCount)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Aztec::Internal::Token*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_STATE__CTOR_OFFSET))(this, token, mode, binaryBytes, bitCount);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_STATE__CCTOR_OFFSET))();
		}

		::System::Int32 get_Mode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_STATE_GET_MODE_OFFSET))(this);
		}

		::System::Int32 get_BinaryShiftByteCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_STATE_GET_BINARYSHIFTBYTECOUNT_OFFSET))(this);
		}

		::System::Int32 get_BitCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_STATE_GET_BITCOUNT_OFFSET))(this);
		}

		::ZXing::Aztec::Internal::State* latchAndAppend(::System::Int32 mode, ::System::Int32 value)
		{
			return ((::ZXing::Aztec::Internal::State*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_STATE_LATCHANDAPPEND_OFFSET))(this, mode, value);
		}

		::ZXing::Aztec::Internal::State* shiftAndAppend(::System::Int32 mode, ::System::Int32 value)
		{
			return ((::ZXing::Aztec::Internal::State*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_STATE_SHIFTANDAPPEND_OFFSET))(this, mode, value);
		}

		::ZXing::Aztec::Internal::State* addBinaryShiftChar(::System::Int32 index)
		{
			return ((::ZXing::Aztec::Internal::State*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_STATE_ADDBINARYSHIFTCHAR_OFFSET))(this, index);
		}

		::ZXing::Aztec::Internal::State* endBinaryShift(::System::Int32 index)
		{
			return ((::ZXing::Aztec::Internal::State*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_STATE_ENDBINARYSHIFT_OFFSET))(this, index);
		}

		::System::Boolean isBetterThanOrEqualTo(::ZXing::Aztec::Internal::State* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZXing::Aztec::Internal::State*))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_STATE_ISBETTERTHANOREQUALTO_OFFSET))(this, other);
		}

		::ZXing::Common::BitArray* toBitArray(::Il2CppArray<::System::Byte>* text)
		{
			return ((::ZXing::Common::BitArray*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_STATE_TOBITARRAY_OFFSET))(this, text);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_STATE_TOSTRING_OFFSET))(this);
		}
	};
}
