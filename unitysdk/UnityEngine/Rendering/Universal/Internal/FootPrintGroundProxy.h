#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/FootPrintManager_FootPrintSpawnerType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Rendering::Universal::Internal { class FootPrintConfigScriptableObject; }
namespace UnityEngine::Rendering::Universal::WeatherSystem { class CommonSubVolume; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY_BAKEBOXDATA_OFFSET UNITYSDK_OFFSET(0x190B8520)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY_GETNPCFOOTSIZE_OFFSET UNITYSDK_OFFSET(0x190B9A30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY_GETPRESETSPAWNERWITHNAME_OFFSET UNITYSDK_OFFSET(0x190B90B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY_GETPRESETWHEELSPAWNERWITHNAME_OFFSET UNITYSDK_OFFSET(0x190B8D60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY_GET_DYNAMICRADIUS_OFFSET UNITYSDK_OFFSET(0x190BA7E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY_INSIDEVOLUME_OFFSET UNITYSDK_OFFSET(0x190B8980)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x190BA100)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x190BAF90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x190BA220)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY_REFRESHPROJECTIONMATRIXANDFOOTPRINTRT_ST_OFFSET UNITYSDK_OFFSET(0x190BA7F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY_REMOVESUBVOLUME_OFFSET UNITYSDK_OFFSET(0x190B8CD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY_SAVECOLLIDERDATA_OFFSET UNITYSDK_OFFSET(0x190B85F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x190B9CE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x190BB500)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int FootPrintGroundProxy_TypeDefinitionIndex = 30492;

	class FootPrintGroundProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Rendering::Universal::Internal::FootPrintGroundProxy** StaticGet_instance()
		{
			return (::UnityEngine::Rendering::Universal::Internal::FootPrintGroundProxy**)Il2CppClass::FromTypeDefinitionIndex(FootPrintGroundProxy_TypeDefinitionIndex)->GetStaticField(0x22C70);
		}
		// static const ::System::Single DynamicRadius; // 0x0
		::UnityEngine::Vector4 footPrintTextureScaleOffset; // 0x18
		::UnityEngine::Matrix4x4 transformWorldToLocalMatrix; // 0x28
		::UnityEngine::Rendering::Universal::Internal::FootPrintConfigScriptableObject* footPrintConfig; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::WeatherSystem::CommonSubVolume*>* excludeVolumes; // 0x70
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::Internal::FootPrintManager_FootPrintSpawnerType, ::UnityEngine::GameObject*>* PresetFootPrintSpawner; // 0x78
		::UnityEngine::Bounds bounds; // 0x80
		::UnityEngine::Vector3 positionCamera; // 0x98
		::UnityEngine::Matrix4x4 viewMatrix; // 0xA4
		::UnityEngine::Matrix4x4 projectionMatrix; // 0xE4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY__CTOR_OFFSET))(this);
		}

		::System::Void BakeBoxData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY_BAKEBOXDATA_OFFSET))(this);
		}

		::System::Boolean InsideVolume(::UnityEngine::Vector3 position)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY_INSIDEVOLUME_OFFSET))(this, position);
		}

		::System::Void RemoveSubVolume(::UnityEngine::Rendering::Universal::WeatherSystem::CommonSubVolume* subVolume)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::WeatherSystem::CommonSubVolume*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY_REMOVESUBVOLUME_OFFSET))(this, subVolume);
		}

		::UnityEngine::GameObject* GetPresetWheelSpawnerWithName(::UnityEngine::Object* holder, ::System::String*& wheelBoonName)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Object*, ::System::String*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY_GETPRESETWHEELSPAWNERWITHNAME_OFFSET))(this, holder, wheelBoonName);
		}

		::UnityEngine::GameObject* GetPresetSpawnerWithName(::UnityEngine::Object* holder, ::System::String*& leftFootName, ::System::String*& rightFootName, ::UnityEngine::Vector2& scale, ::UnityEngine::Vector4& leftRightOffset, ::System::Boolean& enableSpecialScaleOffset, ::UnityEngine::Vector2& extraOffset, ::System::Boolean& isLocalOffset)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Object*, ::System::String*&, ::System::String*&, ::UnityEngine::Vector2&, ::UnityEngine::Vector4&, ::System::Boolean&, ::UnityEngine::Vector2&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY_GETPRESETSPAWNERWITHNAME_OFFSET))(this, holder, leftFootName, rightFootName, scale, leftRightOffset, enableSpecialScaleOffset, extraOffset, isLocalOffset);
		}

		::System::Single GetNpcFootSize(::UnityEngine::Rendering::Universal::Internal::FootPrintManager_FootPrintSpawnerType type)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::FootPrintManager_FootPrintSpawnerType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY_GETNPCFOOTSIZE_OFFSET))(this, type);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY_LATEUPDATE_OFFSET))(this);
		}

		::System::Void SaveColliderData(::System::Boolean justForPreview)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY_SAVECOLLIDERDATA_OFFSET))(this, justForPreview);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Single get_dynamicRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY_GET_DYNAMICRADIUS_OFFSET))(this);
		}

		::System::Void RefreshProjectionMatrixAndFootPrintRT_ST(::UnityEngine::Vector3 cameraPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY_REFRESHPROJECTIONMATRIXANDFOOTPRINTRT_ST_OFFSET))(this, cameraPosition);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTGROUNDPROXY_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
