#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorControllerParameterType.h"

namespace System { class String; }

#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1ECF7450)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ECF7520)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_DEFAULTBOOL_OFFSET UNITYSDK_OFFSET(0x1ECF7430)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_DEFAULTFLOAT_OFFSET UNITYSDK_OFFSET(0x1ECF73F0)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_DEFAULTINT_OFFSET UNITYSDK_OFFSET(0x1ECF7410)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_NAMEHASH_OFFSET UNITYSDK_OFFSET(0x1ECF73B0)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1ECF73A0)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1ECF73E0)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_SET_DEFAULTBOOL_OFFSET UNITYSDK_OFFSET(0x1ECF7440)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_SET_DEFAULTFLOAT_OFFSET UNITYSDK_OFFSET(0x1ECF7400)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_SET_DEFAULTINT_OFFSET UNITYSDK_OFFSET(0x1ECF7420)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECF75B0)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorControllerParameter_TypeDefinitionIndex = 5706;

	class AnimatorControllerParameter : public ::System::Object
	{
	public:
		::System::String* m_Name; // 0x10
		::UnityEngine::AnimatorControllerParameterType m_Type; // 0x18
		::System::Single m_DefaultFloat; // 0x1C
		::System::Int32 m_DefaultInt; // 0x20
		::System::Boolean m_DefaultBool; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCONTROLLERPARAMETER__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_nameHash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_NAMEHASH_OFFSET))(this);
		}

		::UnityEngine::AnimatorControllerParameterType get_type()
		{
			return ((::UnityEngine::AnimatorControllerParameterType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_TYPE_OFFSET))(this);
		}

		::System::Single get_defaultFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_DEFAULTFLOAT_OFFSET))(this);
		}

		::System::Void set_defaultFloat(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCONTROLLERPARAMETER_SET_DEFAULTFLOAT_OFFSET))(this, a1);
		}

		::System::Int32 get_defaultInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_DEFAULTINT_OFFSET))(this);
		}

		::System::Void set_defaultInt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCONTROLLERPARAMETER_SET_DEFAULTINT_OFFSET))(this, a1);
		}

		::System::Boolean get_defaultBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_DEFAULTBOOL_OFFSET))(this);
		}

		::System::Void set_defaultBool(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCONTROLLERPARAMETER_SET_DEFAULTBOOL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCONTROLLERPARAMETER_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GETHASHCODE_OFFSET))(this);
		}
	};
}
