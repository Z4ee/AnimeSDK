#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_FREECAMERA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F2C1EB0)
#define UNITYENGINE_RENDERING_FREECAMERA_REGISTERINPUTS_OFFSET UNITYSDK_OFFSET(0x1F2C1EC0)
#define UNITYENGINE_RENDERING_FREECAMERA_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F2C1ED0)
#define UNITYENGINE_RENDERING_FREECAMERA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2C2930)
#define UNITYENGINE_RENDERING_FREECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2C2910)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int FreeCamera_TypeDefinitionIndex = 35469;

	class FreeCamera : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_kHorizontal()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FreeCamera_TypeDefinitionIndex)->GetStaticField(0x48960);
		}
		static ::System::String** StaticGet_kYAxis()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FreeCamera_TypeDefinitionIndex)->GetStaticField(0x48968);
		}
		static ::System::String** StaticGet_kRightStickY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FreeCamera_TypeDefinitionIndex)->GetStaticField(0x48970);
		}
		static ::System::String** StaticGet_kSpeedAxis()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FreeCamera_TypeDefinitionIndex)->GetStaticField(0x48978);
		}
		static ::System::String** StaticGet_kVertical()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FreeCamera_TypeDefinitionIndex)->GetStaticField(0x48980);
		}
		static ::System::String** StaticGet_kRightStickX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FreeCamera_TypeDefinitionIndex)->GetStaticField(0x48988);
		}
		static ::System::String** StaticGet_kMouseX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FreeCamera_TypeDefinitionIndex)->GetStaticField(0x48990);
		}
		static ::System::String** StaticGet_kMouseY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FreeCamera_TypeDefinitionIndex)->GetStaticField(0x48998);
		}
		::System::Single m_LookSpeedController; // 0x18
		::System::Single m_LookSpeedMouse; // 0x1C
		::System::Single m_MoveSpeed; // 0x20
		::System::Single m_MoveSpeedIncrement; // 0x24
		::System::Single m_Turbo; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FREECAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FREECAMERA__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FREECAMERA_ONENABLE_OFFSET))(this);
		}

		::System::Void RegisterInputs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FREECAMERA_REGISTERINPUTS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FREECAMERA_UPDATE_OFFSET))(this);
		}
	};
}
