#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Runtime/InteropServices/CharSet.h"
#include "unitysdk/System/Runtime/InteropServices/LayoutKind.h"

namespace System { class RuntimeType; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_STRUCTLAYOUTATTRIBUTE_GETCUSTOMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C459E40)
#define SYSTEM_RUNTIME_INTEROPSERVICES_STRUCTLAYOUTATTRIBUTE_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x1C45A130)
#define SYSTEM_RUNTIME_INTEROPSERVICES_STRUCTLAYOUTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C45A1F0)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int StructLayoutAttribute_TypeDefinitionIndex = 1422;

	class StructLayoutAttribute : public ::System::Attribute
	{
	public:
		::System::Runtime::InteropServices::LayoutKind _val; // 0x10
		::System::Runtime::InteropServices::CharSet CharSet; // 0x14
		::System::Int32 Size; // 0x18
		::System::Int32 Pack; // 0x1C

		::System::Void _ctor(::System::Runtime::InteropServices::LayoutKind a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Runtime::InteropServices::CharSet a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::InteropServices::LayoutKind, ::System::Int32, ::System::Int32, ::System::Runtime::InteropServices::CharSet))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_STRUCTLAYOUTATTRIBUTE__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Runtime::InteropServices::StructLayoutAttribute* GetCustomAttribute(::System::RuntimeType* a1)
		{
			return ((::System::Runtime::InteropServices::StructLayoutAttribute*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_STRUCTLAYOUTATTRIBUTE_GETCUSTOMATTRIBUTE_OFFSET))(a1);
		}

		static ::System::Boolean IsDefined(::System::RuntimeType* a1)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_STRUCTLAYOUTATTRIBUTE_ISDEFINED_OFFSET))(a1);
		}
	};
}
