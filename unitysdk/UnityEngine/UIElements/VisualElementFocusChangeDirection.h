#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/FocusChangeDirection.h"

#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1D014410)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1D014470)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D014530)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0144D0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualElementFocusChangeDirection_TypeDefinitionIndex = 28082;

	class VisualElementFocusChangeDirection : public ::UnityEngine::UIElements::FocusChangeDirection
	{
	public:
		static ::UnityEngine::UIElements::VisualElementFocusChangeDirection** StaticGet_s_Left()
		{
			return (::UnityEngine::UIElements::VisualElementFocusChangeDirection**)Il2CppClass::FromTypeDefinitionIndex(VisualElementFocusChangeDirection_TypeDefinitionIndex)->GetStaticField(0x23E20);
		}
		static ::UnityEngine::UIElements::VisualElementFocusChangeDirection** StaticGet_s_Right()
		{
			return (::UnityEngine::UIElements::VisualElementFocusChangeDirection**)Il2CppClass::FromTypeDefinitionIndex(VisualElementFocusChangeDirection_TypeDefinitionIndex)->GetStaticField(0x23E28);
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
