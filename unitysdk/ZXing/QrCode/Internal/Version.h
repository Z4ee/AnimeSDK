#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZXing::QrCode::Internal { class ErrorCorrectionLevel; }
namespace ZXing::QrCode::Internal { class Version_ECBlocks; }

#define ZXING_QRCODE_INTERNAL_VERSION_BUILDVERSIONS_OFFSET UNITYSDK_OFFSET(0x1A7726E0)
#define ZXING_QRCODE_INTERNAL_VERSION_GETECBLOCKSFORLEVEL_OFFSET UNITYSDK_OFFSET(0x1A7691C0)
#define ZXING_QRCODE_INTERNAL_VERSION_GETVERSIONFORNUMBER_OFFSET UNITYSDK_OFFSET(0x1A768D60)
#define ZXING_QRCODE_INTERNAL_VERSION_GET_DIMENSIONFORVERSION_OFFSET UNITYSDK_OFFSET(0x1A76A3A0)
#define ZXING_QRCODE_INTERNAL_VERSION_GET_TOTALCODEWORDS_OFFSET UNITYSDK_OFFSET(0x1A7726C0)
#define ZXING_QRCODE_INTERNAL_VERSION_GET_VERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0x1A7726B0)
#define ZXING_QRCODE_INTERNAL_VERSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A7726D0)
#define ZXING_QRCODE_INTERNAL_VERSION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A77BA50)
#define ZXING_QRCODE_INTERNAL_VERSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A772600)

namespace ZXing::QrCode::Internal
{
	inline static constexpr unsigned int Version_TypeDefinitionIndex = 6061;

	class Version : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_VERSION_DECODE_INFO()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Version_TypeDefinitionIndex)->GetStaticField(0x5390);
		}
		static ::Il2CppArray<::ZXing::QrCode::Internal::Version*>** StaticGet_VERSIONS()
		{
			return (::Il2CppArray<::ZXing::QrCode::Internal::Version*>**)Il2CppClass::FromTypeDefinitionIndex(Version_TypeDefinitionIndex)->GetStaticField(0x5398);
		}
		::Il2CppArray<::System::Int32>* alignmentPatternCenters; // 0x10
		::Il2CppArray<::ZXing::QrCode::Internal::Version_ECBlocks*>* ecBlocks; // 0x18
		::System::Int32 totalCodewords; // 0x20
		::System::Int32 versionNumber; // 0x24

		::System::Void _ctor(::System::Int32 versionNumber, ::Il2CppArray<::System::Int32>* alignmentPatternCenters, ::Il2CppArray<::ZXing::QrCode::Internal::Version_ECBlocks*>* ecBlocks)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::ZXing::QrCode::Internal::Version_ECBlocks*>*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION__CTOR_OFFSET))(this, versionNumber, alignmentPatternCenters, ecBlocks);
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

		::ZXing::QrCode::Internal::Version_ECBlocks* getECBlocksForLevel(::ZXing::QrCode::Internal::ErrorCorrectionLevel* ecLevel)
		{
			return ((::ZXing::QrCode::Internal::Version_ECBlocks*(*)(::PVOID, ::ZXing::QrCode::Internal::ErrorCorrectionLevel*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_GETECBLOCKSFORLEVEL_OFFSET))(this, ecLevel);
		}

		static ::ZXing::QrCode::Internal::Version* getVersionForNumber(::System::Int32 versionNumber)
		{
			return ((::ZXing::QrCode::Internal::Version*(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_GETVERSIONFORNUMBER_OFFSET))(versionNumber);
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
