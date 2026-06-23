#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Transform; }

#define UNITYENGINE_ANIMATIONS_CONSTRAINTSOURCE_GET_SOURCETRANSFORM_OFFSET UNITYSDK_OFFSET(0x246290)
#define UNITYENGINE_ANIMATIONS_CONSTRAINTSOURCE_SET_SOURCETRANSFORM_OFFSET UNITYSDK_OFFSET(0x2B6D10)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int ConstraintSource_TypeDefinitionIndex = 6692;

	struct alignas(8) ConstraintSource
	{
		::UnityEngine::Transform* m_SourceTransform; // 0x10
		::System::Single m_Weight; // 0x18

		::UnityEngine::Transform* get_sourceTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_CONSTRAINTSOURCE_GET_SOURCETRANSFORM_OFFSET))(this);
		}

		::System::Void set_sourceTransform(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_CONSTRAINTSOURCE_SET_SOURCETRANSFORM_OFFSET))(this, value);
		}
	};
}
