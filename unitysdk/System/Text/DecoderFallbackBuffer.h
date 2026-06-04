#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_TEXT_DECODERFALLBACKBUFFER_INTERNALFALLBACK_1_OFFSET UNITYSDK_OFFSET(0x185F0C30)
#define SYSTEM_TEXT_DECODERFALLBACKBUFFER_INTERNALFALLBACK_OFFSET UNITYSDK_OFFSET(0x185F0A90)
#define SYSTEM_TEXT_DECODERFALLBACKBUFFER_INTERNALINITIALIZE_OFFSET UNITYSDK_OFFSET(0x185EF1D0)
#define SYSTEM_TEXT_DECODERFALLBACKBUFFER_INTERNALRESET_OFFSET UNITYSDK_OFFSET(0x185EF1E0)
#define SYSTEM_TEXT_DECODERFALLBACKBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x185F0A60)
#define SYSTEM_TEXT_DECODERFALLBACKBUFFER_THROWLASTBYTESRECURSIVE_OFFSET UNITYSDK_OFFSET(0x185F0DB0)
#define SYSTEM_TEXT_DECODERFALLBACKBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x185F08B0)

namespace System::Text
{
	inline static constexpr unsigned int DecoderFallbackBuffer_TypeDefinitionIndex = 471;

	class DecoderFallbackBuffer : public ::System::Object
	{
	public:
		::System::Byte* byteStart; // 0x10
		::System::Char* charEnd; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKBUFFER__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKBUFFER_RESET_OFFSET))(this);
		}

		::System::Void InternalReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKBUFFER_INTERNALRESET_OFFSET))(this);
		}

		::System::Void InternalInitialize(::System::Byte* a1, ::System::Char* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKBUFFER_INTERNALINITIALIZE_OFFSET))(this, a1, a2);
		}

		::System::Boolean InternalFallback(::Il2CppArray<::System::Byte>* a1, ::System::Byte* a2, ::System::Char*& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Byte*, ::System::Char*&))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKBUFFER_INTERNALFALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 InternalFallback_1(::Il2CppArray<::System::Byte>* a1, ::System::Byte* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKBUFFER_INTERNALFALLBACK_1_OFFSET))(this, a1, a2);
		}

		::System::Void ThrowLastBytesRecursive(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_DECODERFALLBACKBUFFER_THROWLASTBYTESRECURSIVE_OFFSET))(this, a1);
		}
	};
}
