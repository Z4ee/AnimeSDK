#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define UNITYENGINE_TRANSFORM_ENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1A4925D0)
#define UNITYENGINE_TRANSFORM_ENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1A492600)
#define UNITYENGINE_TRANSFORM_ENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A492630)
#define UNITYENGINE_TRANSFORM_ENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4923B0)

namespace UnityEngine
{
	inline static constexpr unsigned int Transform_Enumerator_TypeDefinitionIndex = 4217;

	class Transform_Enumerator : public ::System::Object
	{
	public:
		::UnityEngine::Transform* outer; // 0x10
		::System::Int32 currentIndex; // 0x18

		::System::Void _ctor(::UnityEngine::Transform* outer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ENUMERATOR__CTOR_OFFSET))(this, outer);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
