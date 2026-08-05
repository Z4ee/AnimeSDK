#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class MonoRenderEntity;
class NapRenderEntity;
class NapRenderer;
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MONORENDERENTITYWRAPPER_GETNAPRENDERENTITY_OFFSET UNITYSDK_OFFSET(0x1DDFC3C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONORENDERENTITYWRAPPER_GETNAPRENDERER_OFFSET UNITYSDK_OFFSET(0x1DDFC640)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONORENDERENTITYWRAPPER_INIT_OFFSET UNITYSDK_OFFSET(0x1DDFC420)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONORENDERENTITYWRAPPER_SETHEADBONE_OFFSET UNITYSDK_OFFSET(0x1DDFC5D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONORENDERENTITYWRAPPER_SETMIDDLEPOINT_OFFSET UNITYSDK_OFFSET(0x1DDFC560)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONORENDERENTITYWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFC740)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MonoRenderEntityWrapper_TypeDefinitionIndex = 27605;

	class MonoRenderEntityWrapper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MonoRenderEntity* _monoRenderEntity; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONORENDERENTITYWRAPPER__CTOR_OFFSET))(this);
		}

		::NapRenderEntity* GetNapRenderEntity()
		{
			return ((::NapRenderEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONORENDERENTITYWRAPPER_GETNAPRENDERENTITY_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONORENDERENTITYWRAPPER_INIT_OFFSET))(this);
		}

		::System::Void SetMiddlePoint(::UnityEngine::Transform* middlePoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONORENDERENTITYWRAPPER_SETMIDDLEPOINT_OFFSET))(this, middlePoint);
		}

		::System::Void SetHeadBone(::UnityEngine::Transform* headBone)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONORENDERENTITYWRAPPER_SETHEADBONE_OFFSET))(this, headBone);
		}

		::NapRenderer* GetNapRenderer(::UnityEngine::Renderer* r)
		{
			return ((::NapRenderer*(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MONORENDERENTITYWRAPPER_GETNAPRENDERER_OFFSET))(this, r);
		}
	};
}
