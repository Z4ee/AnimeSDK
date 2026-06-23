#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZXing::QrCode::Internal { class ByteMatrix; }
namespace ZXing::QrCode::Internal { class ErrorCorrectionLevel; }
namespace ZXing::QrCode::Internal { class Mode; }
namespace ZXing::QrCode::Internal { class Version; }

#define ZXING_QRCODE_INTERNAL_QRCODE_GET_ECLEVEL_OFFSET UNITYSDK_OFFSET(0x1AB6A8A0)
#define ZXING_QRCODE_INTERNAL_QRCODE_GET_MASKPATTERN_OFFSET UNITYSDK_OFFSET(0x1AB6A8E0)
#define ZXING_QRCODE_INTERNAL_QRCODE_GET_MATRIX_OFFSET UNITYSDK_OFFSET(0x1AB6A900)
#define ZXING_QRCODE_INTERNAL_QRCODE_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1AB6A880)
#define ZXING_QRCODE_INTERNAL_QRCODE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1AB6A8C0)
#define ZXING_QRCODE_INTERNAL_QRCODE_ISVALIDMASKPATTERN_OFFSET UNITYSDK_OFFSET(0x1AB65820)
#define ZXING_QRCODE_INTERNAL_QRCODE_SET_ECLEVEL_OFFSET UNITYSDK_OFFSET(0x1AB6A8B0)
#define ZXING_QRCODE_INTERNAL_QRCODE_SET_MASKPATTERN_OFFSET UNITYSDK_OFFSET(0x1AB6A8F0)
#define ZXING_QRCODE_INTERNAL_QRCODE_SET_MATRIX_OFFSET UNITYSDK_OFFSET(0x1AB6A910)
#define ZXING_QRCODE_INTERNAL_QRCODE_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1AB6A890)
#define ZXING_QRCODE_INTERNAL_QRCODE_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1AB6A8D0)
#define ZXING_QRCODE_INTERNAL_QRCODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AB6A920)
#define ZXING_QRCODE_INTERNAL_QRCODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB6AB10)
#define ZXING_QRCODE_INTERNAL_QRCODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB61E10)

namespace ZXing::QrCode::Internal
{
	inline static constexpr unsigned int QRCode_TypeDefinitionIndex = 19165;

	class QRCode : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_NUM_MASK_PATTERNS()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(QRCode_TypeDefinitionIndex)->GetStaticField(0x44D0);
		}
		::ZXing::QrCode::Internal::ErrorCorrectionLevel* _ECLevel_k__BackingField; // 0x10
		::ZXing::QrCode::Internal::Version* _Version_k__BackingField; // 0x18
		::ZXing::QrCode::Internal::ByteMatrix* _Matrix_k__BackingField; // 0x20
		::ZXing::QrCode::Internal::Mode* _Mode_k__BackingField; // 0x28
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

		::System::Void set_Mode(::ZXing::QrCode::Internal::Mode* value)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::QrCode::Internal::Mode*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_QRCODE_SET_MODE_OFFSET))(this, value);
		}

		::ZXing::QrCode::Internal::ErrorCorrectionLevel* get_ECLevel()
		{
			return ((::ZXing::QrCode::Internal::ErrorCorrectionLevel*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_QRCODE_GET_ECLEVEL_OFFSET))(this);
		}

		::System::Void set_ECLevel(::ZXing::QrCode::Internal::ErrorCorrectionLevel* value)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::QrCode::Internal::ErrorCorrectionLevel*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_QRCODE_SET_ECLEVEL_OFFSET))(this, value);
		}

		::ZXing::QrCode::Internal::Version* get_Version()
		{
			return ((::ZXing::QrCode::Internal::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_QRCODE_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::ZXing::QrCode::Internal::Version* value)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::QrCode::Internal::Version*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_QRCODE_SET_VERSION_OFFSET))(this, value);
		}

		::System::Int32 get_MaskPattern()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_QRCODE_GET_MASKPATTERN_OFFSET))(this);
		}

		::System::Void set_MaskPattern(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_QRCODE_SET_MASKPATTERN_OFFSET))(this, value);
		}

		::ZXing::QrCode::Internal::ByteMatrix* get_Matrix()
		{
			return ((::ZXing::QrCode::Internal::ByteMatrix*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_QRCODE_GET_MATRIX_OFFSET))(this);
		}

		::System::Void set_Matrix(::ZXing::QrCode::Internal::ByteMatrix* value)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_QRCODE_SET_MATRIX_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_QRCODE_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean isValidMaskPattern(::System::Int32 maskPattern)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_QRCODE_ISVALIDMASKPATTERN_OFFSET))(maskPattern);
		}
	};
}
