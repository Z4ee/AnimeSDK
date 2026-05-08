#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_TRANSFORMHOOK_INVOKE_ONHOOKTRANSFORMSETEULERANGLES_OFFSET UNITYSDK_OFFSET(0x1B0C9D80)
#define UNITYENGINE_TRANSFORMHOOK_INVOKE_ONHOOKTRANSFORMSETLOCALEULERANGLES_OFFSET UNITYSDK_OFFSET(0x1B0C9E00)
#define UNITYENGINE_TRANSFORMHOOK_INVOKE_ONHOOKTRANSFORMSETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1B0C9C80)
#define UNITYENGINE_TRANSFORMHOOK_INVOKE_ONHOOKTRANSFORMSETLOCALSCALE_OFFSET UNITYSDK_OFFSET(0x1B0C9D00)
#define UNITYENGINE_TRANSFORMHOOK_INVOKE_ONHOOKTRANSFORMSETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B0C9C00)
#define UNITYENGINE_TRANSFORMHOOK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C9E80)

namespace UnityEngine
{
	inline static constexpr unsigned int TransformHook_TypeDefinitionIndex = 5345;

	class TransformHook : public ::System::Object
	{
	public:
		static ::System::Action_2<::UnityEngine::Transform*, ::UnityEngine::Vector3>** StaticGet_onHookSetLocalEulerAngles()
		{
			return (::System::Action_2<::UnityEngine::Transform*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(TransformHook_TypeDefinitionIndex)->GetStaticField(0x53B0);
		}
		static ::System::Action_2<::UnityEngine::Transform*, ::UnityEngine::Vector3>** StaticGet_onHookSetEulerAngles()
		{
			return (::System::Action_2<::UnityEngine::Transform*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(TransformHook_TypeDefinitionIndex)->GetStaticField(0x53B8);
		}
		static ::System::Action_2<::UnityEngine::Transform*, ::UnityEngine::Vector3>** StaticGet_onHookSetPosition()
		{
			return (::System::Action_2<::UnityEngine::Transform*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(TransformHook_TypeDefinitionIndex)->GetStaticField(0x53C0);
		}
		static ::System::Action_2<::UnityEngine::Transform*, ::UnityEngine::Vector3>** StaticGet_onHookSetLocalPosition()
		{
			return (::System::Action_2<::UnityEngine::Transform*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(TransformHook_TypeDefinitionIndex)->GetStaticField(0x53C8);
		}
		static ::System::Action_2<::UnityEngine::Transform*, ::UnityEngine::Vector3>** StaticGet_onHookSetLocalScale()
		{
			return (::System::Action_2<::UnityEngine::Transform*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(TransformHook_TypeDefinitionIndex)->GetStaticField(0x53D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMHOOK__CTOR_OFFSET))(this);
		}

		static ::System::Void invoke_onHookTransformSetPosition(::UnityEngine::Transform* trans, ::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMHOOK_INVOKE_ONHOOKTRANSFORMSETPOSITION_OFFSET))(trans, value);
		}

		static ::System::Void invoke_onHookTransformSetLocalPosition(::UnityEngine::Transform* trans, ::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMHOOK_INVOKE_ONHOOKTRANSFORMSETLOCALPOSITION_OFFSET))(trans, value);
		}

		static ::System::Void invoke_onHookTransformSetLocalScale(::UnityEngine::Transform* trans, ::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMHOOK_INVOKE_ONHOOKTRANSFORMSETLOCALSCALE_OFFSET))(trans, value);
		}

		static ::System::Void invoke_onHookTransformSetEulerAngles(::UnityEngine::Transform* trans, ::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMHOOK_INVOKE_ONHOOKTRANSFORMSETEULERANGLES_OFFSET))(trans, value);
		}

		static ::System::Void invoke_onHookTransformSetLocalEulerAngles(::UnityEngine::Transform* trans, ::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMHOOK_INVOKE_ONHOOKTRANSFORMSETLOCALEULERANGLES_OFFSET))(trans, value);
		}
	};
}
