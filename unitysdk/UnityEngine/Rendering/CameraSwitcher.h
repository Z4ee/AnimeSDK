#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class GUIContent; }
namespace UnityEngine::Rendering { class DebugUI_EnumField; }

#define UNITYENGINE_RENDERING_CAMERASWITCHER_GETCAMERACOUNT_OFFSET UNITYSDK_OFFSET(0x188CA050)
#define UNITYENGINE_RENDERING_CAMERASWITCHER_GETNEXTCAMERA_OFFSET UNITYSDK_OFFSET(0x188CA100)
#define UNITYENGINE_RENDERING_CAMERASWITCHER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x188CA090)
#define UNITYENGINE_RENDERING_CAMERASWITCHER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x188C9A20)
#define UNITYENGINE_RENDERING_CAMERASWITCHER_SETCAMERAINDEX_OFFSET UNITYSDK_OFFSET(0x188CA150)
#define UNITYENGINE_RENDERING_CAMERASWITCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x188CA460)
#define UNITYENGINE_RENDERING_CAMERASWITCHER__ONENABLE_B__10_0_OFFSET UNITYSDK_OFFSET(0x188CA470)
#define UNITYENGINE_RENDERING_CAMERASWITCHER__ONENABLE_B__10_1_OFFSET UNITYSDK_OFFSET(0x188CA480)
#define UNITYENGINE_RENDERING_CAMERASWITCHER__ONENABLE_B__10_2_OFFSET UNITYSDK_OFFSET(0x188CA490)
#define UNITYENGINE_RENDERING_CAMERASWITCHER__ONENABLE_B__10_3_OFFSET UNITYSDK_OFFSET(0x188CA4A0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CameraSwitcher_TypeDefinitionIndex = 27755;

	class CameraSwitcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Camera*>* m_Cameras; // 0x18
		::System::Int32 m_CurrentCameraIndex; // 0x20
		::UnityEngine::Camera* m_OriginalCamera; // 0x28
		::UnityEngine::Vector3 m_OriginalCameraPosition; // 0x30
		::UnityEngine::Quaternion m_OriginalCameraRotation; // 0x3C
		::UnityEngine::Camera* m_CurrentCamera; // 0x50
		::Il2CppArray<::UnityEngine::GUIContent*>* m_CameraNames; // 0x58
		::Il2CppArray<::System::Int32>* m_CameraIndices; // 0x60
		::UnityEngine::Rendering::DebugUI_EnumField* m_DebugEntry; // 0x68
		::System::Int32 m_DebugEntryEnumIndex; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERASWITCHER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERASWITCHER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERASWITCHER_ONDISABLE_OFFSET))(this);
		}

		::System::Int32 GetCameraCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERASWITCHER_GETCAMERACOUNT_OFFSET))(this);
		}

		::UnityEngine::Camera* GetNextCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERASWITCHER_GETNEXTCAMERA_OFFSET))(this);
		}

		::System::Void SetCameraIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERASWITCHER_SETCAMERAINDEX_OFFSET))(this, index);
		}

		::System::Int32 _OnEnable_b__10_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERASWITCHER__ONENABLE_B__10_0_OFFSET))(this);
		}

		::System::Void _OnEnable_b__10_1(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERASWITCHER__ONENABLE_B__10_1_OFFSET))(this, value);
		}

		::System::Int32 _OnEnable_b__10_2()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERASWITCHER__ONENABLE_B__10_2_OFFSET))(this);
		}

		::System::Void _OnEnable_b__10_3(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CAMERASWITCHER__ONENABLE_B__10_3_OFFSET))(this, value);
		}
	};
}
