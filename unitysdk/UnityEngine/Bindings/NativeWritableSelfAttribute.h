#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_BINDINGS_NATIVEWRITABLESELFATTRIBUTE_SET_WRITABLESELF_OFFSET UNITYSDK_OFFSET(0x1A4F38B0)
#define UNITYENGINE_BINDINGS_NATIVEWRITABLESELFATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F38C0)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NativeWritableSelfAttribute_TypeDefinitionIndex = 3703;

	class NativeWritableSelfAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean _WritableSelf_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEWRITABLESELFATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void set_WritableSelf(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEWRITABLESELFATTRIBUTE_SET_WRITABLESELF_OFFSET))(this, value);
		}
	};
}
