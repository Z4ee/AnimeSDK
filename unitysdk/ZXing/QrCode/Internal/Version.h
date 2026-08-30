#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZXing::QrCode::Internal { class ErrorCorrectionLevel; }
namespace ZXing::QrCode::Internal { class Version_ECBlocks; }

#define ZXING_QRCODE_INTERNAL_VERSION_BUILDVERSIONS_OFFSET UNITYSDK_OFFSET(0x1F0149F0)
#define ZXING_QRCODE_INTERNAL_VERSION_GETECBLOCKSFORLEVEL_OFFSET UNITYSDK_OFFSET(0x1F00C3D0)
#define ZXING_QRCODE_INTERNAL_VERSION_GETVERSIONFORNUMBER_OFFSET UNITYSDK_OFFSET(0x1F00BF90)
#define ZXING_QRCODE_INTERNAL_VERSION_GET_DIMENSIONFORVERSION_OFFSET UNITYSDK_OFFSET(0x1F00D3F0)
#define ZXING_QRCODE_INTERNAL_VERSION_GET_TOTALCODEWORDS_OFFSET UNITYSDK_OFFSET(0x1F0149D0)
#define ZXING_QRCODE_INTERNAL_VERSION_GET_VERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0x1F0149C0)
#define ZXING_QRCODE_INTERNAL_VERSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F0149E0)
#define ZXING_QRCODE_INTERNAL_VERSION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F01D3D0)
#define ZXING_QRCODE_INTERNAL_VERSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F014920)

namespace ZXing::QrCode::Internal
{
	inline static constexpr unsigned int Version_TypeDefinitionIndex = 6984;

	class Version : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_VERSION_DECODE_INFO()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Version_TypeDefinitionIndex)->GetStaticField(0x286E0);
		}
		static ::Il2CppArray<::ZXing::QrCode::Internal::Version*>** StaticGet_VERSIONS()
		{
			return (::Il2CppArray<::ZXing::QrCode::Internal::Version*>**)Il2CppClass::FromTypeDefinitionIndex(Version_TypeDefinitionIndex)->GetStaticField(0x286E8);
		}
		::Il2CppArray<::ZXing::QrCode::Internal::Version_ECBlocks*>* ecBlocks; // 0x10
		::Il2CppArray<::System::Int32>* alignmentPatternCenters; // 0x18
		::System::Int32 versionNumber; // 0x20
		::System::Int32 totalCodewords; // 0x24

		::System::Void _ctor(::System::Int32 a1, ::Il2CppArray<::System::Int32>* a2, ::Il2CppArray<::ZXing::QrCode::Internal::Version_ECBlocks*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::ZXing::QrCode::Internal::Version_ECBlocks*>*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION__CCTOR_OFFSET))();
		}

		::System::Int32 get_VersionNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_GET_VERSIONNUMBER_OFFSET))(this);
		}

		::System::Int32 get_TotalCodewords()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_GET_TOTALCODEWORDS_OFFSET))(this);
		}

		::System::Int32 get_DimensionForVersion()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_GET_DIMENSIONFORVERSION_OFFSET))(this);
		}

		::ZXing::QrCode::Internal::Version_ECBlocks* getECBlocksForLevel(::ZXing::QrCode::Internal::ErrorCorrectionLevel* a1)
		{
			return ((::ZXing::QrCode::Internal::Version_ECBlocks*(*)(::PVOID, ::ZXing::QrCode::Internal::ErrorCorrectionLevel*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_GETECBLOCKSFORLEVEL_OFFSET))(this, a1);
		}

		static ::ZXing::QrCode::Internal::Version* getVersionForNumber(::System::Int32 a1)
		{
			return ((::ZXing::QrCode::Internal::Version*(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_GETVERSIONFORNUMBER_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_TOSTRING_OFFSET))(this);
		}

		static ::Il2CppArray<::ZXing::QrCode::Internal::Version*>* buildVersions()
		{
			return ((::Il2CppArray<::ZXing::QrCode::Internal::Version*>*(*)())((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_BUILDVERSIONS_OFFSET))();
		}
	};
}
