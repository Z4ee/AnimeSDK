#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_GETPOINTERPOSITION_OFFSET UNITYSDK_OFFSET(0x1A508950)
#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_GETPRESSEDBUTTONS_OFFSET UNITYSDK_OFFSET(0x1A515C70)
#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_HASADDITIONALPRESSEDBUTTONS_OFFSET UNITYSDK_OFFSET(0x1A515D10)
#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_PRESSBUTTON_OFFSET UNITYSDK_OFFSET(0x1A507D80)
#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_RELEASEALLBUTTONS_OFFSET UNITYSDK_OFFSET(0x1A512B00)
#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_RELEASEBUTTON_OFFSET UNITYSDK_OFFSET(0x1A507890)
#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_SAVEPOINTERPOSITION_OFFSET UNITYSDK_OFFSET(0x1A515B30)
#define UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A515DB0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerDeviceState_TypeDefinitionIndex = 5951;

	class PointerDeviceState : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector2>** StaticGet_m_Positions()
		{
			return (::Il2CppArray<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(PointerDeviceState_TypeDefinitionIndex)->GetStaticField(0x1D3F0);
		}
		static ::Il2CppArray<::UnityEngine::UIElements::IPanel*>** StaticGet_m_Panels()
		{
			return (::Il2CppArray<::UnityEngine::UIElements::IPanel*>**)Il2CppClass::FromTypeDefinitionIndex(PointerDeviceState_TypeDefinitionIndex)->GetStaticField(0x1D3F8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_m_PressedButtons()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PointerDeviceState_TypeDefinitionIndex)->GetStaticField(0x1D400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE__CCTOR_OFFSET))();
		}

		static ::System::Void SavePointerPosition(::System::Int32 pointerId, ::UnityEngine::Vector2 position, ::UnityEngine::UIElements::IPanel* panel)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector2, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_SAVEPOINTERPOSITION_OFFSET))(pointerId, position, panel);
		}

		static ::System::Void PressButton(::System::Int32 pointerId, ::System::Int32 buttonId)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_PRESSBUTTON_OFFSET))(pointerId, buttonId);
		}

		static ::System::Void ReleaseButton(::System::Int32 pointerId, ::System::Int32 buttonId)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_RELEASEBUTTON_OFFSET))(pointerId, buttonId);
		}

		static ::System::Void ReleaseAllButtons(::System::Int32 pointerId)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_RELEASEALLBUTTONS_OFFSET))(pointerId);
		}

		static ::UnityEngine::Vector2 GetPointerPosition(::System::Int32 pointerId)
		{
			return ((::UnityEngine::Vector2(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_GETPOINTERPOSITION_OFFSET))(pointerId);
		}

		static ::System::Int32 GetPressedButtons(::System::Int32 pointerId)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_GETPRESSEDBUTTONS_OFFSET))(pointerId);
		}

		static ::System::Boolean HasAdditionalPressedButtons(::System::Int32 pointerId, ::System::Int32 exceptButtonId)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERDEVICESTATE_HASADDITIONALPRESSEDBUTTONS_OFFSET))(pointerId, exceptButtonId);
		}
	};
}
