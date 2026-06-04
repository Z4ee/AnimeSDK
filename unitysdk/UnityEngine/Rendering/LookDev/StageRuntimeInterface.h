#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }

#define UNITYENGINE_RENDERING_LOOKDEV_STAGERUNTIMEINTERFACE_ADDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B17C2C0)
#define UNITYENGINE_RENDERING_LOOKDEV_STAGERUNTIMEINTERFACE_GET_CAMERA_OFFSET UNITYSDK_OFFSET(0x1B17C2E0)
#define UNITYENGINE_RENDERING_LOOKDEV_STAGERUNTIMEINTERFACE_GET_SUNLIGHT_OFFSET UNITYSDK_OFFSET(0x1B17C300)
#define UNITYENGINE_RENDERING_LOOKDEV_STAGERUNTIMEINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B17C2B0)

namespace UnityEngine::Rendering::LookDev
{
	inline static constexpr unsigned int StageRuntimeInterface_TypeDefinitionIndex = 33864;

	class StageRuntimeInterface : public ::System::Object
	{
	public:
		::System::Func_1<::UnityEngine::Light*>* m_GetSunLight; // 0x10
		::System::Func_1<::UnityEngine::Camera*>* m_GetCamera; // 0x18
		::System::Func_2<::System::Boolean, ::UnityEngine::GameObject*>* m_AddGameObject; // 0x20
		::System::Object* SRPData; // 0x28

		::System::Void _ctor(::System::Func_2<::System::Boolean, ::UnityEngine::GameObject*>* a1, ::System::Func_1<::UnityEngine::Camera*>* a2, ::System::Func_1<::UnityEngine::Light*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Boolean, ::UnityEngine::GameObject*>*, ::System::Func_1<::UnityEngine::Camera*>*, ::System::Func_1<::UnityEngine::Light*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LOOKDEV_STAGERUNTIMEINTERFACE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::GameObject* AddGameObject(::System::Boolean a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LOOKDEV_STAGERUNTIMEINTERFACE_ADDGAMEOBJECT_OFFSET))(this, a1);
		}

		::UnityEngine::Camera* get_camera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LOOKDEV_STAGERUNTIMEINTERFACE_GET_CAMERA_OFFSET))(this);
		}

		::UnityEngine::Light* get_sunLight()
		{
			return ((::UnityEngine::Light*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LOOKDEV_STAGERUNTIMEINTERFACE_GET_SUNLIGHT_OFFSET))(this);
		}
	};
}
