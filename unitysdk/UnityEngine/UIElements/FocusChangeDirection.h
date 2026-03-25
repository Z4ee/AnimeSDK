#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_GET_LASTVALUE_OFFSET UNITYSDK_OFFSET(0x18AD0810)
#define UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_GET_NONE_OFFSET UNITYSDK_OFFSET(0x18AD07B0)
#define UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_GET_UNSPECIFIED_OFFSET UNITYSDK_OFFSET(0x18AD0750)
#define UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x18AD0880)
#define UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AD0890)
#define UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD0870)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int FocusChangeDirection_TypeDefinitionIndex = 5841;

	class FocusChangeDirection : public ::System::Object
	{
	public:
		static ::UnityEngine::UIElements::FocusChangeDirection** StaticGet__lastValue_k__BackingField()
		{
			return (::UnityEngine::UIElements::FocusChangeDirection**)Il2CppClass::FromTypeDefinitionIndex(FocusChangeDirection_TypeDefinitionIndex)->GetStaticField(0x6F40);
		}
		static ::UnityEngine::UIElements::FocusChangeDirection** StaticGet__unspecified_k__BackingField()
		{
			return (::UnityEngine::UIElements::FocusChangeDirection**)Il2CppClass::FromTypeDefinitionIndex(FocusChangeDirection_TypeDefinitionIndex)->GetStaticField(0x6F48);
		}
		static ::UnityEngine::UIElements::FocusChangeDirection** StaticGet__none_k__BackingField()
		{
			return (::UnityEngine::UIElements::FocusChangeDirection**)Il2CppClass::FromTypeDefinitionIndex(FocusChangeDirection_TypeDefinitionIndex)->GetStaticField(0x6F50);
		}
		::System::Int32 m_Value; // 0x10

		::System::Void _ctor(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION__CTOR_OFFSET))(this, value);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION__CCTOR_OFFSET))();
		}

		static ::UnityEngine::UIElements::FocusChangeDirection* get_unspecified()
		{
			return ((::UnityEngine::UIElements::FocusChangeDirection*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_GET_UNSPECIFIED_OFFSET))();
		}

		static ::UnityEngine::UIElements::FocusChangeDirection* get_none()
		{
			return ((::UnityEngine::UIElements::FocusChangeDirection*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_GET_NONE_OFFSET))();
		}

		static ::UnityEngine::UIElements::FocusChangeDirection* get_lastValue()
		{
			return ((::UnityEngine::UIElements::FocusChangeDirection*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_GET_LASTVALUE_OFFSET))();
		}

		static ::System::Int32 op_Implicit(::UnityEngine::UIElements::FocusChangeDirection* fcd)
		{
			return ((::System::Int32(*)(::UnityEngine::UIElements::FocusChangeDirection*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_OP_IMPLICIT_OFFSET))(fcd);
		}
	};
}
