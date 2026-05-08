#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_UI_PARTICLEAUTOORDER_SEARCHCANVAS_OFFSET UNITYSDK_OFFSET(0x1B169660)
#define UNITYENGINE_UI_PARTICLEAUTOORDER_START_OFFSET UNITYSDK_OFFSET(0x1B169230)
#define UNITYENGINE_UI_PARTICLEAUTOORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B169940)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ParticleAutoOrder_TypeDefinitionIndex = 43687;

	class ParticleAutoOrder : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 OrderOffset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_PARTICLEAUTOORDER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_PARTICLEAUTOORDER_START_OFFSET))(this);
		}

		::UnityEngine::Canvas* SearchCanvas(::UnityEngine::Transform* transform)
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_PARTICLEAUTOORDER_SEARCHCANVAS_OFFSET))(this, transform);
		}
	};
}
