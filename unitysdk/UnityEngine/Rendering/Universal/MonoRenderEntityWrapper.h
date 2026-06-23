#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class MonoRenderEntity;
class NapRenderEntity;
class NapRenderer;
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MONORENDERENTITYWRAPPER_GETNAPRENDERENTITY_OFFSET UNITYSDK_OFFSET(0x1C9A19E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONORENDERENTITYWRAPPER_GETNAPRENDERER_OFFSET UNITYSDK_OFFSET(0x1C9A1C60)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONORENDERENTITYWRAPPER_INIT_OFFSET UNITYSDK_OFFSET(0x1C9A1A40)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONORENDERENTITYWRAPPER_SETHEADBONE_OFFSET UNITYSDK_OFFSET(0x1C9A1BF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONORENDERENTITYWRAPPER_SETMIDDLEPOINT_OFFSET UNITYSDK_OFFSET(0x1C9A1B80)
#define UNITYENGINE_RENDERING_UNIVERSAL_MONORENDERENTITYWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9A1D60)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MonoRenderEntityWrapper_TypeDefinitionIndex = 26197;

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
