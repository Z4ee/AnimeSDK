#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Animation; }

#define UNITYENGINE_ANIMATION_ENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D1ACA10)
#define UNITYENGINE_ANIMATION_ENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D1ACA40)
#define UNITYENGINE_ANIMATION_ENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D1ACA70)
#define UNITYENGINE_ANIMATION_ENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1AC890)

namespace UnityEngine
{
	inline static constexpr unsigned int Animation_Enumerator_TypeDefinitionIndex = 5168;

	class Animation_Enumerator : public ::System::Object
	{
	public:
		::UnityEngine::Animation* m_Outer; // 0x10
		::System::Int32 m_CurrentIndex; // 0x18

		::System::Void _ctor(::UnityEngine::Animation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_ENUMERATOR__CTOR_OFFSET))(this, a1);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_ENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_ENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATION_ENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
