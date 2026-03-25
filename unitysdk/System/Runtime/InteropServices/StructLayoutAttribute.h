#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Runtime/InteropServices/CharSet.h"
#include "unitysdk/System/Runtime/InteropServices/LayoutKind.h"

namespace System { class RuntimeType; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_STRUCTLAYOUTATTRIBUTE_GETCUSTOMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x16395350)
#define SYSTEM_RUNTIME_INTEROPSERVICES_STRUCTLAYOUTATTRIBUTE_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x16395550)
#define SYSTEM_RUNTIME_INTEROPSERVICES_STRUCTLAYOUTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x16395600)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int StructLayoutAttribute_TypeDefinitionIndex = 1410;

	class StructLayoutAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 Pack; // 0x10
		::System::Runtime::InteropServices::LayoutKind _val; // 0x14
		::System::Int32 Size; // 0x18
		::System::Runtime::InteropServices::CharSet CharSet; // 0x1C

		::System::Void _ctor(::System::Runtime::InteropServices::LayoutKind layoutKind, ::System::Int32 pack, ::System::Int32 size, ::System::Runtime::InteropServices::CharSet charSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::InteropServices::LayoutKind, ::System::Int32, ::System::Int32, ::System::Runtime::InteropServices::CharSet))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_STRUCTLAYOUTATTRIBUTE__CTOR_OFFSET))(this, layoutKind, pack, size, charSet);
		}

		static ::System::Runtime::InteropServices::StructLayoutAttribute* GetCustomAttribute(::System::RuntimeType* type)
		{
			return ((::System::Runtime::InteropServices::StructLayoutAttribute*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_STRUCTLAYOUTATTRIBUTE_GETCUSTOMATTRIBUTE_OFFSET))(type);
		}

		static ::System::Boolean IsDefined(::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_STRUCTLAYOUTATTRIBUTE_ISDEFINED_OFFSET))(type);
		}
	};
}
