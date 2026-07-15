#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_GETPOINTERPOSITION_OFFSET UNITYSDK_OFFSET(0x1BA32020)
#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_GETPRESSEDBUTTONS_OFFSET UNITYSDK_OFFSET(0x1BA40700)
#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_HASADDITIONALPRESSEDBUTTONS_OFFSET UNITYSDK_OFFSET(0x1BA40790)
#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_PRESSBUTTON_OFFSET UNITYSDK_OFFSET(0x1BA312A0)
#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_RELEASEALLBUTTONS_OFFSET UNITYSDK_OFFSET(0x1BA3D0E0)
#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_RELEASEBUTTON_OFFSET UNITYSDK_OFFSET(0x1BA30D50)
#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_SAVEPOINTERPOSITION_OFFSET UNITYSDK_OFFSET(0x1BA405E0)
#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA40830)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerDeviceState_TypeDefinitionIndex = 6233;

	class PointerDeviceState : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_m_PressedButtons()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PointerDeviceState_TypeDefinitionIndex)->GetStaticField(0x41F30);
		}
		static ::Il2CppArray<::UnityEngine::Vector2>** StaticGet_m_Positions()
		{
			return (::Il2CppArray<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(PointerDeviceState_TypeDefinitionIndex)->GetStaticField(0x41F38);
		}
		static ::Il2CppArray<::UnityEngine::UIElements::IPanel*>** StaticGet_m_Panels()
		{
			return (::Il2CppArray<::UnityEngine::UIElements::IPanel*>**)Il2CppClass::FromTypeDefinitionIndex(PointerDeviceState_TypeDefinitionIndex)->GetStaticField(0x41F40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE__CCTOR_OFFSET))();
		}

		static ::System::Void SavePointerPosition(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::UIElements::IPanel* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector2, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_SAVEPOINTERPOSITION_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PressButton(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_PRESSBUTTON_OFFSET))(a1, a2);
		}

		static ::System::Void ReleaseButton(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_RELEASEBUTTON_OFFSET))(a1, a2);
		}

		static ::System::Void ReleaseAllButtons(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_RELEASEALLBUTTONS_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 GetPointerPosition(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector2(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_GETPOINTERPOSITION_OFFSET))(a1);
		}

		static ::System::Int32 GetPressedButtons(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_GETPRESSEDBUTTONS_OFFSET))(a1);
		}

		static ::System::Boolean HasAdditionalPressedButtons(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_HASADDITIONALPRESSEDBUTTONS_OFFSET))(a1, a2);
		}
	};
}
