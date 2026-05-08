#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/DecoderFallbackBuffer.h"

namespace System { class Object; }
namespace System::Text { class InternalDecoderBestFitFallback; }

#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x19EDCC00)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x19EDCE60)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_GET_INTERNALSYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x19EDC9C0)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x19EDCE80)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_INTERNALFALLBACK_OFFSET UNITYSDK_OFFSET(0x19EDCEA0)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x19EDCE90)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_TRYBESTFIT_OFFSET UNITYSDK_OFFSET(0x19EDCC50)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x19EDCA40)

namespace System::Text
{
	inline static constexpr unsigned int InternalDecoderBestFitFallbackBuffer_TypeDefinitionIndex = 453;

	class InternalDecoderBestFitFallbackBuffer : public ::System::Text::DecoderFallbackBuffer
	{
	public:
		static ::System::Object** StaticGet_s_InternalSyncObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(InternalDecoderBestFitFallbackBuffer_TypeDefinitionIndex)->GetStaticField(0x950);
		}
		::System::Text::InternalDecoderBestFitFallback* oFallback; // 0x20
		::System::Char cBestFit; // 0x28
		::System::Int32 iCount; // 0x2C
		::System::Int32 iSize; // 0x30

		::System::Void _ctor(::System::Text::InternalDecoderBestFitFallback* fallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::InternalDecoderBestFitFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER__CTOR_OFFSET))(this, fallback);
		}

		static ::System::Object* get_InternalSyncObject()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_GET_INTERNALSYNCOBJECT_OFFSET))();
		}

		::System::Boolean Fallback(::Il2CppArray<::System::Byte>* bytesUnknown, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_FALLBACK_OFFSET))(this, bytesUnknown, index);
		}

		::System::Char GetNextChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_GETNEXTCHAR_OFFSET))(this);
		}

		::System::Int32 get_Remaining()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_GET_REMAINING_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_RESET_OFFSET))(this);
		}

		::System::Int32 InternalFallback(::Il2CppArray<::System::Byte>* bytes, ::System::Byte* pBytes)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_INTERNALFALLBACK_OFFSET))(this, bytes, pBytes);
		}

		::System::Char TryBestFit(::Il2CppArray<::System::Byte>* bytesCheck)
		{
			return ((::System::Char(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_TRYBESTFIT_OFFSET))(this, bytesCheck);
		}
	};
}
