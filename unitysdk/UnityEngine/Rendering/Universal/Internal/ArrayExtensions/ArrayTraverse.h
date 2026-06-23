#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ARRAYEXTENSIONS_ARRAYTRAVERSE_STEP_OFFSET UNITYSDK_OFFSET(0x1B073730)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ARRAYEXTENSIONS_ARRAYTRAVERSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B073500)

namespace UnityEngine::Rendering::Universal::Internal::ArrayExtensions
{
	inline static constexpr unsigned int ArrayTraverse_TypeDefinitionIndex = 26862;

	class ArrayTraverse : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* maxLengths; // 0x10
		::Il2CppArray<::System::Int32>* Position; // 0x18

		::System::Void _ctor(::System::Array* array)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ARRAYEXTENSIONS_ARRAYTRAVERSE__CTOR_OFFSET))(this, array);
		}

		::System::Boolean Step()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ARRAYEXTENSIONS_ARRAYTRAVERSE_STEP_OFFSET))(this);
		}
	};
}
