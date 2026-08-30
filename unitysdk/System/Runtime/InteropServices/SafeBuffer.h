#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/SafeHandles/SafeHandleZeroOrMinusOneIsInvalid.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_ACQUIREPOINTER_OFFSET UNITYSDK_OFFSET(0x1C459670)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_GET_BYTELENGTH_OFFSET UNITYSDK_OFFSET(0x1C4597A0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C459620)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_RELEASEPOINTER_OFFSET UNITYSDK_OFFSET(0x1C459750)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C459590)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int SafeBuffer_TypeDefinitionIndex = 1439;

	class SafeBuffer : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid
	{
	public:
		::System::UInt64 byte_length; // 0x20
		::System::Boolean inited; // 0x28
		::System::Byte* last_byte; // 0x30

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER__CTOR_OFFSET))(this, a1);
		}

		::System::Void Initialize(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void AcquirePointer(::System::Byte*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_ACQUIREPOINTER_OFFSET))(this, a1);
		}

		::System::Void ReleasePointer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_RELEASEPOINTER_OFFSET))(this);
		}

		::System::UInt64 get_ByteLength()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_GET_BYTELENGTH_OFFSET))(this);
		}
	};
}
