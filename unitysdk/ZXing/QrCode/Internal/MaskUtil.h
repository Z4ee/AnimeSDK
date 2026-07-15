#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZXing::QrCode::Internal { class ByteMatrix; }

#define ZXING_QRCODE_INTERNAL_MASKUTIL_APPLYMASKPENALTYRULE1INTERNAL_OFFSET UNITYSDK_OFFSET(0x15567C50)
#define ZXING_QRCODE_INTERNAL_MASKUTIL_APPLYMASKPENALTYRULE1_OFFSET UNITYSDK_OFFSET(0x15563390)
#define ZXING_QRCODE_INTERNAL_MASKUTIL_APPLYMASKPENALTYRULE2_OFFSET UNITYSDK_OFFSET(0x155633C0)
#define ZXING_QRCODE_INTERNAL_MASKUTIL_APPLYMASKPENALTYRULE3_OFFSET UNITYSDK_OFFSET(0x15563540)
#define ZXING_QRCODE_INTERNAL_MASKUTIL_APPLYMASKPENALTYRULE4_OFFSET UNITYSDK_OFFSET(0x15563AD0)
#define ZXING_QRCODE_INTERNAL_MASKUTIL_GETDATAMASKBIT_OFFSET UNITYSDK_OFFSET(0x15567F70)
#define ZXING_QRCODE_INTERNAL_MASKUTIL_ISWHITEHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x15567E90)
#define ZXING_QRCODE_INTERNAL_MASKUTIL_ISWHITEVERTICAL_OFFSET UNITYSDK_OFFSET(0x15567EF0)

namespace ZXing::QrCode::Internal
{
	inline static constexpr unsigned int MaskUtil_TypeDefinitionIndex = 6430;

	class MaskUtil : public ::System::Object
	{
	public:
		static ::System::Int32 applyMaskPenaltyRule1(::ZXing::QrCode::Internal::ByteMatrix* a1)
		{
			return ((::System::Int32(*)(::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MASKUTIL_APPLYMASKPENALTYRULE1_OFFSET))(a1);
		}

		static ::System::Int32 applyMaskPenaltyRule2(::ZXing::QrCode::Internal::ByteMatrix* a1)
		{
			return ((::System::Int32(*)(::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MASKUTIL_APPLYMASKPENALTYRULE2_OFFSET))(a1);
		}

		static ::System::Int32 applyMaskPenaltyRule3(::ZXing::QrCode::Internal::ByteMatrix* a1)
		{
			return ((::System::Int32(*)(::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MASKUTIL_APPLYMASKPENALTYRULE3_OFFSET))(a1);
		}

		static ::System::Boolean isWhiteHorizontal(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MASKUTIL_ISWHITEHORIZONTAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean isWhiteVertical(::Il2CppArray<::Il2CppArray<::System::Byte>*>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::Il2CppArray<::System::Byte>*>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MASKUTIL_ISWHITEVERTICAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 applyMaskPenaltyRule4(::ZXing::QrCode::Internal::ByteMatrix* a1)
		{
			return ((::System::Int32(*)(::ZXing::QrCode::Internal::ByteMatrix*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MASKUTIL_APPLYMASKPENALTYRULE4_OFFSET))(a1);
		}

		static ::System::Boolean getDataMaskBit(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MASKUTIL_GETDATAMASKBIT_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 applyMaskPenaltyRule1Internal(::ZXing::QrCode::Internal::ByteMatrix* a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::ZXing::QrCode::Internal::ByteMatrix*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_MASKUTIL_APPLYMASKPENALTYRULE1INTERNAL_OFFSET))(a1, a2);
		}
	};
}
