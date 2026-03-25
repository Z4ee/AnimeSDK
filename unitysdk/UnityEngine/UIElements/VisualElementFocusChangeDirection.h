#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/FocusChangeDirection.h"

#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x18AE4920)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x18AE4980)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AE4A40)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE49E0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualElementFocusChangeDirection_TypeDefinitionIndex = 5870;

	class VisualElementFocusChangeDirection : public ::UnityEngine::UIElements::FocusChangeDirection
	{
	public:
		static ::UnityEngine::UIElements::VisualElementFocusChangeDirection** StaticGet_s_Right()
		{
			return (::UnityEngine::UIElements::VisualElementFocusChangeDirection**)Il2CppClass::FromTypeDefinitionIndex(VisualElementFocusChangeDirection_TypeDefinitionIndex)->GetStaticField(0x8010);
		}
		static ::UnityEngine::UIElements::VisualElementFocusChangeDirection** StaticGet_s_Left()
		{
			return (::UnityEngine::UIElements::VisualElementFocusChangeDirection**)Il2CppClass::FromTypeDefinitionIndex(VisualElementFocusChangeDirection_TypeDefinitionIndex)->GetStaticField(0x8018);
		}

		::System::Void _ctor(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION__CTOR_OFFSET))(this, value);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION__CCTOR_OFFSET))();
		}

		static ::UnityEngine::UIElements::FocusChangeDirection* get_left()
		{
			return ((::UnityEngine::UIElements::FocusChangeDirection*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION_GET_LEFT_OFFSET))();
		}

		static ::UnityEngine::UIElements::FocusChangeDirection* get_right()
		{
			return ((::UnityEngine::UIElements::FocusChangeDirection*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION_GET_RIGHT_OFFSET))();
		}
	};
}
