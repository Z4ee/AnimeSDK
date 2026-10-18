#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/UnityEngine/UI/ErrorType.h"
#include "unitysdk/UnityEngine/UI/TextPosition.h"

namespace System { class String; }

#define UNITYENGINE_UI_VALUEPARSEEXCEPTION_GETDEFAULTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F5322F0)
#define UNITYENGINE_UI_VALUEPARSEEXCEPTION_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1F532210)
#define UNITYENGINE_UI_VALUEPARSEEXCEPTION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1F532230)
#define UNITYENGINE_UI_VALUEPARSEEXCEPTION_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1F532220)
#define UNITYENGINE_UI_VALUEPARSEEXCEPTION_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1F532240)
#define UNITYENGINE_UI_VALUEPARSEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F5303C0)
#define UNITYENGINE_UI_VALUEPARSEEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F5306A0)
#define UNITYENGINE_UI_VALUEPARSEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F532250)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ValueParseException_TypeDefinitionIndex = 6760;

	class ValueParseException : public ::System::Exception
	{
	public:
		::UnityEngine::UI::TextPosition _Position_k__BackingField; // 0x88
		::UnityEngine::UI::ErrorType _Type_k__BackingField; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VALUEPARSEEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::UI::ErrorType a1, ::UnityEngine::UI::TextPosition a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ErrorType, ::UnityEngine::UI::TextPosition))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VALUEPARSEEXCEPTION__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::String* a1, ::UnityEngine::UI::ErrorType a2, ::UnityEngine::UI::TextPosition a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::UI::ErrorType, ::UnityEngine::UI::TextPosition))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VALUEPARSEEXCEPTION__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::UI::TextPosition get_Position()
		{
			return ((::UnityEngine::UI::TextPosition(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VALUEPARSEEXCEPTION_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::UI::TextPosition a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::TextPosition))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VALUEPARSEEXCEPTION_SET_POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::UI::ErrorType get_Type()
		{
			return ((::UnityEngine::UI::ErrorType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VALUEPARSEEXCEPTION_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::UnityEngine::UI::ErrorType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ErrorType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VALUEPARSEEXCEPTION_SET_TYPE_OFFSET))(this, a1);
		}

		static ::System::String* GetDefaultMessage(::UnityEngine::UI::ErrorType a1)
		{
			return ((::System::String*(*)(::UnityEngine::UI::ErrorType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VALUEPARSEEXCEPTION_GETDEFAULTMESSAGE_OFFSET))(a1);
		}
	};
}
