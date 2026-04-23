#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace ZXing::Datamatrix::Encoder { class SymbolInfo; }

#define ZXING_DATAMATRIX_ENCODER_ERRORCORRECTION_CREATEECCBLOCK_1_OFFSET UNITYSDK_OFFSET(0x1A74AB00)
#define ZXING_DATAMATRIX_ENCODER_ERRORCORRECTION_CREATEECCBLOCK_OFFSET UNITYSDK_OFFSET(0x1A74AA90)
#define ZXING_DATAMATRIX_ENCODER_ERRORCORRECTION_ENCODEECC200_OFFSET UNITYSDK_OFFSET(0x1A742D80)
#define ZXING_DATAMATRIX_ENCODER_ERRORCORRECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A749C70)

namespace ZXing::Datamatrix::Encoder
{
	inline static constexpr unsigned int ErrorCorrection_TypeDefinitionIndex = 6119;

	class ErrorCorrection : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_FACTOR_SETS()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ErrorCorrection_TypeDefinitionIndex)->GetStaticField(0x4320);
		}
		static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_FACTORS()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(ErrorCorrection_TypeDefinitionIndex)->GetStaticField(0x4328);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_LOG()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ErrorCorrection_TypeDefinitionIndex)->GetStaticField(0x4330);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_ALOG()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ErrorCorrection_TypeDefinitionIndex)->GetStaticField(0x4338);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ERRORCORRECTION__CCTOR_OFFSET))();
		}

		static ::System::String* encodeECC200(::System::String* codewords, ::ZXing::Datamatrix::Encoder::SymbolInfo* symbolInfo)
		{
			return ((::System::String*(*)(::System::String*, ::ZXing::Datamatrix::Encoder::SymbolInfo*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ERRORCORRECTION_ENCODEECC200_OFFSET))(codewords, symbolInfo);
		}

		static ::System::String* createECCBlock(::System::String* codewords, ::System::Int32 numECWords)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ERRORCORRECTION_CREATEECCBLOCK_OFFSET))(codewords, numECWords);
		}

		static ::System::String* createECCBlock_1(::System::String* codewords, ::System::Int32 start, ::System::Int32 len, ::System::Int32 numECWords)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ERRORCORRECTION_CREATEECCBLOCK_1_OFFSET))(codewords, start, len, numECWords);
		}
	};
}
