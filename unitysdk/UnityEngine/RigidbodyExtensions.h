#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RigidbodyConstraints.h"

namespace UnityEngine { class Rigidbody; }

#define UNITYENGINE_RIGIDBODYEXTENSIONS_HANDLECONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1A686B40)

namespace UnityEngine
{
	inline static constexpr unsigned int RigidbodyExtensions_TypeDefinitionIndex = 85698;

	class RigidbodyExtensions : public ::System::Object
	{
	public:
		static ::System::Void HandleConstraints(::UnityEngine::Rigidbody* rigidbody, ::System::Boolean inclusive_or, ::UnityEngine::RigidbodyConstraints constraint)
		{
			return ((::System::Void(*)(::UnityEngine::Rigidbody*, ::System::Boolean, ::UnityEngine::RigidbodyConstraints))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODYEXTENSIONS_HANDLECONSTRAINTS_OFFSET))(rigidbody, inclusive_or, constraint);
		}
	};
}
