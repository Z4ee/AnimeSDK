#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ARRAYEXTENSIONS_ARRAYEXTENSIONS_FOREACH_OFFSET UNITYSDK_OFFSET(0x1E7915F0)

namespace UnityEngine::Rendering::Universal::Internal::ArrayExtensions
{
	inline static constexpr unsigned int ArrayExtensions_TypeDefinitionIndex = 27824;

	class ArrayExtensions : public ::System::Object
	{
	public:
		static ::System::Void ForEach(::System::Array* array, ::System::Action_2<::System::Array*, ::Il2CppArray<::System::Int32>*>* action)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Action_2<::System::Array*, ::Il2CppArray<::System::Int32>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ARRAYEXTENSIONS_ARRAYEXTENSIONS_FOREACH_OFFSET))(array, action);
		}
	};
}
