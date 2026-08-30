#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/UnityEngine/UI/ErrorType.h"
#include "unitysdk/UnityEngine/UI/TextPosition.h"

namespace System { class String; }

#define UNITYENGINE_UI_VALUEPARSEEXCEPTION_GETDEFAULTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1ECFB1B0)
#define UNITYENGINE_UI_VALUEPARSEEXCEPTION_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1ECFB0D0)
#define UNITYENGINE_UI_VALUEPARSEEXCEPTION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1ECFB0F0)
#define UNITYENGINE_UI_VALUEPARSEEXCEPTION_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1ECFB0E0)
#define UNITYENGINE_UI_VALUEPARSEEXCEPTION_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1ECFB100)
#define UNITYENGINE_UI_VALUEPARSEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ECF9280)
#define UNITYENGINE_UI_VALUEPARSEEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1ECF9560)
#define UNITYENGINE_UI_VALUEPARSEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECFB110)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ValueParseException_TypeDefinitionIndex = 6751;

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
