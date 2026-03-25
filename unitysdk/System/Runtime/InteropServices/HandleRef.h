#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_HANDLEREF_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_HANDLEREF__CTOR_OFFSET UNITYSDK_OFFSET(0x72D10)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int HandleRef_TypeDefinitionIndex = 1418;

	struct alignas(8) HandleRef
	{
		::System::Object* m_wrapper; // 0x10
		::System::IntPtr m_handle; // 0x18

		::System::Void _ctor(::System::Object* wrapper, ::System::IntPtr handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_HANDLEREF__CTOR_OFFSET))(this, wrapper, handle);
		}

		::System::IntPtr get_Handle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_HANDLEREF_GET_HANDLE_OFFSET))(this);
		}
	};
}
