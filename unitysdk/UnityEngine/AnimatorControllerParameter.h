#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorControllerParameterType.h"

namespace System { class String; }

#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B26A8E0)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B26A9B0)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_DEFAULTBOOL_OFFSET UNITYSDK_OFFSET(0x1B26A8C0)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_DEFAULTFLOAT_OFFSET UNITYSDK_OFFSET(0x1B26A880)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_DEFAULTINT_OFFSET UNITYSDK_OFFSET(0x1B26A8A0)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_NAMEHASH_OFFSET UNITYSDK_OFFSET(0x1B26A840)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B26A830)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1B26A870)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_SET_DEFAULTBOOL_OFFSET UNITYSDK_OFFSET(0x1B26A8D0)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_SET_DEFAULTFLOAT_OFFSET UNITYSDK_OFFSET(0x1B26A890)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER_SET_DEFAULTINT_OFFSET UNITYSDK_OFFSET(0x1B26A8B0)
#define UNITYENGINE_ANIMATORCONTROLLERPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B26AA40)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimatorControllerParameter_TypeDefinitionIndex = 5139;

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
