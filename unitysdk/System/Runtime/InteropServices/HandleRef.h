#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_HANDLEREF_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x6020)
#define SYSTEM_RUNTIME_INTEROPSERVICES_HANDLEREF__CTOR_OFFSET UNITYSDK_OFFSET(0x80380)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int HandleRef_TypeDefinitionIndex = 1430;

	struct alignas(8) HandleRef
	{
		::System::Object* m_wrapper; // 0x10
		::System::IntPtr m_handle; // 0x18

		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_HANDLEREF__CTOR_OFFSET))(this, a1, a2);
		}

		::System::IntPtr get_Handle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_HANDLEREF_GET_HANDLE_OFFSET))(this);
		}
	};
}
