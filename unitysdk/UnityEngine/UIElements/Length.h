#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UIElements/LengthUnit.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_UIELEMENTS_LENGTH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3A42F70)
#define UNITYENGINE_UIELEMENTS_LENGTH_EQUALS_OFFSET UNITYSDK_OFFSET(0x3A42F50)
#define UNITYENGINE_UIELEMENTS_LENGTH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3A42FE0)
#define UNITYENGINE_UIELEMENTS_LENGTH_GET_UNIT_OFFSET UNITYSDK_OFFSET(0x7A7C20)
#define UNITYENGINE_UIELEMENTS_LENGTH_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x167F50)
#define UNITYENGINE_UIELEMENTS_LENGTH_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BA3AA70)
#define UNITYENGINE_UIELEMENTS_LENGTH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3A43010)
#define UNITYENGINE_UIELEMENTS_LENGTH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x6E8720)
#define UNITYENGINE_UIELEMENTS_LENGTH__CTOR_OFFSET UNITYSDK_OFFSET(0x3A42F40)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Length_TypeDefinitionIndex = 6257;

	struct alignas(4) Length
	{
		::System::Single m_Value; // 0x10
		::UnityEngine::UIElements::LengthUnit m_Unit; // 0x14

		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Single a1, ::UnityEngine::UIElements::LengthUnit a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::UIElements::LengthUnit))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_GET_VALUE_OFFSET))(this);
		}

		::UnityEngine::UIElements::LengthUnit get_unit()
		{
			return ((::UnityEngine::UIElements::LengthUnit(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_GET_UNIT_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::UIElements::Length a1, ::UnityEngine::UIElements::Length a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::Length a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::Length))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_TOSTRING_OFFSET))(this);
		}
	};
}
