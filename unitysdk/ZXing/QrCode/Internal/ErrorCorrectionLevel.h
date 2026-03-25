#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ZXING_QRCODE_INTERNAL_ERRORCORRECTIONLEVEL_GET_BITS_OFFSET UNITYSDK_OFFSET(0x18D301D0)
#define ZXING_QRCODE_INTERNAL_ERRORCORRECTIONLEVEL_ORDINAL_OFFSET UNITYSDK_OFFSET(0x18D301E0)
#define ZXING_QRCODE_INTERNAL_ERRORCORRECTIONLEVEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18D301F0)
#define ZXING_QRCODE_INTERNAL_ERRORCORRECTIONLEVEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D30200)
#define ZXING_QRCODE_INTERNAL_ERRORCORRECTIONLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x18D301C0)

namespace ZXing::QrCode::Internal
{
	inline static constexpr unsigned int ErrorCorrectionLevel_TypeDefinitionIndex = 6083;

	class ErrorCorrectionLevel : public ::System::Object
	{
	public:
		static ::ZXing::QrCode::Internal::ErrorCorrectionLevel** StaticGet_L()
		{
			return (::ZXing::QrCode::Internal::ErrorCorrectionLevel**)Il2CppClass::FromTypeDefinitionIndex(ErrorCorrectionLevel_TypeDefinitionIndex)->GetStaticField(0x4E0);
		}
		static ::ZXing::QrCode::Internal::ErrorCorrectionLevel** StaticGet_H()
		{
			return (::ZXing::QrCode::Internal::ErrorCorrectionLevel**)Il2CppClass::FromTypeDefinitionIndex(ErrorCorrectionLevel_TypeDefinitionIndex)->GetStaticField(0x4E8);
		}
		static ::ZXing::QrCode::Internal::ErrorCorrectionLevel** StaticGet_M()
		{
			return (::ZXing::QrCode::Internal::ErrorCorrectionLevel**)Il2CppClass::FromTypeDefinitionIndex(ErrorCorrectionLevel_TypeDefinitionIndex)->GetStaticField(0x4F0);
		}
		static ::ZXing::QrCode::Internal::ErrorCorrectionLevel** StaticGet_Q()
		{
			return (::ZXing::QrCode::Internal::ErrorCorrectionLevel**)Il2CppClass::FromTypeDefinitionIndex(ErrorCorrectionLevel_TypeDefinitionIndex)->GetStaticField(0x4F8);
		}
		static ::Il2CppArray<::ZXing::QrCode::Internal::ErrorCorrectionLevel*>** StaticGet_FOR_BITS()
		{
			return (::Il2CppArray<::ZXing::QrCode::Internal::ErrorCorrectionLevel*>**)Il2CppClass::FromTypeDefinitionIndex(ErrorCorrectionLevel_TypeDefinitionIndex)->GetStaticField(0x500);
		}
		::System::String* name; // 0x10
		::System::Int32 ordinal_Renamed_Field; // 0x18
		::System::Int32 bits; // 0x1C

		::System::Void _ctor(::System::Int32 ordinal, ::System::Int32 bits, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ERRORCORRECTIONLEVEL__CTOR_OFFSET))(this, ordinal, bits, name);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ERRORCORRECTIONLEVEL__CCTOR_OFFSET))();
		}

		::System::Int32 get_Bits()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ERRORCORRECTIONLEVEL_GET_BITS_OFFSET))(this);
		}

		::System::Int32 ordinal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ERRORCORRECTIONLEVEL_ORDINAL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_ERRORCORRECTIONLEVEL_TOSTRING_OFFSET))(this);
		}
	};
}
