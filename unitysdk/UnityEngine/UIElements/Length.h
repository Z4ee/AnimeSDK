#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UIElements/LengthUnit.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_UIELEMENTS_LENGTH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x933210)
#define UNITYENGINE_UIELEMENTS_LENGTH_EQUALS_OFFSET UNITYSDK_OFFSET(0x9331F0)
#define UNITYENGINE_UIELEMENTS_LENGTH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x933280)
#define UNITYENGINE_UIELEMENTS_LENGTH_GET_UNIT_OFFSET UNITYSDK_OFFSET(0x3EA3D0)
#define UNITYENGINE_UIELEMENTS_LENGTH_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x45B300)
#define UNITYENGINE_UIELEMENTS_LENGTH_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BBE8500)
#define UNITYENGINE_UIELEMENTS_LENGTH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9332B0)
#define UNITYENGINE_UIELEMENTS_LENGTH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B04B0)
#define UNITYENGINE_UIELEMENTS_LENGTH__CTOR_OFFSET UNITYSDK_OFFSET(0x9331E0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Length_TypeDefinitionIndex = 27581;

	struct alignas(4) Length
	{
		::System::Single m_Value; // 0x10
		::UnityEngine::UIElements::LengthUnit m_Unit; // 0x14

		::System::Void _ctor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::System::Single value, ::UnityEngine::UIElements::LengthUnit unit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::UIElements::LengthUnit))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH__CTOR_1_OFFSET))(this, value, unit);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_GET_VALUE_OFFSET))(this);
		}

		::UnityEngine::UIElements::LengthUnit get_unit()
		{
			return ((::UnityEngine::UIElements::LengthUnit(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_GET_UNIT_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::UIElements::Length lhs, ::UnityEngine::UIElements::Length rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::UIElements::Length, ::UnityEngine::UIElements::Length))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::Length other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::Length))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LENGTH_EQUALS_1_OFFSET))(this, obj);
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
