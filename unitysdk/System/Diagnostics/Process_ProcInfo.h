#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace System::Diagnostics
{
	inline static constexpr unsigned int Process_ProcInfo_TypeDefinitionIndex = 2542;

	struct alignas(8) Process_ProcInfo
	{
		::System::IntPtr process_handle; // 0x10
		::System::Int32 pid; // 0x18
		::Il2CppArray<::System::String*>* envVariables; // 0x20
		::System::String* UserName; // 0x28
		::System::String* Domain; // 0x30
		::System::IntPtr Password; // 0x38
		::System::Boolean LoadUserProfile; // 0x40
	};
}
