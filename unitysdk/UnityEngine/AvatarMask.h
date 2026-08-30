#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AvatarMaskBodyPart.h"
#include "unitysdk/UnityEngine/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_AVATARMASK_ADDTRANSFORMPATH_1_OFFSET UNITYSDK_OFFSET(0x1ECF7EC0)
#define UNITYENGINE_AVATARMASK_ADDTRANSFORMPATH_OFFSET UNITYSDK_OFFSET(0x1ECF7EB0)
#define UNITYENGINE_AVATARMASK_COPY_OFFSET UNITYSDK_OFFSET(0x1ECF7FA0)
#define UNITYENGINE_AVATARMASK_GETHUMANOIDBODYPARTACTIVE_OFFSET UNITYSDK_OFFSET(0x1ECF7E70)
#define UNITYENGINE_AVATARMASK_GETTRANSFORMACTIVE_OFFSET UNITYSDK_OFFSET(0x1ECF7F30)
#define UNITYENGINE_AVATARMASK_GETTRANSFORMPATH_OFFSET UNITYSDK_OFFSET(0x1ECF7EF0)
#define UNITYENGINE_AVATARMASK_GETTRANSFORMWEIGHT_OFFSET UNITYSDK_OFFSET(0x1ECF7F10)
#define UNITYENGINE_AVATARMASK_GET_HASFEETIK_OFFSET UNITYSDK_OFFSET(0x1ECF7F90)
#define UNITYENGINE_AVATARMASK_GET_HUMANOIDBODYPARTCOUNT_OFFSET UNITYSDK_OFFSET(0x1ECF7E60)
#define UNITYENGINE_AVATARMASK_GET_TRANSFORMCOUNT_OFFSET UNITYSDK_OFFSET(0x1ECF7E90)
#define UNITYENGINE_AVATARMASK_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1ECF7E50)
#define UNITYENGINE_AVATARMASK_REMOVETRANSFORMPATH_1_OFFSET UNITYSDK_OFFSET(0x1ECF7EE0)
#define UNITYENGINE_AVATARMASK_REMOVETRANSFORMPATH_OFFSET UNITYSDK_OFFSET(0x1ECF7ED0)
#define UNITYENGINE_AVATARMASK_SETHUMANOIDBODYPARTACTIVE_OFFSET UNITYSDK_OFFSET(0x1ECF7E80)
#define UNITYENGINE_AVATARMASK_SETTRANSFORMACTIVE_OFFSET UNITYSDK_OFFSET(0x1ECF7F50)
#define UNITYENGINE_AVATARMASK_SETTRANSFORMPATH_OFFSET UNITYSDK_OFFSET(0x1ECF7F00)
#define UNITYENGINE_AVATARMASK_SETTRANSFORMWEIGHT_OFFSET UNITYSDK_OFFSET(0x1ECF7F20)
#define UNITYENGINE_AVATARMASK_SET_TRANSFORMCOUNT_OFFSET UNITYSDK_OFFSET(0x1ECF7EA0)
#define UNITYENGINE_AVATARMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECF7E40)

namespace UnityEngine
{
	inline static constexpr unsigned int AvatarMask_TypeDefinitionIndex = 5716;

	class AvatarMask : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_Create(::UnityEngine::AvatarMask* a1)
		{
			return ((::System::Void(*)(::UnityEngine::AvatarMask*))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_INTERNAL_CREATE_OFFSET))(a1);
		}

		::System::Int32 get_humanoidBodyPartCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GET_HUMANOIDBODYPARTCOUNT_OFFSET))(this);
		}

		::System::Boolean GetHumanoidBodyPartActive(::UnityEngine::AvatarMaskBodyPart a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AvatarMaskBodyPart))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GETHUMANOIDBODYPARTACTIVE_OFFSET))(this, a1);
		}

		::System::Void SetHumanoidBodyPartActive(::UnityEngine::AvatarMaskBodyPart a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarMaskBodyPart, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SETHUMANOIDBODYPARTACTIVE_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_transformCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GET_TRANSFORMCOUNT_OFFSET))(this);
		}

		::System::Void set_transformCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SET_TRANSFORMCOUNT_OFFSET))(this, a1);
		}

		::System::Void AddTransformPath(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_ADDTRANSFORMPATH_OFFSET))(this, a1);
		}

		::System::Void AddTransformPath_1(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_ADDTRANSFORMPATH_1_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveTransformPath(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_REMOVETRANSFORMPATH_OFFSET))(this, a1);
		}

		::System::Void RemoveTransformPath_1(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_REMOVETRANSFORMPATH_1_OFFSET))(this, a1, a2);
		}

		::System::String* GetTransformPath(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GETTRANSFORMPATH_OFFSET))(this, a1);
		}

		::System::Void SetTransformPath(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SETTRANSFORMPATH_OFFSET))(this, a1, a2);
		}

		::System::Single GetTransformWeight(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GETTRANSFORMWEIGHT_OFFSET))(this, a1);
		}

		::System::Void SetTransformWeight(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SETTRANSFORMWEIGHT_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetTransformActive(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GETTRANSFORMACTIVE_OFFSET))(this, a1);
		}

		::System::Void SetTransformActive(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SETTRANSFORMACTIVE_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_hasFeetIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GET_HASFEETIK_OFFSET))(this);
		}

		::System::Void Copy(::UnityEngine::AvatarMask* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarMask*))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_COPY_OFFSET))(this, a1);
		}
	};
}
