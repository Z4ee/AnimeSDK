#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZXing::QrCode::Internal { class ByteMatrix; }
namespace ZXing::QrCode::Internal { class ErrorCorrectionLevel; }
namespace ZXing::QrCode::Internal { class Mode; }
namespace ZXing::QrCode::Internal { class Version; }

#define ZXING_QRCODE_INTERNAL_QRCODE_GET_ECLEVEL_OFFSET UNITYSDK_OFFSET(0x1F6DCAC0)
#define ZXING_QRCODE_INTERNAL_QRCODE_GET_MASKPATTERN_OFFSET UNITYSDK_OFFSET(0x1F6DCB00)
#define ZXING_QRCODE_INTERNAL_QRCODE_GET_MATRIX_OFFSET UNITYSDK_OFFSET(0x1F6DCB20)
#define ZXING_QRCODE_INTERNAL_QRCODE_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1F6DCAA0)
#define ZXING_QRCODE_INTERNAL_QRCODE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1F6DCAE0)
#define ZXING_QRCODE_INTERNAL_QRCODE_ISVALIDMASKPATTERN_OFFSET UNITYSDK_OFFSET(0x1F6D8FC0)
#define ZXING_QRCODE_INTERNAL_QRCODE_SET_ECLEVEL_OFFSET UNITYSDK_OFFSET(0x1F6DCAD0)
#define ZXING_QRCODE_INTERNAL_QRCODE_SET_MASKPATTERN_OFFSET UNITYSDK_OFFSET(0x1F6DCB10)
#define ZXING_QRCODE_INTERNAL_QRCODE_SET_MATRIX_OFFSET UNITYSDK_OFFSET(0x1F6DCB30)
#define ZXING_QRCODE_INTERNAL_QRCODE_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1F6DCAB0)
#define ZXING_QRCODE_INTERNAL_QRCODE_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1F6DCAF0)
#define ZXING_QRCODE_INTERNAL_QRCODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F6DCB40)
#define ZXING_QRCODE_INTERNAL_QRCODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6DCE60)
#define ZXING_QRCODE_INTERNAL_QRCODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6D58C0)

namespace ZXing::QrCode::Internal
{
	inline static constexpr unsigned int QRCode_TypeDefinitionIndex = 7034;

	class QRCode : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_NUM_MASK_PATTERNS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(QRCode_TypeDefinitionIndex)->GetStaticField(0x7D80);
		}
		::ZXing::QrCode::Internal::ByteMatrix* _Matrix_k__BackingField; // 0x10
		::ZXing::QrCode::Internal::Mode* _Mode_k__BackingField; // 0x18
		::ZXing::QrCode::Internal::ErrorCorrectionLevel* _ECLevel_k__BackingField; // 0x20
		::ZXing::QrCode::Internal::Version* _Version_k__BackingField; // 0x28
		::System::Int32 _MaskPattern_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_QRCODE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_QRCODE__CCTOR_OFFSET))();
		}

		::ZXing::QrCode::Internal::Mode* get_Mode()
		{
			return ((::ZXing::QrCode::Internal::Mode*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_QRCODE_GET_MODE_OFFSET))(this);
		}

		::System::Void set_Mode(::ZXing::QrCode::Internal::Mode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::QrCode::Internal::Mode*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_QRCODE_SET_MODE_OFFSET))(this, a1);
		}

		::ZXing::QrCode::Internal::ErrorCorrectionLevel* get_ECLevel()
		{
			return ((::ZXing::QrCode::Internal::ErrorCorrectionLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_QRCODE_GET_ECLEVEL_OFFSET))(this);
		}

		::System::Void set_ECLevel(::ZXing::QrCode::Internal::ErrorCorrectionLevel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::QrCode::Internal::ErrorCorrectionLevel*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_QRCODE_SET_ECLEVEL_OFFSET))(this, a1);
		}

		::ZXing::QrCode::Internal::Version* get_Version()
		{
			return ((::ZXing::QrCode::Internal::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_QRCODE_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::ZXing::QrCode::Internal::Version* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::QrCode::Internal::Version*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_QRCODE_SET_VERSION_OFFSET))(this, a1);
		}

		::System::Int32 get_MaskPattern()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_QRCODE_GET_MASKPATTERN_OFFSET))(this);
		}

		::System::Void set_MaskPattern(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_QRCODE_SET_MASKPATTERN_OFFSET))(this, a1);
		}

		::ZXing::QrCode::Internal::ByteMatrix* get_Matrix()
		{
			return ((::ZXing::QrCode::Internal::ByteMatrix*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_QRCODE_GET_MATRIX_OFFSET))(this);
		}

		::System::Void set_Matrix(::ZXing::QrCode::Internal::ByteMatrix* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_QRCODE_SET_MATRIX_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_QRCODE_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean isValidMaskPattern(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_QRCODE_ISVALIDMASKPATTERN_OFFSET))(a1);
		}
	};
}
