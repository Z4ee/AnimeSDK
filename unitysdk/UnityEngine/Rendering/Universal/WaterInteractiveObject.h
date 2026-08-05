#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WaterInteractiveDynamicObjectState.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WaterInteractiveObjectType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::Rendering::Universal { class WaterInteractionManager_WaterInteractiveRenderItem; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT_COLLECTRENDERERS_OFFSET UNITYSDK_OFFSET(0x1E6734C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E674470)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E6743C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1E674060)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E673300)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1E673F80)
#define UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E674B20)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WaterInteractiveObject_TypeDefinitionIndex = 26958;

	class WaterInteractiveObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single InteractionIntensity; // 0x18
		::System::Single RippleIntensity; // 0x1C
		::System::Single FoamIntensity; // 0x20
		::System::Single InteractionRadius; // 0x24
		::UnityEngine::Rendering::Universal::WaterInteractiveObjectType ObjectType; // 0x28
		::UnityEngine::Mesh* waterInteractiveProxy; // 0x30
		::System::Boolean useAllRenderers; // 0x38
		::System::Single MinUpdateInterval; // 0x3C
		::System::Single UpdateToStaticInterval; // 0x40
		::System::Single PositionChangeThreshold; // 0x44
		::System::Single RotationChangeThreshold; // 0x48
		::System::Single ScaleChangeThreshold; // 0x4C
		::System::Boolean DrawStatic; // 0x50
		::System::Boolean DrawDynamic; // 0x51
		::UnityEngine::Rendering::Universal::WaterInteractiveDynamicObjectState DynamicObjectState; // 0x54
		::System::Single transformPositionDelta; // 0x58
		::System::Single transformRotationDelta; // 0x5C
		::System::Single transformScaleDelta; // 0x60
		::System::Single lastDynamicUpdateTime; // 0x64
		::System::Single lastUpdateToStaticTime; // 0x68
		::System::Boolean bInit; // 0x6C
		::System::Boolean bTimeUpdateToStatic; // 0x6D
		::System::Boolean bTimeUpdateDynamic; // 0x6E
		::System::Boolean bTransUpdate; // 0x6F
		::System::Boolean bTransUpdateDynamic; // 0x70
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::WaterInteractionManager_WaterInteractiveRenderItem*>* childRenderers; // 0x78
		::UnityEngine::Rendering::Universal::WaterInteractiveObjectType cachedObjectType; // 0x80
		::UnityEngine::Vector3 lastTransformPosition; // 0x84
		::UnityEngine::Quaternion lastTransformRotation; // 0x90
		::UnityEngine::Vector3 lastTransformScale; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT_ONENABLE_OFFSET))(this);
		}

		::System::Void CollectRenderers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT_COLLECTRENDERERS_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT_ONVALIDATE_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERINTERACTIVEOBJECT_LATEUPDATE_OFFSET))(this);
		}
	};
}
