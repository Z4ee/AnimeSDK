#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_INTPTRHELPER_ADD_OFFSET UNITYSDK_OFFSET(0x1C705CE0)
#define SYSTEM_NET_INTPTRHELPER_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1C705CF0)

namespace System::Net
{
	inline static constexpr unsigned int IntPtrHelper_TypeDefinitionIndex = 3291;

	class IntPtrHelper : public ::System::Object
	{
	public:
		static ::System::IntPtr Add(::System::IntPtr a, ::System::Int32 b)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_INTPTRHELPER_ADD_OFFSET))(a, b);
		}

		static ::System::Int64 Subtract(::System::IntPtr a, ::System::IntPtr b)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_INTPTRHELPER_SUBTRACT_OFFSET))(a, b);
		}
	};
}
