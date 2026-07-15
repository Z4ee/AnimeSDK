#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZXing::QrCode::Internal { class Version; }

#define ZXING_QRCODE_INTERNAL_MODE_GETCHARACTERCOUNTBITS_OFFSET UNITYSDK_OFFSET(0x155669A0)
#define ZXING_QRCODE_INTERNAL_MODE_GET_BITS_OFFSET UNITYSDK_OFFSET(0x1556D370)
#define ZXING_QRCODE_INTERNAL_MODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1556D380)
#define ZXING_QRCODE_INTERNAL_MODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1556D390)
#define ZXING_QRCODE_INTERNAL_MODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1556D360)

namespace ZXing::QrCode::Internal
{
	inline static constexpr unsigned int Mode_TypeDefinitionIndex = 6486;

	class Mode : public ::System::Object
	{
	public:
		static ::ZXing::QrCode::Internal::Mode** StaticGet_ECI()
		{
			return (::ZXing::QrCode::Internal::Mode**)Il2CppClass::FromTypeDefinitionIndex(Mode_TypeDefinitionIndex)->GetStaticField(0x25D0);
		}
		static ::ZXing::QrCode::Internal::Mode** StaticGet_FNC1_SECOND_POSITION()
		{
			return (::ZXing::QrCode::Internal::Mode**)Il2CppClass::FromTypeDefinitionIndex(Mode_TypeDefinitionIndex)->GetStaticField(0x25D8);
		}
		static ::ZXing::QrCode::Internal::Mode** StaticGet_NUMERIC()
		{
			return (::ZXing::QrCode::Internal::Mode**)Il2CppClass::FromTypeDefinitionIndex(Mode_TypeDefinitionIndex)->GetStaticField(0x25E0);
		}
		static ::ZXing::QrCode::Internal::Mode** StaticGet_BYTE()
		{
			return (::ZXing::QrCode::Internal::Mode**)Il2CppClass::FromTypeDefinitionIndex(Mode_TypeDefinitionIndex)->GetStaticField(0x25E8);
		}
		static ::ZXing::QrCode::Internal::Mode** StaticGet_FNC1_FIRST_POSITION()
		{
			return (::ZXing::QrCode::Internal::Mode**)Il2CppClass::FromTypeDefinitionIndex(Mode_TypeDefinitionIndex)->GetStaticField(0x25F0);
		}
		static ::ZXing::QrCode::Internal::Mode** StaticGet_HANZI()
		{
			return (::ZXing::QrCode::Internal::Mode**)Il2CppClass::FromTypeDefinitionIndex(Mode_TypeDefinitionIndex)->GetStaticField(0x25F8);
		}
		static ::ZXing::QrCode::Internal::Mode** StaticGet_STRUCTURED_APPEND()
		{
			return (::ZXing::QrCode::Internal::Mode**)Il2CppClass::FromTypeDefinitionIndex(Mode_TypeDefinitionIndex)->GetStaticField(0x2600);
		}
		static ::ZXing::QrCode::Internal::Mode** StaticGet_KANJI()
		{
			return (::ZXing::QrCode::Internal::Mode**)Il2CppClass::FromTypeDefinitionIndex(Mode_TypeDefinitionIndex)->GetStaticField(0x2608);
		}
		static ::ZXing::QrCode::Internal::Mode** StaticGet_TERMINATOR()
		{
			return (::ZXing::QrCode::Internal::Mode**)Il2CppClass::FromTypeDefinitionIndex(Mode_TypeDefinitionIndex)->GetStaticField(0x2610);
		}
		static ::ZXing::QrCode::Internal::Mode** StaticGet_ALPHANUMERIC()
		{
			return (::ZXing::QrCode::Internal::Mode**)Il2CppClass::FromTypeDefinitionIndex(Mode_TypeDefinitionIndex)->GetStaticField(0x2618);
		}
		::Il2CppArray<::System::Int32>* characterCountBitsForVersions; // 0x10
		::System::String* name; // 0x18
		::System::Int32 bits; // 0x20

		::System::Void _ctor(::Il2CppArray<::System::Int32>* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MODE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MODE__CCTOR_OFFSET))();
		}

		::System::Int32 getCharacterCountBits(::ZXing::QrCode::Internal::Version* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::ZXing::QrCode::Internal::Version*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MODE_GETCHARACTERCOUNTBITS_OFFSET))(this, a1);
		}

		::System::Int32 get_Bits()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MODE_GET_BITS_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MODE_TOSTRING_OFFSET))(this);
		}
	};
}
