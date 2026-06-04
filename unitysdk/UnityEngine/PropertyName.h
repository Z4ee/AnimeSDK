#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_PROPERTYNAME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2C4D0)
#define UNITYENGINE_PROPERTYNAME_EQUALS_OFFSET UNITYSDK_OFFSET(0x3883B00)
#define UNITYENGINE_PROPERTYNAME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define UNITYENGINE_PROPERTYNAME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B2B8A00)
#define UNITYENGINE_PROPERTYNAME_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B2B8AA0)
#define UNITYENGINE_PROPERTYNAME_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B2B8A10)
#define UNITYENGINE_PROPERTYNAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3883B60)
#define UNITYENGINE_PROPERTYNAME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2C4C0)
#define UNITYENGINE_PROPERTYNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x3883AD0)

namespace UnityEngine
{
	inline static constexpr unsigned int PropertyName_TypeDefinitionIndex = 4231;

	struct alignas(4) PropertyName
	{
		::System::Int32 id; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAME__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::UnityEngine::PropertyName a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PropertyName))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAME__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::UnityEngine::PropertyName a1, ::UnityEngine::PropertyName a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::PropertyName, ::UnityEngine::PropertyName))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAME_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::PropertyName a1, ::UnityEngine::PropertyName a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::PropertyName, ::UnityEngine::PropertyName))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAME_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAME_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAME_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::PropertyName a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::PropertyName))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAME_EQUALS_1_OFFSET))(this, a1);
		}

		static ::UnityEngine::PropertyName op_Implicit(::System::String* a1)
		{
			return ((::UnityEngine::PropertyName(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAME_OP_IMPLICIT_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAME_TOSTRING_OFFSET))(this);
		}
	};
}
