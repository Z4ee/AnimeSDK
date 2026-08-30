#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_FREECAMERA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EBFA560)
#define UNITYENGINE_RENDERING_FREECAMERA_REGISTERINPUTS_OFFSET UNITYSDK_OFFSET(0x1EBFA570)
#define UNITYENGINE_RENDERING_FREECAMERA_UPDATE_OFFSET UNITYSDK_OFFSET(0x1EBFA580)
#define UNITYENGINE_RENDERING_FREECAMERA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBFAFE0)
#define UNITYENGINE_RENDERING_FREECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBFAFC0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int FreeCamera_TypeDefinitionIndex = 34800;

	class FreeCamera : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_kRightStickY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FreeCamera_TypeDefinitionIndex)->GetStaticField(0x60960);
		}
		static ::System::String** StaticGet_kVertical()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FreeCamera_TypeDefinitionIndex)->GetStaticField(0x60968);
		}
		static ::System::String** StaticGet_kMouseY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FreeCamera_TypeDefinitionIndex)->GetStaticField(0x60970);
		}
		static ::System::String** StaticGet_kYAxis()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FreeCamera_TypeDefinitionIndex)->GetStaticField(0x60978);
		}
		static ::System::String** StaticGet_kMouseX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FreeCamera_TypeDefinitionIndex)->GetStaticField(0x60980);
		}
		static ::System::String** StaticGet_kHorizontal()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FreeCamera_TypeDefinitionIndex)->GetStaticField(0x60988);
		}
		static ::System::String** StaticGet_kRightStickX()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FreeCamera_TypeDefinitionIndex)->GetStaticField(0x60990);
		}
		static ::System::String** StaticGet_kSpeedAxis()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FreeCamera_TypeDefinitionIndex)->GetStaticField(0x60998);
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
