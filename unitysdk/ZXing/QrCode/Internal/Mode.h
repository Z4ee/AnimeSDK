#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZXing::QrCode::Internal { class Version; }

#define ZXING_QRCODE_INTERNAL_MODE_GETCHARACTERCOUNTBITS_OFFSET UNITYSDK_OFFSET(0x1888CBD0)
#define ZXING_QRCODE_INTERNAL_MODE_GET_BITS_OFFSET UNITYSDK_OFFSET(0x18894DD0)
#define ZXING_QRCODE_INTERNAL_MODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18894DE0)
#define ZXING_QRCODE_INTERNAL_MODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18894DF0)
#define ZXING_QRCODE_INTERNAL_MODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18894DC0)

namespace ZXing::QrCode::Internal
{
	inline static constexpr unsigned int Mode_TypeDefinitionIndex = 8673;

	class Mode : public ::System::Object
	{
	public:
		static ::ZXing::QrCode::Internal::Mode** StaticGet_ECI()
		{
			return (::ZXing::QrCode::Internal::Mode**)Il2CppClass::FromTypeDefinitionIndex(Mode_TypeDefinitionIndex)->GetStaticField(0x7BF0);
		}
		static ::ZXing::QrCode::Internal::Mode** StaticGet_ALPHANUMERIC()
		{
			return (::ZXing::QrCode::Internal::Mode**)Il2CppClass::FromTypeDefinitionIndex(Mode_TypeDefinitionIndex)->GetStaticField(0x7BF8);
		}
		static ::ZXing::QrCode::Internal::Mode** StaticGet_NUMERIC()
		{
			return (::ZXing::QrCode::Internal::Mode**)Il2CppClass::FromTypeDefinitionIndex(Mode_TypeDefinitionIndex)->GetStaticField(0x7C00);
		}
		static ::ZXing::QrCode::Internal::Mode** StaticGet_FNC1_SECOND_POSITION()
		{
			return (::ZXing::QrCode::Internal::Mode**)Il2CppClass::FromTypeDefinitionIndex(Mode_TypeDefinitionIndex)->GetStaticField(0x7C08);
		}
		static ::ZXing::QrCode::Internal::Mode** StaticGet_KANJI()
		{
			return (::ZXing::QrCode::Internal::Mode**)Il2CppClass::FromTypeDefinitionIndex(Mode_TypeDefinitionIndex)->GetStaticField(0x7C10);
		}
		static ::ZXing::QrCode::Internal::Mode** StaticGet_FNC1_FIRST_POSITION()
		{
			return (::ZXing::QrCode::Internal::Mode**)Il2CppClass::FromTypeDefinitionIndex(Mode_TypeDefinitionIndex)->GetStaticField(0x7C18);
		}
		static ::ZXing::QrCode::Internal::Mode** StaticGet_STRUCTURED_APPEND()
		{
			return (::ZXing::QrCode::Internal::Mode**)Il2CppClass::FromTypeDefinitionIndex(Mode_TypeDefinitionIndex)->GetStaticField(0x7C20);
		}
		static ::ZXing::QrCode::Internal::Mode** StaticGet_BYTE()
		{
			return (::ZXing::QrCode::Internal::Mode**)Il2CppClass::FromTypeDefinitionIndex(Mode_TypeDefinitionIndex)->GetStaticField(0x7C28);
		}
		static ::ZXing::QrCode::Internal::Mode** StaticGet_HANZI()
		{
			return (::ZXing::QrCode::Internal::Mode**)Il2CppClass::FromTypeDefinitionIndex(Mode_TypeDefinitionIndex)->GetStaticField(0x7C30);
		}
		static ::ZXing::QrCode::Internal::Mode** StaticGet_TERMINATOR()
		{
			return (::ZXing::QrCode::Internal::Mode**)Il2CppClass::FromTypeDefinitionIndex(Mode_TypeDefinitionIndex)->GetStaticField(0x7C38);
		}
		::Il2CppArray<::System::Int32>* characterCountBitsForVersions; // 0x10
		::System::String* name; // 0x18
		::System::Int32 bits; // 0x20

		::System::Void _ctor(::Il2CppArray<::System::Int32>* characterCountBitsForVersions, ::System::Int32 bits, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MODE__CTOR_OFFSET))(this, characterCountBitsForVersions, bits, name);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MODE__CCTOR_OFFSET))();
		}

		::System::Int32 getCharacterCountBits(::ZXing::QrCode::Internal::Version* version)
		{
			return ((::System::Int32(*)(::PVOID, ::ZXing::QrCode::Internal::Version*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MODE_GETCHARACTERCOUNTBITS_OFFSET))(this, version);
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
