#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/SafeHandles/SafeHandleZeroOrMinusOneIsInvalid.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_ACQUIREPOINTER_OFFSET UNITYSDK_OFFSET(0x19ED63F0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_RELEASEPOINTER_OFFSET UNITYSDK_OFFSET(0x19ED6470)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int SafeBuffer_TypeDefinitionIndex = 1440;

	class SafeBuffer : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid
	{
	public:
		::System::Boolean inited; // 0x20

		::System::Void AcquirePointer(::System::Byte*& pointer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_ACQUIREPOINTER_OFFSET))(this, pointer);
		}

		::System::Void ReleasePointer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_RELEASEPOINTER_OFFSET))(this);
		}
	};
}
