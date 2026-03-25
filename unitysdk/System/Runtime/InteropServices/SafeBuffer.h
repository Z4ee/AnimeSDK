#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/SafeHandles/SafeHandleZeroOrMinusOneIsInvalid.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_ACQUIREPOINTER_OFFSET UNITYSDK_OFFSET(0x16394D90)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_GET_BYTELENGTH_OFFSET UNITYSDK_OFFSET(0x16394F10)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x16394D40)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_RELEASEPOINTER_OFFSET UNITYSDK_OFFSET(0x16394E90)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x16394CE0)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int SafeBuffer_TypeDefinitionIndex = 1428;

	class SafeBuffer : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid
	{
	public:
		::System::Boolean inited; // 0x20
		::System::UInt64 byte_length; // 0x28
		::System::Byte* last_byte; // 0x30

		::System::Void _ctor(::System::Boolean ownsHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER__CTOR_OFFSET))(this, ownsHandle);
		}

		::System::Void Initialize(::System::UInt64 numBytes)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_INITIALIZE_OFFSET))(this, numBytes);
		}

		::System::Void AcquirePointer(::System::Byte*& pointer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SAFEBUFFER_ACQUIREPOINTER_OFFSET))(this, pointer);
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
