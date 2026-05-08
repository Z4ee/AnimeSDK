#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ZXING_QRCODE_INTERNAL_BLOCKPAIR_GET_DATABYTES_OFFSET UNITYSDK_OFFSET(0x18888FD0)
#define ZXING_QRCODE_INTERNAL_BLOCKPAIR_GET_ERRORCORRECTIONBYTES_OFFSET UNITYSDK_OFFSET(0x18888FE0)
#define ZXING_QRCODE_INTERNAL_BLOCKPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x18888FC0)

namespace ZXing::QrCode::Internal
{
	inline static constexpr unsigned int BlockPair_TypeDefinitionIndex = 8624;

	class BlockPair : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* dataBytes; // 0x10
		::Il2CppArray<::System::Byte>* errorCorrectionBytes; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::Byte>* data, ::Il2CppArray<::System::Byte>* errorCorrection)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_BLOCKPAIR__CTOR_OFFSET))(this, data, errorCorrection);
		}

		::Il2CppArray<::System::Byte>* get_DataBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_BLOCKPAIR_GET_DATABYTES_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_ErrorCorrectionBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_BLOCKPAIR_GET_ERRORCORRECTIONBYTES_OFFSET))(this);
		}
	};
}
