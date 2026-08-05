#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UIElements/StyleSheets/Dimension_Unit.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x97FBF0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_EQUALS_OFFSET UNITYSDK_OFFSET(0x97FBC0)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x97FC60)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D009D70)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x97FC90)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x97FBB0)

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int Dimension_TypeDefinitionIndex = 28222;

	struct alignas(4) Dimension
	{
		::UnityEngine::UIElements::StyleSheets::Dimension_Unit unit; // 0x10
		::System::Single value; // 0x14

		::System::Void _ctor(::System::Single value, ::UnityEngine::UIElements::StyleSheets::Dimension_Unit unit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::UIElements::StyleSheets::Dimension_Unit))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION__CTOR_OFFSET))(this, value, unit);
		}

		static ::System::Boolean op_Equality(::UnityEngine::UIElements::StyleSheets::Dimension lhs, ::UnityEngine::UIElements::StyleSheets::Dimension rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::UIElements::StyleSheets::Dimension, ::UnityEngine::UIElements::StyleSheets::Dimension))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::StyleSheets::Dimension other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::StyleSheets::Dimension))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_DIMENSION_TOSTRING_OFFSET))(this);
		}
	};
}
