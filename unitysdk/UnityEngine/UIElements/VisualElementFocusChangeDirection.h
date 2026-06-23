#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/FocusChangeDirection.h"

#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1BBFCE90)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1BBFCEF0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBFCFB0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBFCF50)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualElementFocusChangeDirection_TypeDefinitionIndex = 27480;

	class VisualElementFocusChangeDirection : public ::UnityEngine::UIElements::FocusChangeDirection
	{
	public:
		static ::UnityEngine::UIElements::VisualElementFocusChangeDirection** StaticGet_s_Right()
		{
			return (::UnityEngine::UIElements::VisualElementFocusChangeDirection**)Il2CppClass::FromTypeDefinitionIndex(VisualElementFocusChangeDirection_TypeDefinitionIndex)->GetStaticField(0x226B0);
		}
		static ::UnityEngine::UIElements::VisualElementFocusChangeDirection** StaticGet_s_Left()
		{
			return (::UnityEngine::UIElements::VisualElementFocusChangeDirection**)Il2CppClass::FromTypeDefinitionIndex(VisualElementFocusChangeDirection_TypeDefinitionIndex)->GetStaticField(0x226B8);
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
