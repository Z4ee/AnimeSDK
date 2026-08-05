#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Runtime/InteropServices/UnmanagedType.h"
#include "unitysdk/System/Runtime/InteropServices/VarEnum.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHALASATTRIBUTE_COPY_OFFSET UNITYSDK_OFFSET(0x1D8C2A30)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int MarshalAsAttribute_TypeDefinitionIndex = 1438;

	class MarshalAsAttribute : public ::System::Attribute
	{
	public:
		::System::String* MarshalCookie; // 0x10
		::System::String* MarshalType; // 0x18
		::System::Type* MarshalTypeRef; // 0x20
		::System::Type* SafeArrayUserDefinedSubType; // 0x28
		::System::Runtime::InteropServices::UnmanagedType utype; // 0x30
		::System::Runtime::InteropServices::UnmanagedType ArraySubType; // 0x34
		::System::Runtime::InteropServices::VarEnum SafeArraySubType; // 0x38
		::System::Int32 SizeConst; // 0x3C
		::System::Int32 IidParameterIndex; // 0x40
		::System::Int16 SizeParamIndex; // 0x44

		::System::Runtime::InteropServices::MarshalAsAttribute* Copy()
		{
			return ((::System::Runtime::InteropServices::MarshalAsAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHALASATTRIBUTE_COPY_OFFSET))(this);
		}
	};
}
