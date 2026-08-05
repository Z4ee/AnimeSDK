#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_PROPERTYNAME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x826600)
#define UNITYENGINE_PROPERTYNAME_EQUALS_OFFSET UNITYSDK_OFFSET(0xA64370)
#define UNITYENGINE_PROPERTYNAME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x325570)
#define UNITYENGINE_PROPERTYNAME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EBE9F20)
#define UNITYENGINE_PROPERTYNAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA643D0)
#define UNITYENGINE_PROPERTYNAME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3253A0)
#define UNITYENGINE_PROPERTYNAME__CTOR_OFFSET UNITYSDK_OFFSET(0xA64340)

namespace UnityEngine
{
	inline static constexpr unsigned int PropertyName_TypeDefinitionIndex = 5315;

	struct alignas(4) PropertyName
	{
		::System::Int32 id; // 0x10

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAME__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1(::UnityEngine::PropertyName other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PropertyName))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAME__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::UnityEngine::PropertyName lhs, ::UnityEngine::PropertyName rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::PropertyName, ::UnityEngine::PropertyName))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAME_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAME_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAME_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::UnityEngine::PropertyName other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::PropertyName))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAME_EQUALS_1_OFFSET))(this, other);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAME_TOSTRING_OFFSET))(this);
		}
	};
}
