#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/UnityEngine/UI/ErrorType.h"
#include "unitysdk/UnityEngine/UI/TextPosition.h"

namespace System { class String; }

#define UNITYENGINE_UI_VALUEPARSEEXCEPTION_GETDEFAULTMESSAGE_OFFSET UNITYSDK_OFFSET(0x18B78190)
#define UNITYENGINE_UI_VALUEPARSEEXCEPTION_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x18B780B0)
#define UNITYENGINE_UI_VALUEPARSEEXCEPTION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x18B780D0)
#define UNITYENGINE_UI_VALUEPARSEEXCEPTION_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x18B780C0)
#define UNITYENGINE_UI_VALUEPARSEEXCEPTION_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x18B780E0)
#define UNITYENGINE_UI_VALUEPARSEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18B76710)
#define UNITYENGINE_UI_VALUEPARSEEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18B769F0)
#define UNITYENGINE_UI_VALUEPARSEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18B780F0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ValueParseException_TypeDefinitionIndex = 5627;

	class ValueParseException : public ::System::Exception
	{
	public:
		::UnityEngine::UI::ErrorType _Type_k__BackingField; // 0x88
		::UnityEngine::UI::TextPosition _Position_k__BackingField; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VALUEPARSEEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::UI::ErrorType type, ::UnityEngine::UI::TextPosition position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ErrorType, ::UnityEngine::UI::TextPosition))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VALUEPARSEEXCEPTION__CTOR_1_OFFSET))(this, type, position);
		}

		::System::Void _ctor_2(::System::String* message, ::UnityEngine::UI::ErrorType type, ::UnityEngine::UI::TextPosition position)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::UI::ErrorType, ::UnityEngine::UI::TextPosition))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VALUEPARSEEXCEPTION__CTOR_2_OFFSET))(this, message, type, position);
		}

		::UnityEngine::UI::TextPosition get_Position()
		{
			return ((::UnityEngine::UI::TextPosition(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VALUEPARSEEXCEPTION_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::UI::TextPosition value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::TextPosition))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VALUEPARSEEXCEPTION_SET_POSITION_OFFSET))(this, value);
		}

		::UnityEngine::UI::ErrorType get_Type()
		{
			return ((::UnityEngine::UI::ErrorType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VALUEPARSEEXCEPTION_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::UnityEngine::UI::ErrorType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ErrorType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VALUEPARSEEXCEPTION_SET_TYPE_OFFSET))(this, value);
		}

		static ::System::String* GetDefaultMessage(::UnityEngine::UI::ErrorType type)
		{
			return ((::System::String*(*)(::UnityEngine::UI::ErrorType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VALUEPARSEEXCEPTION_GETDEFAULTMESSAGE_OFFSET))(type);
		}
	};
}
