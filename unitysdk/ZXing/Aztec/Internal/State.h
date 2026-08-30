#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZXing::Aztec::Internal { class Token; }
namespace ZXing::Common { class BitArray; }

#define ZXING_AZTEC_INTERNAL_STATE_ADDBINARYSHIFTCHAR_OFFSET UNITYSDK_OFFSET(0x1EFDA320)
#define ZXING_AZTEC_INTERNAL_STATE_ENDBINARYSHIFT_OFFSET UNITYSDK_OFFSET(0x1EFD9D80)
#define ZXING_AZTEC_INTERNAL_STATE_GET_BINARYSHIFTBYTECOUNT_OFFSET UNITYSDK_OFFSET(0x1EFDAE90)
#define ZXING_AZTEC_INTERNAL_STATE_GET_BITCOUNT_OFFSET UNITYSDK_OFFSET(0x1EFDAEA0)
#define ZXING_AZTEC_INTERNAL_STATE_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1EFDAE80)
#define ZXING_AZTEC_INTERNAL_STATE_ISBETTERTHANOREQUALTO_OFFSET UNITYSDK_OFFSET(0x1EFDAA00)
#define ZXING_AZTEC_INTERNAL_STATE_LATCHANDAPPEND_OFFSET UNITYSDK_OFFSET(0x1EFD9EA0)
#define ZXING_AZTEC_INTERNAL_STATE_SHIFTANDAPPEND_OFFSET UNITYSDK_OFFSET(0x1EFDA0E0)
#define ZXING_AZTEC_INTERNAL_STATE_TOBITARRAY_OFFSET UNITYSDK_OFFSET(0x1EFD8430)
#define ZXING_AZTEC_INTERNAL_STATE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EFDAFF0)
#define ZXING_AZTEC_INTERNAL_STATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFDB110)
#define ZXING_AZTEC_INTERNAL_STATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFDAE60)

namespace ZXing::Aztec::Internal
{
	inline static constexpr unsigned int State_TypeDefinitionIndex = 6993;

	class State : public ::System::Object
	{
	public:
		static ::ZXing::Aztec::Internal::State** StaticGet_INITIAL_STATE()
		{
			return (::ZXing::Aztec::Internal::State**)Il2CppClass::FromTypeDefinitionIndex(State_TypeDefinitionIndex)->GetStaticField(0x25CE0);
		}
		::ZXing::Aztec::Internal::Token* token; // 0x10
		::System::Int32 mode; // 0x18
		::System::Int32 binaryShiftByteCount; // 0x1C
		::System::Int32 bitCount; // 0x20

		::System::Void _ctor(::ZXing::Aztec::Internal::Token* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Aztec::Internal::Token*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_STATE__CTOR_OFFSET))(this, a1, a2, a3, a4);
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

		::ZXing::Aztec::Internal::State* latchAndAppend(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::ZXing::Aztec::Internal::State*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_STATE_LATCHANDAPPEND_OFFSET))(this, a1, a2);
		}

		::ZXing::Aztec::Internal::State* shiftAndAppend(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::ZXing::Aztec::Internal::State*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_STATE_SHIFTANDAPPEND_OFFSET))(this, a1, a2);
		}

		::ZXing::Aztec::Internal::State* addBinaryShiftChar(::System::Int32 a1)
		{
			return ((::ZXing::Aztec::Internal::State*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_STATE_ADDBINARYSHIFTCHAR_OFFSET))(this, a1);
		}

		::ZXing::Aztec::Internal::State* endBinaryShift(::System::Int32 a1)
		{
			return ((::ZXing::Aztec::Internal::State*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_STATE_ENDBINARYSHIFT_OFFSET))(this, a1);
		}

		::System::Boolean isBetterThanOrEqualTo(::ZXing::Aztec::Internal::State* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZXing::Aztec::Internal::State*))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_STATE_ISBETTERTHANOREQUALTO_OFFSET))(this, a1);
		}

		::ZXing::Common::BitArray* toBitArray(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::ZXing::Common::BitArray*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_STATE_TOBITARRAY_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_STATE_TOSTRING_OFFSET))(this);
		}
	};
}
