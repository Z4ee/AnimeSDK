#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class ReflectionProbe; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SPECIFYREFLECTIONPROBE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1BDCE920)
#define UNITYENGINE_RENDERING_UNIVERSAL_SPECIFYREFLECTIONPROBE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BDCE740)
#define UNITYENGINE_RENDERING_UNIVERSAL_SPECIFYREFLECTIONPROBE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BDCE420)
#define UNITYENGINE_RENDERING_UNIVERSAL_SPECIFYREFLECTIONPROBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDCEAB0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SpecifyReflectionProbe_TypeDefinitionIndex = 27182;

	class SpecifyReflectionProbe : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::ReflectionProbe* m_ReflectionProbe; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* mats; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SPECIFYREFLECTIONPROBE__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SPECIFYREFLECTIONPROBE_UPDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SPECIFYREFLECTIONPROBE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SPECIFYREFLECTIONPROBE_ONDISABLE_OFFSET))(this);
		}
	};
}
