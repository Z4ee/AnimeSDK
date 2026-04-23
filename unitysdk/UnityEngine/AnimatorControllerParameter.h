#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorControllerParameterType.h"

namespace System { class String; }

#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A416D10)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A416DD0)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_DEFAULTBOOL_OFFSET UNITYSDK_OFFSET(0x1A416CF0)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_DEFAULTFLOAT_OFFSET UNITYSDK_OFFSET(0x1A416CB0)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_DEFAULTINT_OFFSET UNITYSDK_OFFSET(0x1A416CD0)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_NAMEHASH_OFFSET UNITYSDK_OFFSET(0x1A416C70)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A416C60)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A416CA0)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_SET_DEFAULTBOOL_OFFSET UNITYSDK_OFFSET(0x1A416D00)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_SET_DEFAULTFLOAT_OFFSET UNITYSDK_OFFSET(0x1A416CC0)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_SET_DEFAULTINT_OFFSET UNITYSDK_OFFSET(0x1A416CE0)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A416E60)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorControllerParameter_TypeDefinitionIndex = 5045;

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

		::System::Void set_defaultFloat(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCONTROLLERPARAMETER_SET_DEFAULTFLOAT_OFFSET))(this, value);
		}

		::System::Int32 get_defaultInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_DEFAULTINT_OFFSET))(this);
		}

		::System::Void set_defaultInt(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCONTROLLERPARAMETER_SET_DEFAULTINT_OFFSET))(this, value);
		}

		::System::Boolean get_defaultBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_DEFAULTBOOL_OFFSET))(this);
		}

		::System::Void set_defaultBool(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCONTROLLERPARAMETER_SET_DEFAULTBOOL_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCONTROLLERPARAMETER_EQUALS_OFFSET))(this, o);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GETHASHCODE_OFFSET))(this);
		}
	};
}
