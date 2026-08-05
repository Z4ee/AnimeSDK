#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Runtime/InteropServices/CallingConvention.h"
#include "unitysdk/System/Runtime/InteropServices/CharSet.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_UNMANAGEDFUNCTIONPOINTERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB7F20)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int UnmanagedFunctionPointerAttribute_TypeDefinitionIndex = 1411;

	class UnmanagedFunctionPointerAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean ThrowOnUnmappableChar; // 0x10
		::System::Boolean BestFitMapping; // 0x11
		::System::Boolean SetLastError; // 0x12
		::System::Runtime::InteropServices::CallingConvention m_callingConvention; // 0x14
		::System::Runtime::InteropServices::CharSet CharSet; // 0x18

		::System::Void _ctor(::System::Runtime::InteropServices::CallingConvention callingConvention)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::InteropServices::CallingConvention))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_UNMANAGEDFUNCTIONPOINTERATTRIBUTE__CTOR_OFFSET))(this, callingConvention);
		}
	};
}
