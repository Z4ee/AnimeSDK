#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ZXING_PDF417_INTERNAL_PDF417ERRORCORRECTION_GENERATEERRORCORRECTION_OFFSET UNITYSDK_OFFSET(0x18D25DA0)
#define ZXING_PDF417_INTERNAL_PDF417ERRORCORRECTION_GETERRORCORRECTIONCODEWORDCOUNT_OFFSET UNITYSDK_OFFSET(0x18D25280)
#define ZXING_PDF417_INTERNAL_PDF417ERRORCORRECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D26730)

namespace ZXing::PDF417::Internal
{
	inline static constexpr unsigned int PDF417ErrorCorrection_TypeDefinitionIndex = 6086;

	class PDF417ErrorCorrection : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_EC_COEFFICIENTS()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(PDF417ErrorCorrection_TypeDefinitionIndex)->GetStaticField(0x8A10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417ERRORCORRECTION__CCTOR_OFFSET))();
		}

		static ::System::Int32 getErrorCorrectionCodewordCount(::System::Int32 errorCorrectionLevel)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417ERRORCORRECTION_GETERRORCORRECTIONCODEWORDCOUNT_OFFSET))(errorCorrectionLevel);
		}

		static ::System::String* generateErrorCorrection(::System::String* dataCodewords, ::System::Int32 errorCorrectionLevel)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417ERRORCORRECTION_GENERATEERRORCORRECTION_OFFSET))(dataCodewords, errorCorrectionLevel);
		}
	};
}
