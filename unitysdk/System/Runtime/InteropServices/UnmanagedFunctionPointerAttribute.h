#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Runtime/InteropServices/CallingConvention.h"
#include "unitysdk/System/Runtime/InteropServices/CharSet.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_UNMANAGEDFUNCTIONPOINTERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A827C10)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int UnmanagedFunctionPointerAttribute_TypeDefinitionIndex = 1396;

	class UnmanagedFunctionPointerAttribute : public ::System::Attribute
	{
	public:
		::System::Runtime::InteropServices::CallingConvention m_callingConvention; // 0x10
		::System::Boolean SetLastError; // 0x14
		::System::Boolean ThrowOnUnmappableChar; // 0x15
		::System::Boolean BestFitMapping; // 0x16
		::System::Runtime::InteropServices::CharSet CharSet; // 0x18

		::System::Void _ctor(::System::Runtime::InteropServices::CallingConvention a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::InteropServices::CallingConvention))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_UNMANAGEDFUNCTIONPOINTERATTRIBUTE__CTOR_OFFSET))(this, a1);
		}
	};
}
