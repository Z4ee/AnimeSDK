#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/FocusChangeDirection.h"

#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1B36C550)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1B36C5B0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B36C670)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B36C610)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualElementFocusChangeDirection_TypeDefinitionIndex = 6159;

	class VisualElementFocusChangeDirection : public ::UnityEngine::UIElements::FocusChangeDirection
	{
	public:
		static ::UnityEngine::UIElements::VisualElementFocusChangeDirection** StaticGet_s_Right()
		{
			return (::UnityEngine::UIElements::VisualElementFocusChangeDirection**)Il2CppClass::FromTypeDefinitionIndex(VisualElementFocusChangeDirection_TypeDefinitionIndex)->GetStaticField(0x2B30);
		}
		static ::UnityEngine::UIElements::VisualElementFocusChangeDirection** StaticGet_s_Left()
		{
			return (::UnityEngine::UIElements::VisualElementFocusChangeDirection**)Il2CppClass::FromTypeDefinitionIndex(VisualElementFocusChangeDirection_TypeDefinitionIndex)->GetStaticField(0x2B38);
		}

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION__CTOR_OFFSET))(this, a1);
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
